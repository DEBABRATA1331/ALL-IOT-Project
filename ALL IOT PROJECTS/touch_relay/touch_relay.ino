#include"BluetoothSerial.h"
BluetoothSerial SerialBT;
char receivedchar;
const int LEDpinl = 18;
const int LEDpin2 = 19;
void setup(){
  Serial.begin(115200);
  SerialBT.begin ("IOT");                                                                             
}
