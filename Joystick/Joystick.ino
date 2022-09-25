int jx=A0;
int jy=A1;
int led1=9;
int led2=10;
int led3=11;
int led4=12;
int led5=13;

void setup()
{
Serial.begin(9600);
pinMode(jx,INPUT);
pinMode(jy,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
}
void loop()
{
  int x=analogRead(jx);
  int y=analogRead(jy);
  if(x>450&&x<550&&y>450&&y<550)
{
  digitalWrite(led1,HIGH);
}  

 else if(x>950&&x<1073&&y>490&&y<577)
 {
  digitalWrite(led2,HIGH);
 }
 else if(x==0&&y>500&&y<560)
{
  digitalWrite(led3,HIGH);
}
else if(x>470&&x<550&&y==0)
{
  digitalWrite(led4,HIGH);
}
  else if(x>450&&x<550&&y>970&&y<1050)
{
  digitalWrite(led5,HIGH);
}
else
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
}
}




 
