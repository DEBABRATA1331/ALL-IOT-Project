#include <WiFi.h>
#include <ThingSpeak.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

const char* ssid = "Galax";
const char* password = "rockybhai";

#define DHTPIN 4     // Digital pin connected to the DHT sensor
#define DHTTYPE    DHT11     // DHT 11

WiFiClient  client;

DHT dht(DHTPIN, DHTTYPE);

unsigned long myChannelNumber = 1;
const char * myWriteAPIKey = "HQT7X6XEJYKENEXK";

// Timer variables
unsigned long lastTime = 0;
unsigned long timerDelay = 10000; // 10secs

// Variable to hold temperature readings
float temperatureC;
float humidity;
float smoke;
//uncomment if you want to get temperature in Fahrenheit
//float temperatureF;

void setup() {
  Serial.begin(115200);  //Initialize serial
  dht.begin();
 
  WiFi.mode(WIFI_STA);  

  ThingSpeak.begin(client);  // Initialize ThingSpeak
}


void loop() {
  if ((millis() - lastTime) > timerDelay) {     //ensures this event happens at an interval of 60secs
    // Connect or reconnect to WiFi
    if(WiFi.status() != WL_CONNECTED){
      Serial.print("Attempting to connect");
      while(WiFi.status() != WL_CONNECTED){
        WiFi.begin(ssid, password);
        delay(5000);    
      }
      Serial.println("\nConnected.");
    }

    // Get a new temperature reading
     temperatureC = dht.readTemperature();
     Serial.print("Temperature (ºC): ");
     Serial.println(temperatureC);

     humidity = dht.readHumidity();
     Serial.print("Humidity (%): ");
     Serial.println(humidity);
   
    //uncomment if you want to get temperature in Fahrenheit
    /*temperatureF = 1.8 * bme.readTemperature() + 32;
    Serial.print("Temperature (ºC): ");
    Serial.println(temperatureF);*/

    // set the fields with the values
    ThingSpeak.setField(1, temperatureC);
    ThingSpeak.setField(2, humidity);
   
    // Write to ThingSpeak. There are up to 8 fields in a channel, allowing you to store up to 8 different
    // pieces of information in a channel.  Here, we write to field 1.

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);

    if(x == 200){
      Serial.println("Channel update successful.");
    }
    else{
      Serial.println("Problem updating channel. HTTP error code " + String(x));
    }
    lastTime = millis();
  }
}
