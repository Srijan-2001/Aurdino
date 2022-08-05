int XStep=2;
int XDir=5;
int Enb=8;
int Data;
void setup() {
  pinMode(XStep,OUTPUT);
  pinMode(XDir,OUTPUT);
  pinMode(Enb,OUTPUT);
  digitalWrite(Enb,HIGH);

  // put your setup code here, to run once:

}

void loop() {
  
  //digitalWrite(XDir,HIGH);
  // put your main code here, to run repeatedly:
  digitalWrite(XStep,HIGH);
  delay(1);
  digitalWrite(XStep,LOW);
  delay(250-Data);
}
