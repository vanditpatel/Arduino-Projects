int jx=A0;
int jy=A1;
void setup()
{
Serial.begin(38200);
pinMode(jx,INPUT);
pinMode(jy,INPUT);
}
void loop()
{
  int x=analogRead(jx);
  int y=analogRead(jy);
  Serial.print("x=");
  Serial.print(x);
  Serial.print("y=");
  Serial.println(y);
  if(x>450&&x<550&&y>450&&y<550)
  {
    Serial.write('a');
  }
 else if(x>850&&x<900&&y>400&&y<460)
 {
  Serial.write('b');
 }
else if(x==0&&y>450&&y<400)
{
  Serial.write('c');
}
else if(x>400&&x<550&&y==0)
{
  Serial.write('d');
}
 else if(x>400&&x<500&&y>850&&y<950)
 {
  Serial.write('e');
 }
}
