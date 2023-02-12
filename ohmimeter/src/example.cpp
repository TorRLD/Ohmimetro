#include <Arduino.h>
#include <ohmimeter.h>

ohmi circuito(5, A0);


void setup() {

    Serial.begin(9600);

}

void loop() {

    float resist = circuito.resistence(1000);
    Serial.print("A resistência da carga é: "); Serial.println(resist);

}