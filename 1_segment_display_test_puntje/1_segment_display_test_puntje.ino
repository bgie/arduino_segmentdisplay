#define PIN_SEGMENT_PUNT          2

// Als de segmentdisplay een gemeenschappelijke PLUS heeft zorgt LED_AAN (0V) dat de led brandt
//#define LED_AAN		LOW
//#define LED_UIT		HIGH

// Als de segmentdisplay een gemeenschappelijke MIN heeft zorgt HIGH (5V) dat de led brandt
#define LED_AAN		HIGH
#define LED_UIT		LOW

void setup() {
  pinMode(PIN_SEGMENT_PUNT, OUTPUT);
}

void loop() {  
  digitalWrite(PIN_SEGMENT_PUNT, LED_UIT);
  delay(500);
  digitalWrite(PIN_SEGMENT_PUNT, LED_AAN);
  delay(500);
}
