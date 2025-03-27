#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_NAME "LIGHT"
#define BLYNK_AUTH_TOKEN "sgWp3wr0abcQ6Ql6izsnm1lbDL-ALPHR"
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char ssid[] = "Galax";
char pass[] = "rockybhai";
void setup()
{
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}
