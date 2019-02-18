// LED
int led_pin = 5;

void Led_setup(){
  digitalWrite(2, HIGH);
  pinMode(led_pin, OUTPUT);
}

void Led_on() {
  digitalWrite(led_pin, HIGH);   //bật led
}

void Led_off(){
  digitalWrite(led_pin, LOW);   //bật led
}
