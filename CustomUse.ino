#include <SoftwareSerial.h>

/* 
Convert_All() --> convert all pins (A0-14, A1-15, A2-16, A3-17)
Select_Pin()  --> select pin to convert (0/1, 0/1, 0/1, 0/1) 0-Analog/1-Digital
N_Pins()      --> number of pins to convert (1-4)
*/

#include "AnalogtoDigital.h"
AnalogtoDigital AD;

void setup() {

  AD.Convert_All();
  //AD.N_Pins(2);
  //AD.Select_Pin(14,0,1,1);


  digitalWrite(14, HIGH);
  digitalWrite(17, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

}
