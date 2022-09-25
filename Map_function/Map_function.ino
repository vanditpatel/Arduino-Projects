int p=A0;
void setup()
{
Serial.begin(9600);
pinMode(p,INPUT);
}
void loop()
{
   int x=analogRead(p);
 int y= map(x,0,1023,0,5);
  Serial.println(y);
}
