int m1=6;
int m2=9;
int m3=10;
int m4=11;
int en2=5;
int en1=3;
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
  
  analogWrite(en1,255);
  analogWrite(en2,255);
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);
  delay(2000);
  analogWrite(en1,200);
  analogWrite(en2,200);
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,LOW);
  digitalWrite(m4,HIGH);
  delay(2000);
  analogWrite(en1,150);
  analogWrite(en2,150);
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,HIGH);
  delay(2000);
  analogWrite(en1,100);
  analogWrite(en2,100);
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);
  delay(2000);
  analogWrite(en1,0);
  analogWrite(en2,0);
  digitalWrite(m1,HIGH);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,HIGH);
  delay(2000);
 }
