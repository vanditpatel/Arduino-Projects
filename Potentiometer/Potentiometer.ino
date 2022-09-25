int sw=A0;
int led=13;
void setup()
{
Serial.begin(9600);
pinMode(sw,INPUT);
pinMode(led,OUTPUT);
}
void loop()
{
if(sw<=1023)
{
  digitalWrite(led,HIGH);
}
  else if(sw==0);
{
  digitalWrite(led,LOW);
}

}
