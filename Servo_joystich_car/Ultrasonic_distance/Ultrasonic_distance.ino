int trigPin = 12;    
int echoPin = 11;    
long duration, distance, distance_prev;
void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  duration = 0;
  distance = 0;
  distance_prev= 0;
}

void loop() {

  distance_prev = distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); //Send ultrasonic pulse

  duration = pulseIn(echoPin, HIGH);//Time for ultrasonic pulse to go and back
  distance = (duration/2) / 29.1;//Conversion to cm
  int x=distance_prev-distance;
  Serial.print("Distance=");
  Serial.print(distance);
  Serial.print("cm");
  Serial.println();
  Serial.print("Back=");
  Serial.print(x);
  Serial.print("cm");
  Serial.println();
  delay(1000);
 
}
 
