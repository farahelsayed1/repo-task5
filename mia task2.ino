const byte trigerpin = 2;
const byte echopin = 3;
unsigned long traveltime =0;
const byte led = 5;
int distance =0;

void setup() {
  pinMode(trigerpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigerpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigerpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigerpin,LOW);

  traveltime= pulseIn(echopin,HIGH);
  distance=(traveltime/2)*0.0343;
  Serial.println("Distance in cm:");
  Serial.println(distance);
  delay(200);
  if(distance<20)
    {
    digitalWrite(led,HIGH);
    }
  else
    {
    digitalWrite(led,LOW);
    }
 
}