float Value=A0;
float sensorValue;
void setup() 
{
  Serial.begin(9600);
  Serial.println("Soil moisture sensor detecting");
  delay(20000);
}
void loop() 
{
  sensorValue = analogRead(A0);

  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  delay(2000);
}
