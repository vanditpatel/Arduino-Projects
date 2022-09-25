int ts=A1;
void setup()
{
  Serial.begin(9600);
  pinMode(ts,INPUT);
}
void loop()
{
 int x=analogRead(ts);
 int y=(5.0*x*1000.0)/(1024*10);//Celsius
 int z=y+273;//Kelvin
 int a=(y*9/5)+32;//Fahreinheit
  Serial.print(y);
  Serial.print('C');
  Serial.print(' ');
  Serial.print(z);
  Serial.print('K');
  Serial.print(' ');
  Serial.print(a);
  Serial.print('F');
  Serial.println('\n');
  delay(1000);
}
