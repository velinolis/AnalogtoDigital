/*
---------------------------
# AnalogtoDigital library #
---------------------------

  pin A0 = 14
  pin A1 = 15
  pin A2 = 16
  pin A3 = 17
  pin A4 = 18 (excluded) --> I2C SDA
  pin A5 = 19 (excluded) --> I2C SCL
  
*/

#include "AnalogtoDigital.h"
#include "Arduino.h"

AnalogtoDigital::AnalogtoDigital() {}

void AnalogtoDigital::Convert_All() {
  
  int NPin[] = {14, 15, 16, 17};
  int limit = (sizeof(NPin) / sizeof(NPin[0]));
  for (int NPins = 0; NPins < limit; NPins++) {
    pinMode(NPin[NPins], OUTPUT);
    digitalWrite(NPin[NPins], LOW);
  }
}

void AnalogtoDigital::Select_Pin(byte pin1, byte pin2, byte pin3, byte pin4) {
  
  _pin1 = pin1;
  _pin2 = pin2;
  _pin3 = pin3;
  _pin4 = pin4;
  
  int NPin[] = {14, 15, 16, 17};

  if (_pin1 == 14 || _pin1 == 1) {
    pinMode(NPin[0], OUTPUT);
    digitalWrite(NPin[0], LOW);
  }

  if (_pin2 == 15 || _pin2 == 1) {
    pinMode(NPin[1], OUTPUT);
    digitalWrite(NPin[1], LOW);
  }

  if (_pin3 == 16 || _pin3 == 1) {
    pinMode(NPin[2], OUTPUT);
    digitalWrite(NPin[2], LOW);
  }

  if (_pin4 == 17 || _pin4 == 1) {
    pinMode(NPin[3], OUTPUT);
    digitalWrite(NPin[3], LOW);
  }
}

/*
  if (_pin1 > 1) _pin1 = 1;
  if (_pin2 > 1) _pin2 = 1;
  if (_pin3 > 1) _pin3 = 1;
  if (_pin4 > 1) _pin4 = 1;

  if (_pin1 != 0) {
  pinMode(14, OUTPUT);
  digitalWrite(14, LOW);
  }

  if (_pin2 != 0) {
  pinMode(15, OUTPUT);
  digitalWrite(15, LOW);

  }

  if (_pin3 != 0) {
  pinMode(16, OUTPUT);
  digitalWrite(16, LOW);
  }

  if (_pin4 != 0) {
  pinMode(17, OUTPUT);
  digitalWrite(17, LOW);
  }
  }
*/

void AnalogtoDigital::N_Pins(byte numpin) {
  
  _numpin = numpin;
  if (_numpin > 4) _numpin = 4;
  int NPin[] = {14, 15, 16, 17};
  for (int Npins = 0; Npins < _numpin; Npins++) {
    pinMode(NPin[Npins], OUTPUT);
    digitalWrite(NPin[Npins], LOW);
  }
}
