int m1=2;   
int m2=3;
int m3=8;
int m4=9;
int en1=3;
int en2=5;
int flag=0;
void setup()
{
  Serial.begin(9600);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
}
void loop()
{
  if(Serial.available())
  {
    int x=Serial.read();
    if(x=='f' && flag==0)  
    {
      analogWrite(en1,255);
      analogWrite(en2,255);
      digitalWrite(m1,HIGH);
      digitalWrite(m2,LOW);
      digitalWrite(m3,HIGH);
      digitalWrite(m4,LOW);
      flag=1;
    }
  else if(x=='f' && flag==1)
  {  
      analogWrite(en1,200);
      analogWrite(en2,200);
      digitalWrite(m1,HIGH);
      digitalWrite(m2,LOW);
      digitalWrite(m3,HIGH);
      digitalWrite(m4,LOW);
      flag=2;
  }
  else if(x=='f' && flag==2)
  {
     analogWrite(en1,150);
     analogWrite(en2,150);
     digitalWrite(m1,HIGH);
     digitalWrite(m2,LOW);
     digitalWrite(m3,HIGH);
     digitalWrite(m4,LOW);
    flag=3;
  }
  else if(x=='f' && flag==3)
  {
    analogWrite(en1,100);
    analogWrite(en2,100);
    digitalWrite(m1,LOW);
    digitalWrite(m4,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,HIGH);
    flag=4;
  }
   else if(x=='f' && flag==4)
   {
    analogWrite(en1,0);
    analogWrite(en2,0);
    digitalWrite(m1,HIGH);
    digitalWrite(m4,HIGH);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,HIGH);
    flag=0;
   }
   }
}
