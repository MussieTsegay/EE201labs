#define digital_pin 7

void setup() {
  Serial.begin(9600);
  pinMode(digital_pin,INPUT);
}

void loop() {
  bool input = digitalRead(digital_pin);
  if (input) {
    Serial.println("Hello World");
  } else {
    Serial.println("It's 2023");
  }
  delay(100);
}