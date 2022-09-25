#include<LedControl.h>
LedControl lc=LedControl(12,11,10,1);
byte hf[8]= {B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
void setup() {
  lc.shutdown(0,false);
     lc.setIntensity(0,8);
    lc.clearDisplay(0);  
}
void loop(){
  lc.setRow(0,0,hf[0]);
  lc.setRow(0,1,hf[1]);
  lc.setRow(0,2,hf[2]);
  lc.setRow(0,3,hf[3]);
  lc.setRow(0,4,hf[4]);
  lc.setRow(0,5,hf[5]);
  lc.setRow(0,6,hf[6]);
  lc.setRow(0,7,hf[7]);
}
