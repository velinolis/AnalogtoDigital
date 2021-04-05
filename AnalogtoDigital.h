#ifndef ANALOGTODIGITAL_H
#define ANALOGTODIGITAL_H
#include "Arduino.h"

class AnalogtoDigital
{
  private:
    byte _pin1;
    byte _pin2;
    byte _pin3;
    byte _pin4;
    byte _numpin;
  public:
    AnalogtoDigital();
    void Convert_All();
    void Select_Pin(byte pin1, byte pin2, byte pin3, byte pin4);
    void N_Pins(byte numpin);
};
#endif
