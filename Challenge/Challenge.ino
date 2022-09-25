int y=7;
int led1=12;
int led2=11;
int led3=10;
int led4=9;
int led5=8;
int z=0;
void setup()
{
  Serial.begin(9600);
  pinMode(y,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}
void loop()
{
int x=digitalRead(y);

if(x==HIGH && z==0)
{
  digitalWrite(led1,HIGH);
 z++;
delay(200);
}
else if(x==HIGH && z==1)
{
  digitalWrite(led2,HIGH);
  z++;
delay(200);
}
else if(x==HIGH && z==2 )
 {
  digitalWrite(led3,HIGH);
  z++;
delay(200);
 }
 else if(x==HIGH && z==3)
 {
  digitalWrite(led4,HIGH);
  z++;
 delay(200);
 }
 else if(x==HIGH && z==4)
{
  digitalWrite(led5,HIGH);
  z++;
delay(200);
}
else if(x==HIGH && z==5)
{
  digitalWrite(led1,LOW);
  z++;
delay(200);
}
else if(x==HIGH && z==6)
{
  digitalWrite(led2,LOW);
  z++;
delay(200);
}
else if (x==HIGH && z==7)
{
  digitalWrite(led3,LOW);
  z++;
 delay(200);
 }
 else if(x==HIGH && z==8)
{
  digitalWrite(led4,LOW);
  z++;
delay(200);
}
else if(x==HIGH && z==9)
{
  digitalWrite(led5,LOW);
  z=0;
  delay(200);
}
}
