int led=13;
int x;
void setup()
{
  Serial.begin(38400);
  pinMode(led,OUTPUT);
}
void loop()
{
  if(Serial.available())
  {
    int x = Serial.read();
    Serial.println(x);
  
  if(x=='A')
 {
  digitalWrite(led,HIGH);
 }
else if(x=='B')
{
  digitalWrite(led,LOW);
}
}
}
//FCA8:9A:31F4
//98D3:71:F5D007
