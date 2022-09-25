int ts=8;
int y=0;
int led=13;
void setup() 
{
 pinMode(ts,INPUT);
 pinMode(led,OUTPUT);
 Serial.begin(9600);

}
void loop() 
{
  int x=digitalRead(ts);
  delay(50);
  if(x==1)
  {
    y++;
  }
 Serial.println(y);
  if(y%2 == 0)
 {
  digitalWrite(led,LOW);
 }
 else if(y%2 != 0)
 {
  digitalWrite(led,HIGH);
 }}
 
