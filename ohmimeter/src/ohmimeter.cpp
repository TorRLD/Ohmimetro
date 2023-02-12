#include <Arduino.h>
#include "ohmimeter.h"

ohmi::ohmi(int Vin, int Vout) {
  
  pinMode(Vout, INPUT);
  int entrada = analogRead(Vout);
  float V = map(entrada, 0, 1023, 0, 100*Vin);
  V = V/100;

  _Vout = Vout;
  _Vin = Vin;
  _V = V;

}

float ohmi::resistence(int R){

  _R = R;
  float Rl = (_V*R)/(_Vin - _Vout);

  return Rl;
}