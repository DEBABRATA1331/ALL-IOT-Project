int bulb=7;
void setup()
{ 
  pinMode(bulb,OUTPUT);  
}
void loop() 
{
  digitalWrite(bulb,HIGH);
  delay(6000);
  digitalWrite(bulb,LOW);
  delay(6000);
}
