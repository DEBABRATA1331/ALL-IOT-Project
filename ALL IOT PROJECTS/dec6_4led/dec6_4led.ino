int led1=1;
int led2=2;
int led3=3;
int led4=4;
 
void setup()
{ 
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  
  
  // put your setup code here, to run once:

}

void loop() 
{
  digitalWrite(led1,1);
  delay(50);
  digitalWrite(led1,0);
  delay(50);
  digitalWrite(led2,1);
  delay(50);
  digitalWrite(led2,0);
  delay(50);
  digitalWrite(led3,1);
  delay(50);
  digitalWrite(led3,0);
  delay(50);
  digitalWrite(led4,1);
  delay(50);
  digitalWrite(led4,0);
  delay(50);
  digitalWrite(led3,1);
  delay(50);
  digitalWrite(led3,0);
  delay(50);
  digitalWrite(led2,1);
  delay(50);
  digitalWrite(led2,0);
  delay(50);
  digitalWrite(led1,1);
  delay(50);
  digitalWrite(led1,0);
  delay(50);
}
