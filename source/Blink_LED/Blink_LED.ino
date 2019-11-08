int LEDpin = 2; // pin declaration

void setup() {
  pinMode(LEDpin, OUTPUT); // pin setup
  Serial.begin(115200);   // serial port setup 
  }

void loop() {
  digitalWrite(LEDpin,HIGH);   
  Serial.println("LED is ON");
  delay(1000);
  digitalWrite(LEDpin, LOW);
  Serial.println("LED is OFF");
  delay(1000);
  
}
