int m1=8;
int m2=9;
int m3=10;
int m4=11;
int jx=A0;
int jy=A1;
void setup()
{
Serial.begin(9600);
pinMode(jx,INPUT);
pinMode(jy,INPUT);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
}
void loop()
{
int x=analogRead(jx);
int y=analogRead(jy);
//Serial.print(x);
//Serial.print("  ");
//Serial.println(y);
//delay(500);
if(x>265&&x<285&&y>337&&y<357)
{
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW);
}
else if(x>399&&x<419&&y>335&&y<355)
{
digitalWrite(m1,LOW);
digitalWrite(m2,HIGH);
digitalWrite(m3,LOW);
digitalWrite(m4,HIGH);
}
else if(x>322&&x<344&&y>272&&y<292)
{
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,HIGH);
}
else if(x>327&&x<347&&y>402&&y<422)
{
digitalWrite(m1,LOW);
digitalWrite(m2,HIGH);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW);
}
else if(x>331&&x<351&&y>337&&y<357)
{
digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);
digitalWrite(m3,HIGH);
digitalWrite(m4,HIGH);  
}
}   
