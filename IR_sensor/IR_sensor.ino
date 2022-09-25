int ir=3 ;
int m1=7;
int m2=6;
int m3=5;
int m4=4;
void setup() 
{                
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);            
  pinMode(ir,INPUT);    
  Serial.begin(9600);
}

void loop() 
{
  int x=digitalRead(ir);
  if(x==HIGH)      
  {
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }
  else
  {
    digitalWrite(m1, HIGH);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, HIGH);
    }
}
