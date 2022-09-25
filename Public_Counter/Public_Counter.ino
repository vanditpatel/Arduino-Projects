int sw=7;
int count=0;
void setup()
{
  Serial.begin(9600);
  pinMode(sw,INPUT);
}
void loop()
{
  int x=digitalRead(sw);
  if (x==HIGH)
  {
    Serial.println(count);
      count++;
      delay(300);
  }
 
    
}
