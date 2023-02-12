#include "ohmimeter.h"
#include "Arduino.h"

ohmi resistencia(A3);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  delay(500);

  float result = resistencia.resistance(5, 1000);
  Serial.println(result,4);

}