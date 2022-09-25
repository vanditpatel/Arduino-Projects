int led1=9;
int led2=10;
int led3=11;
int led4=12;
int led5=13;

  void setup()
  {
  Serial.begin(38200);
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
    int x = Serial.read();
   if(x=='a')
   {
    digitalWrite(led1,HIGH);
   }
if(x=='b')
   {
    digitalWrite(led2,HIGH);
   }
   if(x=='c')
   {
    digitalWrite(led3,HIGH);
   }
   if(x=='d')
   {
    digitalWrite(led4,HIGH);
   }
   if(x=='e')
   {
    digitalWrite(led5,HIGH);
   }
else
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
}
}}
