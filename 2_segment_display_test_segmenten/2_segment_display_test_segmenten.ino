#define PIN_SEGMENT_PUNT          2
#define PIN_SEGMENT_BOVEN         8
#define PIN_SEGMENT_RECHTSBOVEN   9
#define PIN_SEGMENT_RECHTSONDER   3
#define PIN_SEGMENT_ONDER         5
#define PIN_SEGMENT_LINKSONDER    4
#define PIN_SEGMENT_LINKSBOVEN    7
#define PIN_SEGMENT_MIDDEN        6

void setup() {
  pinMode(PIN_SEGMENT_PUNT, OUTPUT);
  pinMode(PIN_SEGMENT_BOVEN, OUTPUT);
  pinMode(PIN_SEGMENT_RECHTSBOVEN, OUTPUT);
  pinMode(PIN_SEGMENT_RECHTSONDER, OUTPUT);
  pinMode(PIN_SEGMENT_ONDER, OUTPUT);
  pinMode(PIN_SEGMENT_LINKSONDER, OUTPUT);
  pinMode(PIN_SEGMENT_LINKSBOVEN, OUTPUT);
  pinMode(PIN_SEGMENT_MIDDEN, OUTPUT);
}

void loop() {  
  // Alle segmenten naar +5V = leds UIT
  digitalWrite(PIN_SEGMENT_PUNT, HIGH);
  digitalWrite(PIN_SEGMENT_BOVEN, HIGH);
  digitalWrite(PIN_SEGMENT_RECHTSBOVEN, HIGH);
  digitalWrite(PIN_SEGMENT_RECHTSONDER, HIGH);
  digitalWrite(PIN_SEGMENT_ONDER, HIGH);
  digitalWrite(PIN_SEGMENT_LINKSONDER, HIGH);
  digitalWrite(PIN_SEGMENT_LINKSBOVEN, HIGH);
  digitalWrite(PIN_SEGMENT_MIDDEN, HIGH);
  delay(1000);

  // 1 voor 1 alle segmenten naar 0V = led AAN
  digitalWrite(PIN_SEGMENT_PUNT, LOW);
  delay(1000);
  digitalWrite(PIN_SEGMENT_BOVEN, LOW);
  delay(1000);
  digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
  delay(1000);
  digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
  delay(1000);
  digitalWrite(PIN_SEGMENT_ONDER, LOW);
  delay(1000);
  digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
  delay(1000);
  digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
  delay(1000);
  digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
  delay(1000);
}
