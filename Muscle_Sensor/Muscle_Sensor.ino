int ms= A0;
void setup()
{
  Serial.begin(9600);
  pinMode(ms,INPUT);
}
void loop()
{
  int x= analogRead(ms); 
  Serial.println(ms);
}
