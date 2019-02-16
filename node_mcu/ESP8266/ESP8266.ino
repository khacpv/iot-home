#include <ESP8266WiFi.h>
#include <SocketIOClient.h>
#include <ArduinoJson.h>

#define ON 1
#define OFF 0

StaticJsonBuffer<200> jsonBuffer;

SocketIOClient client;
const char *ssid = "GCS";
const char *password = "135792468";

char host[] = "iot-anbinh.herokuapp.com";
int port = 80;

extern String RID;
extern String Rname;
extern String Rcontent;

unsigned long previousMillis = 0;
long interval = 5000;
unsigned long lastreply = 0;
unsigned long lastsend = 0;
String JSON;
JsonObject &root = jsonBuffer.createObject();
char ipStr[100];
char messageStr[100];

// LED
int led_pin = 5;

void setup()
{
  Led_setup(led_pin);
  Nokia5110_setup();

  Nokia5110_backlight(ON);
  
  root["sensor"] = "gps";
  root["time"] = 1351824120;
  JsonArray &data = root.createNestedArray("data");
  data.add(double_with_n_digits(48.756080, 6));
  data.add(double_with_n_digits(2.302038, 6));
  root.printTo(JSON);
  Serial.begin(115200);
  delay(10);

  // We start by connecting to a WiFi network

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
    sprintf(messageStr,"connecting wifi!");
    Nokia5110_print(messageStr);
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  sprintf(ipStr, "%s", WiFi.localIP().toString().c_str());
  sprintf(messageStr,"connected router!");
  Nokia5110_print(ssid, ipStr, messageStr);

  if (!client.connect(host, port))
  {
    Serial.println("connection failed");
    sprintf(messageStr,"connect server failed!");
    Nokia5110_print(messageStr);
    return;
  }
  if (client.connected())
  {
    client.send("connection", "message", "Connected !!!!");
    sprintf(messageStr,"connected server!");
    Nokia5110_print(ssid, ipStr, messageStr);
  }
}

void loop()
{
  if (WiFi.status() != WL_CONNECTED){
    sprintf(messageStr,"disconnected wifi!");
    Nokia5110_print(messageStr);
    delay(500);
    return;
  }
  if (!client.connected())
  {
    client.send("connection", "message", "Connected !!!!");
    sprintf(messageStr,"retrying connect...");
    Nokia5110_print(ssid, ipStr, messageStr);
    delay(500);
    client.connect(host, port);
    return;
  }
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis > interval)
  {
    previousMillis = currentMillis;
    //client.heartbeat(0);

    Serial.println(JSON);
    client.send("atime", "message", "Time please?");
    client.sendJSON("JSON", JSON);
    Led_on(led_pin);
    sprintf(messageStr,"sent %d", lastsend);
    Nokia5110_print(ssid, ipStr, messageStr);
    lastsend = millis();
  }
  if (client.monitor())
  {
    lastreply = millis();
    Serial.println(RID);
    if (RID == "atime" && Rname == "time")
    {
      Serial.print("Il est ");
      Serial.println(Rcontent);
      sprintf(messageStr,"msg: %s", Rcontent.c_str());
      Nokia5110_print(ssid, ipStr, messageStr);
      Led_off(led_pin);
    }
  }
}
