#include <dht.h>
 dht DHT;
#define DHT11_PIN 7
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
int a=8;
int b=9;
int c=10;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup()
{
  Serial.begin(9600);
   lcd.begin(16, 2);
   pinMode(a,OUTPUT);
   pinMode(b,OUTPUT);
   pinMode(c,OUTPUT);
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,LOW);
  // pinMode(DHT,INPUT);
}
void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.println(DHT.temperature);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temperature=");
  lcd.print(DHT.temperature);
  lcd.setCursor(0,1);
  lcd.print("Humidity=");
  lcd.print(DHT.humidity);
  delay(1000);
  lcd.clear();
}
