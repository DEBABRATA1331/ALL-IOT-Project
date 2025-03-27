int m1=9;
int m2=10;
const int trigPin = 11;
const int echoPin = 12;
float duration, distance;
void setup()
{ 
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  //delay(100);
 if(distance>=60){
  
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  }
  
else{
  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);  
  }
  //digitalWrite(m1,LOW);
  //digitalWrite(m2,HIGH);
  //delay(5000);
  // put your main code here, to run repeatedly:

}
