int ts=8;
void setup() 
{
 pinMode(ts,INPUT);
 Serial.begin(9600);
}
void loop() 
{
 int x=digitalRead(ts);
 Serial.println(x);
 }
