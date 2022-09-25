#include <Keypad.h>
String c;
String pad;
char m[4];
int i=0;
const byte numRows= 4;
const byte numCols= 4;
char keymap[numRows][numCols]= 
{
{'1', '2', '3', 'A'}, 
{'4', '5', '6', 'B'}, 
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};
byte rowPins[numRows] = {10,9,8,7};
byte colPins[numCols] = {6,5,4,3};
Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols); //mapping keypad
void setup() 
  {
  Serial.begin(9600);
  }
void loop()
  {
  
  char key = myKeypad.getKey();
  //String c = String(key);
  //pad+=c;
     // for(key; key<=4;key++)
   
      if(key && i<=4)
       {
        m[i]=key; 
       i++;
       }
    else if(i==4)
    {
      String x;
      x+=m;
      Serial.println(x);
      i=0; 
    }
  }
