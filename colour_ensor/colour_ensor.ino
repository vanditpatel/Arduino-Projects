int cs=A0;
void setup()
{
  Serial.begin(9600);
  pinMode(cs,INPUT);
}
void loop()
{
  int x=analogRead(cs);
  Serial.println(x);
delay(500);
}
