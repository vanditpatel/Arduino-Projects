int led=13;
int soundPin=5;
int val;
int sound = A0;
void setup(){
  pinMode(led, OUTPUT);
  pinMode(soundPin, INPUT);
  pinMode(sound,INPUT);
  Serial.begin (9600);
}
  
void loop (){
  val = digitalRead(soundPin);
  
  Serial.println(val);
 
  //delay(500);
  // when the sensor detects a signal above the threshold value, LED flashes
  if (val==1) {
    digitalWrite(led, HIGH);
    
  }
  else {
    digitalWrite(led, LOW);
  }
}
