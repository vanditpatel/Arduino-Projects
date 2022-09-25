int flex = A0; 
void setup()
{
  pinMode(flex,INPUT);
  Serial.begin(9600);       
}
void loop()
{
 int value = analogRead(flex);    
  Serial.println(value);
 value = map(value,0,1023,0,255);
   delay(100);
}  
