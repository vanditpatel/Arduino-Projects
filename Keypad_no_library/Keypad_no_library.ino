int r1 = 10;
int r2 = 9;
int r3 = 8;
const int r4 = 7;
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
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==0)Serial.println('1');
  else if(digitalRead(c2)==0)Serial.println('2');
  else if(digitalRead(c3)==0)Serial.println('3');
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==LOW)Serial.println('4');
  else if(digitalRead(c2)==LOW)Serial.println('5');
  else if(digitalRead(c3)==LOW)Serial.println('6');
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==LOW)Serial.println('7');
  else if(digitalRead(c2)==LOW)Serial.println('8');
  else if(digitalRead(c3)==LOW)Serial.println('9');
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  if(digitalRead(c1)==LOW)Serial.println('*');
  else if(digitalRead(c2)==LOW)Serial.println('0');
  else if(digitalRead(c3)==LOW)Serial.println('#');
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
delay(1000);
}
