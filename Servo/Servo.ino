#include<Servo.h>
Servo servo;        
                
int angle = 0;    
int p=A0;
void setup() 
{ 
  Serial.begin(9600);
  servo.attach(9);     
  pinMode(p,INPUT);
} 
  
void loop() 
{ 
    int x=analogRead(p);
    x=map(x,0,1023,0,180);
    servo.write(x);                 
    
}
