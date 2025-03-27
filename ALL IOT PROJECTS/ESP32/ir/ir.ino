int ir=5;
int ir_state=0;
int led=2;
void setup() {
  pinMode(ir,INPUT);
  pinMode(ir,OUTPUT);
}
void loop() {
  ir_state = digitalRead(ir);
  if(ir_state==1){
    digitalWrite(led,HIGH);
    }
  else{
    
        digitalWrite(led,LOW);

    }

}
