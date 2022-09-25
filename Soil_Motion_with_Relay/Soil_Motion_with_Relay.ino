int r=8;
int sm=A0;
void setup()
{
Serial.begin(9600);
pinMode(r,OUTPUT);
pinMode(sm,INPUT);
}
void loop()
{
  int x=analogRead(sm);
  if (x>1000&&x<1050)
  {
  digitalWrite(r,HIGH);
  }
  else
  {
  digitalWrite(r,LOW);
  }
}
