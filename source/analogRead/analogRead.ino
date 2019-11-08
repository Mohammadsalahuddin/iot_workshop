// Declare the Analog PIN
int analogPin = A0;
int value;

void setup() {
  pinMode(analogPin, INPUT);
  Serial.begin(115200);
  
}

void loop() {
  Serial.println("Reading Analog Data....");
  value = analogRead(analogPin);
  Serial.println(value);
  delay(1000);

}
