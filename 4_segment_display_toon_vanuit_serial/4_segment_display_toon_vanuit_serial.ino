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

  Serial.begin(115200);
  Serial.write("Typ een teken om te tonen>\n");
}

void toonTeken(char teken)
{
  switch(teken) {
    case '0':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, HIGH);
      break;
    case '1':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_MIDDEN, HIGH);
      break;
    case '2':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case '3':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case '4':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case '5':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case '6':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case '7':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_MIDDEN, HIGH);
      break;
    case '8':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case '9':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case 'A':
    case 'a':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case 'B':
    case 'b':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case 'C':
    case 'c':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, HIGH);
      break;
    case 'D':
    case 'd':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, LOW);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case 'E':
    case 'e':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_ONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case 'F':
    case 'f':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, LOW);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_ONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSONDER, LOW);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, LOW);
      digitalWrite(PIN_SEGMENT_MIDDEN, LOW);
      break;
    case ' ':
      digitalWrite(PIN_SEGMENT_PUNT, HIGH);
      digitalWrite(PIN_SEGMENT_BOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_RECHTSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_ONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSONDER, HIGH);
      digitalWrite(PIN_SEGMENT_LINKSBOVEN, HIGH);
      digitalWrite(PIN_SEGMENT_MIDDEN, HIGH);
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
