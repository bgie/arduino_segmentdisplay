#define SEGMENT_PUNT          2
#define SEGMENT_BOVEN         3
#define SEGMENT_RECHTSBOVEN   4
#define SEGMENT_RECHTSONDER   5
#define SEGMENT_ONDER         6
#define SEGMENT_LINKSONDER    7
#define SEGMENT_LINKSBOVEN    8
#define SEGMENT_MIDDEN        9

void setup() {
  pinMode(SEGMENT_PUNT, OUTPUT);
  pinMode(SEGMENT_BOVEN, OUTPUT);
  pinMode(SEGMENT_RECHTSBOVEN, OUTPUT);
  pinMode(SEGMENT_RECHTSONDER, OUTPUT);
  pinMode(SEGMENT_ONDER, OUTPUT);
  pinMode(SEGMENT_LINKSONDER, OUTPUT);
  pinMode(SEGMENT_LINKSBOVEN, OUTPUT);
  pinMode(SEGMENT_MIDDEN, OUTPUT);
}

void loop() {  
  // Alle segmenten naar +5V = leds UIT
  digitalWrite(SEGMENT_PUNT, HIGH);
  digitalWrite(SEGMENT_BOVEN, HIGH);
  digitalWrite(SEGMENT_RECHTSBOVEN, HIGH);
  digitalWrite(SEGMENT_RECHTSONDER, HIGH);
  digitalWrite(SEGMENT_ONDER, HIGH);
  digitalWrite(SEGMENT_LINKSONDER, HIGH);
  digitalWrite(SEGMENT_LINKSBOVEN, HIGH);
  digitalWrite(SEGMENT_MIDDEN, HIGH);
  delay(1000);

  // 1 voor 1 alle segmenten naar 0V = led AAN
  digitalWrite(SEGMENT_PUNT, LOW);
  delay(1000);
  digitalWrite(SEGMENT_BOVEN, LOW);
  delay(1000);
  digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
  delay(1000);
  digitalWrite(SEGMENT_RECHTSONDER, LOW);
  delay(1000);
  digitalWrite(SEGMENT_ONDER, LOW);
  delay(1000);
  digitalWrite(SEGMENT_LINKSONDER, LOW);
  delay(1000);
  digitalWrite(SEGMENT_LINKSBOVEN, LOW);
  delay(1000);
  digitalWrite(SEGMENT_MIDDEN, LOW);
  delay(1000);
}
