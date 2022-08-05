double a=0;
double b=0;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //b=sin(a);
  //b=cos(a);
  //b=tan(a);
  //b=1/sin(a);
  //b=1/cos(a);
  //b=1/tan(a);
  //b=sin(a)+cos(a);
  //b=1/sin(a)+1/cos(a);
  //b= tan(a)+1/tan(a);
  b=0;
  for(int i=1;i<=999;i++){
    b+=sin(i*a)/i;
    i++;
  }
Serial.println(b*3);
a=a+0.1;
delay(50);
if (a>6.28){
  //Serial.println(b);
  a=0;
}
}
