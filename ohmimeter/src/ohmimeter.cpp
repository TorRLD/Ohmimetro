#include "Arduino.h"
#include "ohmimeter.h"

ohmi::ohmi(int Vout) {
    _Vout = Vout;
    pinMode(_Vout, INPUT);

    
  }
  
  float ohmi::resistance(int Vin, int R){
    int entrada = analogRead(_Vout);
    float V = map(entrada, 0, 1023, 0, 100*Vin);
    V = V/100;
    float Rl = (V*R)/(Vin - V);
    return Rl;
  }