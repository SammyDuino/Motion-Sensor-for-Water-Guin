/*Simple PIR sketch: Written by ScottC, 19th Dec 2013

 http://arduinobasics.blogspot.com/
 
 ----------------------------------------------------*/
int ir=0;
void setup(){
 pinMode(13,OUTPUT);
 pinMode(2,INPUT);
 Serial.begin(9600);
 Serial.println("Initializing");
 }

void loop(){
  
  digitalWrite((13), digitalRead(2));
  ir = digitalRead(2);
  if (ir > 0 ){
 Serial.println("Movement detected");
 
}
else {
  Serial.println("No movement detected");
}
delay(100);
}
