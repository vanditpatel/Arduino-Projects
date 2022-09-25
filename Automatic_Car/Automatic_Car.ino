int m1=2;
int m2=3;
int m3=6;
int m4=7;
int jx=A0;
int jy=A1;
void setup()
{
Serial.begin(9600);
pinMode(jx,INPUT);
pinMode(jy,INPUT);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
}
void loop()
{
int x=analogRead(jx);
int y=analogRead(jy);
if(x>950&&x<1050&&y>490&&y<577)
{
digitalWrite(m1,HIGH);
digitalWrite(m3,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m4,LOW);
}
else if(x<10&&y>500&&y<560)
{
digitalWrite(m1,LOW);
digitalWrite(m3,LOW);
digitalWrite(m2,HIGH);
digitalWrite(m4,HIGH);
}
else if(x>450&&x<550&&y>970&&y<1050)
{
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m1,HIGH);
digitalWrite(m4,HIGH);
}
else if(x>470&&x<550&&y<10)
{
digitalWrite(m1,LOW);
digitalWrite(m4,LOW);
digitalWrite(m2,HIGH);
digitalWrite(m3,HIGH);
}
else
{
digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);
digitalWrite(m3,HIGH);
digitalWrite(m4,HIGH);  
}
}
