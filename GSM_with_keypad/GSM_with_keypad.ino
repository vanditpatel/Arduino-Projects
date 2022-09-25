#include <Keypad.h>
char m[11]={};
int i=0;
const byte Rows= 4;
const byte Cols= 4;
char keymap[Rows][Cols]= 
{
{'1', '2', '3', 'A'}, 
{'4', '5', '6', '1'}, 
{'7', '8', '9', 'D'},
{'+', ' ', '#', ';'}
};
byte rowPins[Rows] = {10,9,8,7};
byte colPins[Cols] = {6,5,4,3};
Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins,Rows,Cols); //mapping keypad
void setup() 
    {
     Serial.begin(9600);
     Serial.println("AT");
     delay(2000);
    }
 void loop()
    {
     char key = myKeypad.getKey();
     if(key && i<=12)
    {
      m[i]=key; 
      i++;
    }
     if(i==10)
    {
      String x;
      x+="ATD +91";
      x+=m;
     x+=';';
      Serial.println(x);
      delay(500);
      i=0;     
    }
    }     
