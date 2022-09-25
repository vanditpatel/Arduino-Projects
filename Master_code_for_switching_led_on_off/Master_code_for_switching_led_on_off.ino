int sw=7;
//int led=13;
void setup()
{
Serial.begin(38400);
pinMode(sw,INPUT);
//pinMode(led,OUTPUT);
}
void loop()
{
int x=digitalRead(sw);
Serial.println(x);
  if(x==HIGH)
{
  Serial.write('A');
  //digitalWrite(led,HIGH);
}
else if(x==LOW)
{
  Serial.write('B');
  //digitalWrite(led,LOW);
}
}

//18:91:D7ED84
