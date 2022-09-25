int led = 11;      
void setup() 
 {
  Serial.begin(9600);
  pinMode(led, OUTPUT);  
 }
void loop() 
{
  analogWrite(led,255);
  delay(1000); 
  analogWrite(led,200);
  delay(1000); 
  analogWrite(led,150);
  delay(1000); 
  analogWrite(led,100);
  delay(1000); 
  analogWrite(led,50);
  delay(1000); 
  analogWrite(led,0);
  delay(1000); 
}
