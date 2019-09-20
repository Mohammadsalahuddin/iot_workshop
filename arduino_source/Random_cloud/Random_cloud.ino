#include <ESP8266WiFi.h>
#include <ThingerESP8266.h>

#define USERNAME "______________________________"
#define DEVICE_ID "______________________________"
#define DEVICE_CREDENTIAL "_______________________"

#define SSID "____________________________________"
#define SSID_PASSWORD "____________________________"


ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

void setup() {
  randomSeed(120);
  thing.add_wifi(SSID, SSID_PASSWORD);
 
  thing["random"] >> outputValue(random(100, 200));

}

void loop() {
  thing.handle();
}
