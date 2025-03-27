#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
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
  
  oled.setTextSize(2); // text size
  oled.setTextColor(WHITE); // text color
  oled.setCursor(0, 0); // initial position
  oled.println("Distance:");
  oled.display(); // show static text
}

void loop() {
  // Measure distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.0343) / 2;

  // Display distance
  oled.clearDisplay();
  oled.setTextSize(2);
  oled.setTextColor(WHITE);
  oled.setCursor(0, 0);
  oled.println("Distance:");
  oled.setTextSize(2);
  oled.setCursor(0, 20);
  oled.print(distance);
  oled.println(" cm");
  oled.display();

  // Scroll the display
  oled.startscrollleft(0x00, 0x0F); // Scroll entire display to the left
  delay(3000); // Wait 3 seconds
  oled.stopscroll(); // Stop scrolling
  
  oled.startscrollright(0x00, 0x0F); // Scroll entire display to the right
  delay(3000); // Wait 3 seconds
  oled.stopscroll(); // Stop scrolling
}
