
const int D0 = 0;       //Raspberry pin 21    LSB
const int D1 = 1;       //Raspberry pin 22
const int D2 = 2;       //Raspberry pin 23
const int D3 = 3;       //Raspberry pin 24    MSB

int a,b,c,d,data;


void setup() {

Serial.begin(9600);

}

void loop()
{
   a = digitalRead(D0);
   b = digitalRead(D1);
   c = digitalRead(D2);
   d = digitalRead(D3);
   Serial.print("a= ");
   Serial.println(a);
   Serial.print("b= ");
   Serial.println(b);
   Serial.print("c= ");
   Serial.println(c);
   Serial.print("d= ");
   Serial.println(d);
   data = 8*d+4*c+2*b+a;
   if (data == 0);
   {
    Serial.println("Forward");
    delay(1000);
   }
}
