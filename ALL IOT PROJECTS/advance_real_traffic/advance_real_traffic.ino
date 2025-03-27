int r1=1;
int y1=2;
int g1=3;
int r2=4;
int y2=5;
int g2=6;
int r3=7;
int y3=8;
int g3=9;
int r4=10;
int y4=11;
int g4=12;

void setup()
{ 
  pinMode(r1,OUTPUT); 
  pinMode(y1,OUTPUT); 
  pinMode(g1,OUTPUT);

  pinMode(r2,OUTPUT); 
  pinMode(y2,OUTPUT); 
  pinMode(g2,OUTPUT);

  pinMode(r3,OUTPUT); 
  pinMode(y3,OUTPUT); 
  pinMode(g3,OUTPUT);

  pinMode(r4,OUTPUT); 
  pinMode(y4,OUTPUT); 
  pinMode(g4,OUTPUT);

}
void loop() 
{
  digitalWrite(r1,0);
  digitalWrite(y1,0);
  digitalWrite(g1,1);
  digitalWrite(r2,1);
  digitalWrite(y2,0);
  digitalWrite(g2,0);
  digitalWrite(r3,1);
  digitalWrite(y3,0);
  digitalWrite(g3,0);
  digitalWrite(r4,1);
  digitalWrite(y4,0);
  digitalWrite(g4,0);
  delay(7000);//lane 1


  digitalWrite(r1,0);
  digitalWrite(y1,1);
  digitalWrite(g1,0);
  digitalWrite(r2,0);
  digitalWrite(y2,1);
  digitalWrite(g2,0);
  digitalWrite(r3,1);
  digitalWrite(y3,0);
  digitalWrite(g3,0);
  digitalWrite(r4,1);
  digitalWrite(y4,0);
  digitalWrite(g4,0);
  delay(3000);

  digitalWrite(r1,1);
  digitalWrite(y1,0);
  digitalWrite(g1,0);
  digitalWrite(r2,0);
  digitalWrite(y2,0);
  digitalWrite(g2,1);
  digitalWrite(r3,1);
  digitalWrite(y3,0);
  digitalWrite(g3,0);
  digitalWrite(r4,1);
  digitalWrite(y4,0);
  digitalWrite(g4,0);
  delay(7000);//lane 1


  digitalWrite(r1,1);
  digitalWrite(y1,0);
  digitalWrite(g1,0);
  digitalWrite(r2,0);
  digitalWrite(y2,1);
  digitalWrite(g2,0);
  digitalWrite(r3,0);
  digitalWrite(y3,1);
  digitalWrite(g3,0);
  digitalWrite(r4,1);
  digitalWrite(y4,0);
  digitalWrite(g4,0);
  delay(3000);


  digitalWrite(r1,1);
  digitalWrite(y1,0);
  digitalWrite(g1,0);
  digitalWrite(r2,1);
  digitalWrite(y2,0);
  digitalWrite(g2,0);
  digitalWrite(r3,0);
  digitalWrite(y3,0);
  digitalWrite(g3,1);
  digitalWrite(r4,1);
  digitalWrite(y4,0);
  digitalWrite(g4,0);
  delay(3000);

  digitalWrite(r1,1);
  digitalWrite(y1,0);
  digitalWrite(g1,0);
  digitalWrite(r2,1);
  digitalWrite(y2,0);
  digitalWrite(g2,0);
  digitalWrite(r3,0);
  digitalWrite(y3,1);
  digitalWrite(g3,0);
  digitalWrite(r4,0);
  digitalWrite(y4,1);
  digitalWrite(g4,0);
  delay(3000);

  digitalWrite(r1,1);
  digitalWrite(y1,0);
  digitalWrite(g1,0);
  digitalWrite(r2,1);
  digitalWrite(y2,0);
  digitalWrite(g2,0);
  digitalWrite(r3,1);
  digitalWrite(y3,0);
  digitalWrite(g3,0);
  digitalWrite(r4,0);
  digitalWrite(y4,0);
  digitalWrite(g4,1);
  delay(3000);

  digitalWrite(r1,0);
  digitalWrite(y1,1);
  digitalWrite(g1,0);
  digitalWrite(r2,1);
  digitalWrite(y2,0);
  digitalWrite(g2,0);
  digitalWrite(r3,1);
  digitalWrite(y3,0);
  digitalWrite(g3,0);
  digitalWrite(r4,0);
  digitalWrite(y4,1);
  digitalWrite(g4,0);
  delay(3000);
}
