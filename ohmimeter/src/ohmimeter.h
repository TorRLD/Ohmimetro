#ifndef ohmimeter
#define ohmimeter

#include "Arduino.h"

class ohmi {

  public:

    ohmi(int Vout);
    float resistance(int Vin, int R);

  private:
    int _Vout;

};

#endif