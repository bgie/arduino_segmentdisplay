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

  Serial.begin(115200);
  Serial.write("Typ een teken om te tonen>\n");
}

void toonTeken(char teken)
{
  switch(teken) {
    case '0':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, LOW);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, HIGH);
      break;
    case '1':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, HIGH);
      digitalWrite(SEGMENT_LINKSONDER, HIGH);
      digitalWrite(SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(SEGMENT_MIDDEN, HIGH);
      break;
    case '2':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSONDER, HIGH);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, LOW);
      digitalWrite(SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case '3':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, HIGH);
      digitalWrite(SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case '4':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, HIGH);
      digitalWrite(SEGMENT_LINKSONDER, HIGH);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case '5':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, HIGH);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case '6':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, LOW);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case '7':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, HIGH);
      digitalWrite(SEGMENT_LINKSONDER, HIGH);
      digitalWrite(SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(SEGMENT_MIDDEN, HIGH);
      break;
    case '8':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, LOW);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case '9':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, HIGH);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case 'A':
    case 'a':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, HIGH);
      digitalWrite(SEGMENT_LINKSONDER, LOW);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case 'B':
    case 'b':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, LOW);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case 'C':
    case 'c':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSONDER, HIGH);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, LOW);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, HIGH);
      break;
    case 'D':
    case 'd':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSONDER, LOW);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, LOW);
      digitalWrite(SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case 'E':
    case 'e':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSONDER, HIGH);
      digitalWrite(SEGMENT_ONDER, LOW);
      digitalWrite(SEGMENT_LINKSONDER, LOW);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case 'F':
    case 'f':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, LOW);
      digitalWrite(SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSONDER, HIGH);
      digitalWrite(SEGMENT_ONDER, HIGH);
      digitalWrite(SEGMENT_LINKSONDER, LOW);
      digitalWrite(SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(SEGMENT_MIDDEN, LOW);
      break;
    case ' ':
      digitalWrite(SEGMENT_PUNT, HIGH);
      digitalWrite(SEGMENT_BOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(SEGMENT_RECHTSONDER, HIGH);
      digitalWrite(SEGMENT_ONDER, HIGH);
      digitalWrite(SEGMENT_LINKSONDER, HIGH);
      digitalWrite(SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(SEGMENT_MIDDEN, HIGH);
      break;
  }
}


void loop() {  
  if (Serial.available() > 0) {
    char teken = Serial.read();
    
    Serial.print("Ontvangen:");
    Serial.println(teken, DEC);

    toonTeken(teken);
  }
}
