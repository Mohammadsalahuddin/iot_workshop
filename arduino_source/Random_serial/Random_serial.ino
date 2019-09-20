long randNumber;

void setup() {
  Serial.begin(115200);
  randomSeed(120);

}

void loop() {


  // print a random number from 10 to 19
  randNumber = random(100, 200);
  Serial.println(randNumber);

  delay(500);
}
