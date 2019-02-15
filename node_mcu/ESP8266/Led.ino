void Led_setup(int pin){
  digitalWrite(2, HIGH);
  pinMode(pin, OUTPUT);
}

void Led_on(int pin) {
  digitalWrite(pin, HIGH);   //bật led
}

void Led_off(int pin){
  digitalWrite(pin, LOW);   //bật led
}
