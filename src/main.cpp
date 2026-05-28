#include <Arduino.h>
#include "KY038.h"

#define PIN 8
#define SENSE 20
#define TYPE true

SENSOR sensor(PIN);
int noise = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    noise = sensor.getPercentage(50);
    Serial.printf("Coeficiente de barulho e: %d\n",noise);
    if(noise <= 15){
        Serial.println("Barulho baixo");
    }
    else if(noise >= 30 && !(noise >= 60)){
        Serial.println("Barulho normal");
    }
    else if(noise >= 60){
        Serial.println("Barulho alto");
    }
    delay(10);
}
