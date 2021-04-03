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

// Als de segmentdisplay een gemeenschappelijke PLUS heeft zorgt LED_AAN (0V) dat de led brandt
//#define LED_AAN		LOW
//#define LED_UIT		HIGH

// Als de segmentdisplay een gemeenschappelijke MIN heeft zorgt HIGH (5V) dat de led brandt
#define LED_AAN		HIGH
#define LED_UIT		LOW

void loop() {  
  // Alle segmenten uit
  digitalWrite(SEGMENT_PUNT, LED_UIT);
  digitalWrite(SEGMENT_BOVEN, LED_UIT);
  digitalWrite(SEGMENT_RECHTSBOVEN, LED_UIT);
  digitalWrite(SEGMENT_RECHTSONDER, LED_UIT);
  digitalWrite(SEGMENT_ONDER, LED_UIT);
  digitalWrite(SEGMENT_LINKSONDER, LED_UIT);
  digitalWrite(SEGMENT_LINKSBOVEN, LED_UIT);
  digitalWrite(SEGMENT_MIDDEN, LED_UIT);
  delay(1000);

  // 1 voor 1 alle segmenten naar aan
  digitalWrite(SEGMENT_PUNT, HIGH);
  delay(1000);
  digitalWrite(SEGMENT_BOVEN, HIGH);
  delay(1000);
  digitalWrite(SEGMENT_RECHTSBOVEN, HIGH);
  delay(1000);
  digitalWrite(SEGMENT_RECHTSONDER, HIGH);
  delay(1000);
  digitalWrite(SEGMENT_ONDER, HIGH);
  delay(1000);
  digitalWrite(SEGMENT_LINKSONDER, HIGH);
  delay(1000);
  digitalWrite(SEGMENT_LINKSBOVEN, HIGH);
  delay(1000);
  digitalWrite(SEGMENT_MIDDEN, HIGH);
  delay(1000);
}
