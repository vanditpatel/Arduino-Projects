int trigPin = 12;    
int echoPin = 11;    
long duration, cm, inches,distance;
int m1=3;
int m2=4;
int m3=7;
int m4=8;
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
}
 void loop() {
   digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
   pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  distance=duration*0.0343/2;
   
 cm = distance;    
 inches = (duration/2) / 74;   
 Serial.print(inches);
 Serial.print("in, ");
 Serial.print(cm);
 Serial.print("cm");
 Serial.println();
 digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,HIGH); 
 if(distance<=10)
 {
digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);
digitalWrite(m3,HIGH);
digitalWrite(m4,HIGH);
delay(5000);
digitalWrite(m1,LOW);
digitalWrite(m2,HIGH);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW); 
delay(1000);
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW); 
delay(5000);
}

}
