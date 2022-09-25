int r1 = 10;
int r2 = 9;
int r3 = 8;
int r4 = 7;
int c1 = 6;
int c2 = 5;
int c3 = 4;
void setup(){
  Serial.begin(9600);
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(c1,INPUT);
  pinMode(c2,INPUT);
  pinMode(c3,INPUT); 
}

void loop()
{
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(r1,LOW);
  if(digitalRead(c1)==0)Serial.println('1');
  if(digitalRead(c2)==0)Serial.println('2');
  if(digitalRead(c3)==0)Serial.println('3');
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  if(digitalRead(c1)==0)Serial.println('4');
  if(digitalRead(c2)==0)Serial.println('5');
  if(digitalRead(c3)==0)Serial.println('6');
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  if(digitalRead(c1)==0)Serial.println('7');
  if(digitalRead(c2)==0)Serial.println('8');
  if(digitalRead(c3)==0)Serial.println('9');
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  if(digitalRead(c1)==0)Serial.println('*');
  if(digitalRead(c2)==0)Serial.println('0');
  if(digitalRead(c3)==0)Serial.println('#');
  digitalWrite(r4,HIGH);
  delay(100);
}
