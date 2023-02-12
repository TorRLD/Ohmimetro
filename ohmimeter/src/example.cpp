#include "ohmimeter.h"
#include "Arduino.h"

//Cria um objeto ohmi com o pino A3 recebendo o valor de tensão do divisor de tensão
ohmi resistencia(A3);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  delay(500);

  // O objeto utiliza o método resistance sendo que foi considerada uma fonte de 5 Volts e um resistor de 1kOhm no divisor de tensão
  float result = resistencia.resistance(5, 1000);
  Serial.println(result,4);

}
