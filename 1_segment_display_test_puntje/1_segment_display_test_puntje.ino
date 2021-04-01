#define PIN_SEGMENT_PUNT          2

void setup() {
  pinMode(PIN_SEGMENT_PUNT, OUTPUT);
}

void loop() {  
  digitalWrite(PIN_SEGMENT_PUNT, HIGH);  // +5V op pin zetten
  delay(500);
  digitalWrite(PIN_SEGMENT_PUNT, LOW);   // 0V op pin zetten
  delay(500);
}
