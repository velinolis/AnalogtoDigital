
AnalogtoDigital library
Convert analog pins A0-A3 to digital pins, excluded I2C pins A4 and A5
  pin A0 = 14
  pin A1 = 15
  pin A2 = 16
  pin A3 = 17
  pin A4 = 18 --> I2C SDA
  pin A5 = 19 --> I2C SCL
  
Convert_All() --> convert all pins (A0-14, A1-15, A2-16, A3-17)
Select_Pin()  --> select pin to convert (0/1/14, 0/1/15, 0/1/16, 0/1/17) 0-Analog/1-Digital/14-15-16-17-Digital
N_Pins()      --> number of pins to convert (1-4)

