int pm=A4;
//int led=13;
void setup()
{
Serial.begin(38400);
pinMode(pm,INPUT);
}
void loop()
{
int x=analogRead(pm);
//int y=map(x,0,890,0,180);
Serial.println(x);
if(x<=100)
{
  Serial.write('a');
}
if(x>100 && x<=200)
{
  Serial.write('b');
}
if(x>200 && x<=400)
{
  Serial.write('c');
}
if(x>400 && x<=900)
{
  Serial.write('d');
}
}

//18:91:D7ED84
