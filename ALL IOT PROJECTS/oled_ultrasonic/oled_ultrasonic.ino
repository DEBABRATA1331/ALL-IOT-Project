#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
// declare an SSD1306 display object connected to I2C
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
const int trigPin = 9;
const int echoPin = 10;

float duration, distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  // initialize OLED display with address 0x3C for 128x64
  if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    while (true);
  }
  delay(2000); // wait for initializing
  oled.clearDisplay(); // clear display
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  oled.setTextSize(2); // text size
  oled.setTextColor(WHITE); // text colour
  oled.setCursor(0, 10); // position to display
  oled.print(distance); // text to display
  oled.println("cm");
  oled.display(); // show on OLED
  
  // Scroll the display
  oled.startscrollright(0x00, 0x0F); // Scroll entire display to the right
  delay(3000); // Wait 3 seconds
  //oled.stopscroll(); // Stop scrolling
  oled.clearDisplay();
if(distance<=8)
{

  oled.setTextSize(4); // text size
  oled.setTextColor(WHITE); // text colour
  oled.setCursor(0, 20); // position to display
  oled.println("DANGER"); // text to display
  oled.display(); // show on OLED
  
  oled.clearDisplay();
  }


  

  oled.clearDisplay();
  
  delay(1000);
}
