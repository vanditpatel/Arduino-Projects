int ldr=A0; 
int m1=7;
int m2=6;
int m3=5;
int m4=4;
void setup() 
{
Serial.begin(9600); 
}
void loop() 
{
int x = analogRead(ldr); 
Serial.println(x); 
if(x>500)
{
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }
  else
  {
    digitalWrite(m1, HIGH);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, HIGH);
}
}
