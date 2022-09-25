#include <Keypad.h>
char m[4];
int i=0;
String j="1234";
const byte Rows= 4;
const byte Cols= 4;
char keymap[Rows][Cols]= 
{
{'1', '2', '3', 'A'}, 
{'4', '5', '6', 'B'}, 
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};
byte rowPins[Rows] = {10,9,8,7};
byte colPins[Cols] = {6,5,4,3};
Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins,Rows,Cols); //mapping keypad
void setup() 
  {
  Serial.begin(9600);
  }
void loop()
  {
   String x = "";
  char m[4];
  char key = myKeypad.getKey();
      if(key && i<=4)
       {
        m[i]=key; 
       i++;
       }
      if(i==4)
    {
      //String x;
      x=x+m;
       Serial.println(x);
     
      if(x==j)
     {
      Serial.println("Unlocked");
     i=0;
     }
         else 
    {
      Serial.println("Locked");
     i=0;
  }
  }
  }
  
  
