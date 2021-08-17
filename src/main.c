short t = 300;
unsigned char pin0 = 0b00000001;
unsigned char pin1 = 0b00000010;
unsigned char pin2 = 0b00000100;
unsigned char pin3 = 0b00001000;
unsigned char pin4 = 0b00010000;
unsigned char pin5 = 0b00100000;
unsigned char pin6 = 0b01000000;
unsigned char pin7 = 0b10000000;

void setup() {
  DDRD = 0b11111111;
}

void loop() {
  turnOnUp();
  turnOnDown();
}

void turnOn(unsigned char pin) {
  PORTD = pin;
}

void turnOnUp() {
  turnOn(pin0);
  delay(t);
  turnOn(pin1);
  delay(t);
  turnOn(pin2);
  delay(t);
  turnOn(pin3);
  delay(t);
  turnOn(pin4);
  delay(t);
  turnOn(pin5);
  delay(t);
  turnOn(pin6);
  delay(t);
  turnOn(pin7);
  delay(t);
}

void turnOnDown() {
  turnOn(pin7);
  delay(t);
  turnOn(pin6);
  delay(t);
  turnOn(pin5);
  delay(t);
  turnOn(pin4);
  delay(t);
  turnOn(pin3);
  delay(t);
  turnOn(pin2);
  delay(t);
  turnOn(pin1);
  delay(t);
  turnOn(pin0);
  delay(t);
}