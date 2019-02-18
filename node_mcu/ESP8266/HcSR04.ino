const int PIN_TRIG = 0;
const int PIN_ECHO = 16;

void HcSR04_setup() {
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
}

float HcSR04_getDistance() {
  unsigned long duration, distance;
  // phat xung tu chan TRIG
  digitalWrite(PIN_TRIG, LOW);  // tat chan trig
  delayMicroseconds(2);
  digitalWrite(PIN_TRIG, HIGH);  // phat xung tu chan trig
  delayMicroseconds(10);       // xung co do dai 5 microseconds
  digitalWrite(PIN_TRIG, LOW);  // tat chan trig

  // tinh toan thoi gian
  // do do rong xung HIGH o chan echo
  duration = pulseIn(PIN_ECHO, HIGH, 5000);
  // tinh khoang cach
  Serial.print("duration: ");
  Serial.println(duration);
  distance = int(duration/2/29.412);
  return distance;
}
