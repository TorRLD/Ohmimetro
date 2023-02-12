#ifndef ohmimeter
#define ohmimeter

#include "Arduino.h"

class ohmi {

public:

    ohmi(int Vin, int Vout);
    float resistence(int R);
private:

    int _Vout;
    int _R;
    int _Vin;
    int _V;
};

#endif