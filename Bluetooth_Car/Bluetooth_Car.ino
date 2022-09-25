int m1=2;   
int m2=3;
int m3=8;
int m4=9;
void setup()
{
  Serial.begin(9600);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
}
void loop()
{
  if(Serial.available())
  {
    int x=Serial.read();
    if(x=='f')
    {
      digitalWrite(m1,HIGH);
      digitalWrite(m3,HIGH);
      digitalWrite(m2,LOW);
      digitalWrite(m4,LOW);
    }
  else if(x=='r')
  {  
  digitalWrite(m1,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m4,HIGH);
  }
  else if(x=='l')
  {
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m1,HIGH);
    digitalWrite(m4,HIGH);
  }
  else if(x=='d')
  {
    digitalWrite(m1,LOW);
    digitalWrite(m4,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,HIGH);
  }
   else if(x=='s')
   {
    digitalWrite(m1,HIGH);
    digitalWrite(m4,HIGH);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,HIGH);
   }
   }
}
