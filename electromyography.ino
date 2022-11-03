int EMGPin = A0;
int EMGVal = 0;

void setup() {
  Serial.begin(115200);
  Serial.println(EMGVal);
}

void loop() {
  EMGVal = analogRead(EMGPin);
  Serial.println(EMGVal);
  delay(1);
}
