#include<DHT.h>
DHT dht(7,DHT11);
int touch=2;
int led1=8;
int led2=13;
void setup() 
{
  dht.begin();
  delay(3000);
  Serial.begin(9600);
  pinMode(touch,INPUT);
  pinMode(led2,OUTPUT);  
  pinMode(led1,OUTPUT);
}

void loop() 
{
  int touch_state=digitalRead(touch);
  float temp=dht.readTemperature();
  float hum=dht.readHumidity();
  Serial.print("Temperature:");
  Serial.println(temp);
  Serial.print("Humidity:");
  Serial.println(hum);
  delay(1000);
  if(temp>=28.1)
  {
      digitalWrite(led1,HIGH);
      Serial.print("FAN ON HELA");
  }
  else
  {
    digitalWrite(led1,LOW);
  }

  if(touch_state==1)
  {
    if(touch_state==0)
    {
      digitalWrite(led2,HIGH);
      }
  }
  
  //Serial.print("LED ON HELA");
 else if(touch_state==1)
  {
    digitalWrite(led2,LOW);
  }
  
}
