#include<DHT.h>
DHT dht(7,DHT11);
int led=9;
void setup() 
{
  dht.begin();
  delay(3000);
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() 
{
  float temp=dht.readTemperature();
  float hum=dht.readHumidity();
  Serial.print("Temperature:");
  Serial.println(temp);
  Serial.print("Humidity:");
  Serial.println(hum);
  delay(3000);
  if(temp>=28.1)
  {
      digitalWrite(9,HIGH);
  }
  else
  {
    digitalWrite(9,LOW);
  }
}
