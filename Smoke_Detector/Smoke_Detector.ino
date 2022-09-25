int ss=A4;
int led=13;
void setup()
{
Serial.begin(9600);
pinMode(ss,INPUT);
pinMode(led,OUTPUT);
}
void loop()
{
  int x=analogRead(ss);
  if(x>550)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  
}
