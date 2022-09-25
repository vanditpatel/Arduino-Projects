int rx=A0;
int ry=A1;
int ms=12;
int led=13;
void setup()
{
Serial.begin(9600);
pinMode(rx,INPUT);
pinMode(ry,INPUT);
pinMode(ms,INPUT);
pinMode(led,OUTPUT);
}
void loop()
{
int x=analogRead(rx);
int y=analogRead(ry);
int z=digitalRead(ms);
if(x>950&&x<1050&&y>490&&y<577)
{
digitalWrite(led,HIGH);
}
else if(x<10&&y>500&&y<560)
{
digitalWrite(led,HIGH);
}
else if(x>450&&x<550&&y>970&&y<1050)
{
   digitalWrite(led,HIGH);
}
else if (x>470&&x<550&&y<10)
{
  digitalWrite(led,HIGH);
}
else if(x>455&&x<555&&y>472&&y<572&&z==0)
{
  digitalWrite(led,LOW);
}
else if(x>455&&x<555&&y>472&&y<572&&z==1)
{
  digitalWrite(led,HIGH);
}
}
