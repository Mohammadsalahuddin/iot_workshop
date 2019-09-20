#include <ESP8266WiFi.h>
#include <ThingerESP8266.h>

#define USERNAME "_______________________________________"
#define DEVICE_ID "_______________________________________"
#define DEVICE_CREDENTIAL "_______________________________"

#define SSID "___________________________________"
#define SSID_PASSWORD "_________________________________"


// int D4   = 2;




int LED = 2;

ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

void setup() {
  pinMode(LED, OUTPUT);
  // pinMode(D4, OUTPUT);

  thing.add_wifi(SSID, SSID_PASSWORD);

  // digital pin control example (i.e. turning on/off a light, a relay, configuring a parameter, etc)
  thing["led"] << digitalPin(LED);
  // thing["led"] << digitalPin(D4);

  // resource output example (i.e. reading a sensor value)
  thing["millis"] >> outputValue(millis());

  // more details at http://docs.thinger.io/arduino/
}

void loop() {
  thing.handle();
}
