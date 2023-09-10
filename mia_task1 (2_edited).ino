#include<Wire.h>
int button1 =2;
int button2 =3;
volatile int reading1=0;
volatile int reading2=0;
int state =0;
void data();
void setup()
{
 // attachInterrupt(digitalPinToInterrupt(2),ISR_button1,RISING);
  //attachInterrupt(digitalPinToInterrupt(3),ISR_button2,RISING);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  Serial.begin(9600);
  Wire.begin(10);
  Wire.onRequest(data);

}

void loop()
{
  reading1=digitalRead(button1);
  reading2=digitalRead(button2);
  if(reading1==1 && reading2 == 0)
  {
    state=2;
  }
  else if (reading2==1 && reading1 == 0)
  {
   
    state=3;
  }
  else if(reading1==1 && reading2 == 1)
  {
    
    state=4;
  }
  else
  {
   
    state=1;
  }

}
/*
void ISR_button1()
{
  if(digitalRead(button1)==HIGH)
    reading1=1;  
}
void ISR_button2()
{
  if(digitalRead(button2)==HIGH)
    reading2=1;  
}
*/
void data()
{
  Wire.write(state);
}
