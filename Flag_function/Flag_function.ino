int flag1=0;     
int flag2=0;
int flag3=0;
int flag4=0;
int led1=13;
int led2=12;
int led3=11;
int led4=10;
int led5=2;
void setup()
{
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}
void loop()
{
  if(Serial.available())
  {
    int x=Serial.read();
    if(x =='a' && flag1==0)
    {
      digitalWrite(led1,HIGH);
      flag1=1;
    }
  else if(x =='b' && flag2==0)
  {
    digitalWrite(led2,HIGH);
    flag2=1;
  }
   else if(x =='c' && flag3==0)
  {
    digitalWrite(led3,HIGH);
    flag3=1;
  }
   else if(x =='d' && flag4==0)
  {
    digitalWrite(led4,HIGH);
    flag4=1;
  }
  
   else if(x =='a' && flag1==1)
  {
    digitalWrite(led1,LOW);
    flag1=0;
  }
   else if(x =='b' && flag2==1)
  {
    digitalWrite(led2,LOW);
    flag2=0;
  }
   else if(x =='c' && flag3==1)
  {
    digitalWrite(led3,LOW);
    flag3=0;
  }
   else if(x =='d' && flag4==1)
  {
    digitalWrite(led4,LOW);
    flag4=0;
  }
     }
}
