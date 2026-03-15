int LeftSpeedPin=11;
int RightSpeedPin=6;
int LeftDir1=10;
int LeftDir2=9;
int RightDir1=7;
int RightDir2=8;
void setup(){
  pinMode(LeftDir1,OUTPUT);
  pinMode(LeftDir2,OUTPUT);
  pinMode(RightDir1,OUTPUT);
  pinMode(RightDir2,OUTPUT);
  pinMode(LeftSpeedPin,OUTPUT);
  pinMode(RightSpeedPin,OUTPUT);
  Serial.begin(9600);
  analogWrite(LeftSpeedPin,200);
  analogWrite(RightSpeedPin,200);
}
void loop(){
  
  while(Serial.available()>0){
   char cmd=Serial.read();
    if(cmd=='L'){
      //left wheel stops right wheel turns
      digitalWrite(LeftDir1,LOW);
      digitalWrite(LeftDir2,HIGH);
      digitalWrite(RightDir1,HIGH);
      digitalWrite(RightDir2,LOW);
    }
    if(cmd=='F'){
      //move forward
      digitalWrite(LeftDir1,HIGH);
      digitalWrite(LeftDir2,LOW);
      digitalWrite(RightDir1,HIGH);
      digitalWrite(RightDir2,LOW);
    }
    if(cmd=='R'){
      //right wheel stops left wheel turns
      digitalWrite(LeftDir1,HIGH);
      digitalWrite(LeftDir2,LOW);
      digitalWrite(RightDir1,LOW);
      digitalWrite(RightDir2,HIGH);
    }
  }
  
}
