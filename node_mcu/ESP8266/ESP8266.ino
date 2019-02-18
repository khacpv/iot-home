#define ON 1
#define OFF 0

unsigned long HcSR04_previousMillis = 0;
extern char messageStr[100];

void setup()
{
  Led_setup();
  Nokia5110_setup();
  HcSR04_setup();
  SockApi_setup();

  Nokia5110_backlight(ON);
}

void loop()
{
  unsigned long currentMillis = millis();
  if (currentMillis - HcSR04_previousMillis > 3000) {
    HcSR04_previousMillis = currentMillis;
    float distance = HcSR04_getDistance();
    Serial.print(distance);
    Serial.println("cm");
    sprintf(messageStr,"distance %d cm", distance);
    Nokia5110_print(messageStr);
  }
  SockApi_loop();
}
