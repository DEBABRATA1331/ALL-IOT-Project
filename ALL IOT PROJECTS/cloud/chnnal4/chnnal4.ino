#include <ThingerESP32.h>
#define USERNAME "khandudon" //Your user name in Thinger.io cloud
#define DEVICE_ID "KHANDUDON1" // device id of your project
#define DEVICE_CREDENTIAL "ZNlETDQ%tisjfHi_"//cloud credential for your project
#define SSID "Galax" //ssid is your internet provider (i.e. your hotspot….etc)
#define SSID_PASSWORD "rockybhai" //internet provider password
ThingerESP32 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(27, OUTPUT);
  thing.add_wifi(SSID, SSID_PASSWORD);
  thing["LIGHT"] << digitalPin(13);
  thing["FAN"] << digitalPin(12);
  thing["AC"] << digitalPin(14);
  thing["TV"] << digitalPin(27);
}
void loop() {
  thing.handle();
}
