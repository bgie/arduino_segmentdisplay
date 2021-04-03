#define SEGMENT_PUNT          2
#define SEGMENT_BOVEN         3
#define SEGMENT_RECHTSBOVEN   4
#define SEGMENT_RECHTSONDER   5
#define SEGMENT_ONDER         6
#define SEGMENT_LINKSONDER    7
#define SEGMENT_LINKSBOVEN    8
#define SEGMENT_MIDDEN        9

// Als de segmentdisplay een gemeenschappelijke PLUS heeft zorgt LOW (0V) dat de led brandt
//#define LED_AAN		LOW
//#define LED_UIT		HIGH

// Als de segmentdisplay een gemeenschappelijke MIN heeft zorgt HIGH (5V) dat de led brandt
#define LED_AAN		HIGH
#define LED_UIT		LOW


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

void toonCijfer(int cijfer)
{
  switch(cijfer) {
    case 0:
      digitalWrite(SEGMENT_PUNT, LED_UIT);
      digitalWrite(SEGMENT_BOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSONDER, LED_AAN);
      digitalWrite(SEGMENT_ONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_MIDDEN, LED_UIT);
      break;
    case 1:
      digitalWrite(SEGMENT_PUNT, LED_UIT);
      digitalWrite(SEGMENT_BOVEN, LED_UIT);
      digitalWrite(SEGMENT_RECHTSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSONDER, LED_AAN);
      digitalWrite(SEGMENT_ONDER, LED_UIT);
      digitalWrite(SEGMENT_LINKSONDER, LED_UIT);
      digitalWrite(SEGMENT_LINKSBOVEN, LED_UIT);
      digitalWrite(SEGMENT_MIDDEN, LED_UIT);
      break;
    case 2:
      digitalWrite(SEGMENT_PUNT, LED_UIT);
      digitalWrite(SEGMENT_BOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSONDER, LED_UIT);
      digitalWrite(SEGMENT_ONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSBOVEN, LED_UIT);
      digitalWrite(SEGMENT_MIDDEN, LED_AAN);
      break;
    case 3:
      digitalWrite(SEGMENT_PUNT, LED_UIT);
      digitalWrite(SEGMENT_BOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSONDER, LED_AAN);
      digitalWrite(SEGMENT_ONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSONDER, LED_UIT);
      digitalWrite(SEGMENT_LINKSBOVEN, LED_UIT);
      digitalWrite(SEGMENT_MIDDEN, LED_AAN);
      break;
    case 4:
      digitalWrite(SEGMENT_PUNT, LED_UIT);
      digitalWrite(SEGMENT_BOVEN, LED_UIT);
      digitalWrite(SEGMENT_RECHTSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSONDER, LED_AAN);
      digitalWrite(SEGMENT_ONDER, LED_UIT);
      digitalWrite(SEGMENT_LINKSONDER, LED_UIT);
      digitalWrite(SEGMENT_LINKSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_MIDDEN, LED_AAN);
      break;
    case 5:
      digitalWrite(SEGMENT_PUNT, LED_UIT);
      digitalWrite(SEGMENT_BOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSBOVEN, LED_UIT);
      digitalWrite(SEGMENT_RECHTSONDER, LED_AAN);
      digitalWrite(SEGMENT_ONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSONDER, LED_UIT);
      digitalWrite(SEGMENT_LINKSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_MIDDEN, LED_AAN);
      break;
    case 6:
      digitalWrite(SEGMENT_PUNT, LED_UIT);
      digitalWrite(SEGMENT_BOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSBOVEN, LED_UIT);
      digitalWrite(SEGMENT_RECHTSONDER, LED_AAN);
      digitalWrite(SEGMENT_ONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_MIDDEN, LED_AAN);
      break;
    case 7:
      digitalWrite(SEGMENT_PUNT, LED_UIT);
      digitalWrite(SEGMENT_BOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSONDER, LED_AAN);
      digitalWrite(SEGMENT_ONDER, LED_UIT);
      digitalWrite(SEGMENT_LINKSONDER, LED_UIT);
      digitalWrite(SEGMENT_LINKSBOVEN, LED_UIT);
      digitalWrite(SEGMENT_MIDDEN, LED_UIT);
      break;
    case 8:
      digitalWrite(SEGMENT_PUNT, LED_UIT);
      digitalWrite(SEGMENT_BOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSONDER, LED_AAN);
      digitalWrite(SEGMENT_ONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_MIDDEN, LED_AAN);
      break;
    case 9:
      digitalWrite(SEGMENT_PUNT, LED_UIT);
      digitalWrite(SEGMENT_BOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_RECHTSONDER, LED_AAN);
      digitalWrite(SEGMENT_ONDER, LED_AAN);
      digitalWrite(SEGMENT_LINKSONDER, LED_UIT);
      digitalWrite(SEGMENT_LINKSBOVEN, LED_AAN);
      digitalWrite(SEGMENT_MIDDEN, LED_AAN);
      break;
  }
}


void loop() {  
  for(int cijfer = 0; cijfer <= 9; cijfer++)
  {
    toonCijfer(cijfer);
    delay(1000);
  }
}
