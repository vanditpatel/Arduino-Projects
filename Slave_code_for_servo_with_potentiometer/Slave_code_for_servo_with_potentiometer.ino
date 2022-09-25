#include<Servo.h>
Servo servo;
int x;
void setup()
{
  Serial.begin(38400);
  servo.attach(5);     
}
void loop()
{
  if(Serial.available())
  {
    int x = Serial.read();
    Serial.println(x);
 // servo.write(x);
  //delay(1000);
  //x=map(x,0,890,0,180);
  if(x=='a')
  {
  servo.write(0);
  }
  if(x=='b')
{
  servo.write(60);
}
if(x=='c')
{
  servo.write(120);
}
if(x=='d')
{
  servo.write(180);
}
} 
}
//FCA8:9A:31F4
//98D3:71:F5D007
