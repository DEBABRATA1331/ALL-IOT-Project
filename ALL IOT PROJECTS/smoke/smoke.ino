#define MQ2pin A0
float sensorValue;
void setup() 
{
  Serial.begin(9600);
  Serial.println("MQ2 warming up");
  delay(20000);
}
void loop() 
{
  sensorValue = analogRead(MQ2pin);

  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  delay(2000);
}
