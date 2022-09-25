int sm=A0;
int led=13;
 void setup()
{
  Serial.begin(9600);
  pinMode(sm,INPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  int x=analogRead(sm);
if(x>1000&&x<1050)
digitalWrite(led,HIGH);
else
digitalWrite(led,LOW);
}
