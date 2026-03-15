//Left-Hand Rule
//once you stop finding an obstacle on left you immediately turn left
//else you keep moving forward
//if there is an obstacle in front you turn right
int LeftTrigPin=13;     //Left Sensor
int LeftEchoPin=12;     //Left Sensor
int FrontTrigPin=4;     //Front Sensor
int FrontEchoPin=3;     //Front Sensor
long distanceLeft,durationLeft,distanceFront,durationFront;
void setup()
{
 pinMode(LeftTrigPin,OUTPUT);
 pinMode(LeftEchoPin,INPUT);
 pinMode(FrontTrigPin,OUTPUT);
 pinMode(FrontEchoPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  delayMicroseconds(1000);
  digitalWrite(LeftTrigPin,HIGH);
  delayMicroseconds(100);
  digitalWrite(LeftTrigPin,LOW);
  durationLeft=pulseIn(LeftEchoPin,HIGH);
  distanceLeft=(durationLeft*0.0343)/2;
  
  delay(100);
  
  digitalWrite(FrontTrigPin,HIGH);
  delayMicroseconds(100);
  digitalWrite(FrontTrigPin,LOW);
  durationFront=pulseIn(FrontEchoPin,HIGH);
  distanceFront=(durationFront*0.0343)/2;
  if(distanceLeft>15){
  //no obstacle on left
  //turn left,delay so that turn completes then move forward
    Serial.write('L');
    delay(1000);
    Serial.write('F');
  }
  else if(distanceFront>15){
  //no obstacle on front
    //move forward
    Serial.write('F');
  }
  else{
  //turn right, delay then move forward
    Serial.write('R');
    delay(1000);
    Serial.write('F');
  }
}




