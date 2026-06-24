#define LED_PIN 8

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH); // HIGH = OFF for active LOW led
}

void loop() {
  while (Serial.available() > 0) {
    char cmd = Serial.read();
    if (cmd == '1') {
      digitalWrite(LED_PIN, LOW);   // LOW = ON  ✅
    } else if (cmd == '0') {
      digitalWrite(LED_PIN, HIGH);  // HIGH = OFF ✅
    }
  }
}
