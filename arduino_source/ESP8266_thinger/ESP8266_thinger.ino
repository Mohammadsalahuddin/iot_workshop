#include <ESP8266WiFi.h>
#include <ThingerESP8266.h>

#define USERNAME "____________________________________"
#define DEVICE_ID "___________________________________"
#define DEVICE_CREDENTIAL "___________________________"

#define SSID "_______________________________________"
#define SSID_PASSWORD "______________________________"


int LED = 2;

ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

void setup() {
  pinMode(LED, OUTPUT);

  thing.add_wifi(SSID, SSID_PASSWORD);

  // digital pin control example (i.e. turning on/off a light, a relay, configuring a parameter, etc)
  thing["led"] << digitalPin(LED);

  // resource output example (i.e. reading a sensor value)
  thing["millis"] >> outputValue(millis());

  // more details at http://docs.thinger.io/arduino/
}

void loop() {
  thing.handle();
}
