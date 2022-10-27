int EMGPin = A1;
int EMGVal = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  EMGVal = analogRead(EMGPin);
  Serial.println(EMGVal);
}
