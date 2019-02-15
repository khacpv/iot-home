#include <ESP8266WiFi.h>
#include <SocketIOClient.h>
#include <ArduinoJson.h>

StaticJsonBuffer<200> jsonBuffer;

SocketIOClient client;
const char *ssid = "GCS";
const char *password = "135792468";

char host[] = "192.168.1.9";
int port = 3000;

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

// LED
int led_pin = 5;

void setup()
{
  Led_setup(led_pin);
  Nokia5110_setup();
  
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
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  sprintf(ipStr, "%s", WiFi.localIP().toString().c_str());
  Nokia5110_print(ssid, ipStr, "connected!");

  if (!client.connect(host, port))
  {
    Serial.println("connection failed");
    return;
  }
  if (client.connected())
  {
    client.send("connection", "message", "Connected !!!!");
  }
}

void loop()
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis > interval)
  {
    previousMillis = currentMillis;
    //client.heartbeat(0);

    Serial.println(JSON);
    client.send("atime", "message", "Time please?");
    client.sendJSON("JSON", JSON);
    Led_on(led_pin);

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
      Led_off(led_pin);
    }
  }
}
