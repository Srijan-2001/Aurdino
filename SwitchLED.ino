int P=8;
int S=7;
int state;
void setup() {
  pinMode(P,OUTPUT);
  pinMode(S,INPUT);
  state=0;
  digitalWrite(P,LOW);

}

void loop() {
digitalWrite(P,state);
int A;
while(1){
  A=digitalRead(S);
  if(A==HIGH){
    break;
  }
}
if(A==HIGH){
  state=(state==1)?0:1;
  
}
delay(1000);
while(1){
  A=digitalRead(S);
  if(A==LOW){
    break;
  }
}
digitalWrite(P,state);
}
