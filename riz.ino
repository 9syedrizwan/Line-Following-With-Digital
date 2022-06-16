#define leftMotorForward 2
#define rightMotorForward 3
#define rightMotorReverse 4
#define leftMotorReverse 5
#define leftIR 6
#define rightIR 7
void setup() {
pinMode(leftMotorForward,OUTPUT);  
pinMode(rightMotorForward,OUTPUT);
pinMode(rightMotorReverse,OUTPUT);  
pinMode(leftMotorReverse,OUTPUT);  
pinMode(leftIR,INPUT);
pinMode(rightIR,INPUT);
}

void loop() {
  if(digitalRead(leftIR==LOW)&&digitalRead(rightIR==LOW)){
   digitalWrite(leftMotorForward,HIGH);
   digitalWrite(rightMotorForward,HIGH);
  }
  else if(digitalRead(rightIR==HIGH)&&digitalRead(leftIR==HIGH)){
   digitalWrite(leftMotorForward,LOW);
   digitalWrite(rightMotorForward,LOW); 
  }
  else if(digitalRead(rightIR==HIGH)&&digitalRead(leftIR==LOW)){
    digitalWrite(leftMotorForward,LOW);
   digitalWrite(rightMotorForward,HIGH);
  }
  else if(digitalRead(rightIR==LOW)&&digitalRead(leftIR==HIGH)){
    digitalWrite(leftMotorForward,HIGH);
   digitalWrite(rightMotorForward,LOW);
  }
}
