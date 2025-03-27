#include <ThingerESP32.h>
#define USERNAME "khandudon" //Your user name in Thinger.io cloud
#define DEVICE_ID "KHANDUDON2" // device id of your project
#define DEVICE_CREDENTIAL "V9xM$L5womDom6%C"//cloud credential for your project
#define SSID "Galax" //ssid is your internet provider (i.e. your hotspot….etc)
#define SSID_PASSWORD "rockybhai" //internet provider password
ThingerESP32 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);
void setup() {
  pinMode(2, OUTPUT);
  
  thing.add_wifi(SSID, SSID_PASSWORD);
  thing["relay"] << digitalPin(2);
}
void loop() {
  thing.handle();
}
