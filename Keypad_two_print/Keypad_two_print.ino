#include <Keypad.h>
int i=0;
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
Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins,Rows,Cols);
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  String x="";
  //Serial.println(m);
  char m[4];
  char j[2];
  char key = myKeypad.getKey();
      if(key && i<=4)
       {
        m[i]=key; 
       i++;
             }

  if(i<=2)
  {
    j[i]=m[i];
   }
  if (i==4)
  {
  x=x+j;
  Serial.println(x);
   i=0;
}}
