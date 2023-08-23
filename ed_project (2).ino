#define C3 130.81
#define D3 146.83
#define E3 164.81
#define F3 174.61
#define G3 196
#define A3 220
#define B3 246.94
#define C4 261.62
int sensorPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
int freq[] = {C3, D3, E3, F3, G3, A3, B3, C4};
int buzzerPin = 10;

void setup() {
  Serial.begin(9600);
  for(int i = 2; i < 10; i++) {
    pinMode(sensorPins[i], INPUT);
    digitalWrite(sensorPins[i], HIGH);
  }
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin,LOW);
}

void loop() {
  
  for(int i = 0; i < 8; i++) {
    Serial.print(digitalRead(i+2));
    if(digitalRead(sensorPins[i]) == LOW) {
      tone(buzzerPin, freq[i]*4, 20);
      
    }
   
  }
   Serial.println();
}


