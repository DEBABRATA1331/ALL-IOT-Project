int led1=13;
void setup()
{ 
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
  digitalWrite(13,1);
  Serial.println("LED ON HEIGALA");
  delay(2000);
  digitalWrite(13,0);
   Serial.println("LED ON HAUNI");
  delay(1000);
 

}
