#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
// declare an SSD1306 display object connected to I2C
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
int m1=12;
int m2=13;
float Value=A0;
float sensorValue;
void setup()
{
  Serial.begin(9600);
  // initialize OLED display with address 0x3C for 128x64
  if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    while (true);
  }
  delay(2000); // wait for initializing
  oled.clearDisplay(); // clear display

  oled.setTextSize(2); // text size
  oled.setTextColor(WHITE); // text c
  oled.setCursor(0, 10); // position to display
  oled.println("SMART"); // text to display
  oled.println("IRRIGATION");
  oled.display(); // show on OLED 
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  Serial.begin(9600);
  Serial.println("Soil moisture sensor detecting");
  delay(20000);
  
  // put your setup code here, to run once:

}

void loop() 
{
  sensorValue = analogRead(A0);

  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  delay(2000);
 if(sensorValue>=2000){
  
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  
  oled.clearDisplay(); // clear display
  oled.setTextSize(1); // text size
  oled.setTextColor(WHITE); // text c
  oled.setCursor(0, 10); // position to display
  oled.println("Soil Moisture Low"); // text to display
  oled.println("Watering in Progress"); 
  oled.display(); // show on OLED
  
  }
  
else{
  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);

  oled.clearDisplay(); // clear display
  oled.setTextSize(1); // text size
  oled.setTextColor(WHITE); // text c
  oled.setCursor(0, 10); // position to display
  oled.println("Soil Moisture Suffcient"); // text to display
  oled.println("No Watering Required"); 
  oled.display(); // show on OLED
}
}
