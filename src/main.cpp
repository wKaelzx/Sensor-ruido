#include <Arduino.h>
#include "KY038.h"

#define PIN 8
#define SENSE 20

SENSOR sensor(PIN);
int noise = 0;
int buffer = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println(sensor.getPercentage(20));
    delay(100);
}

// passou 70 manda alerta so
// TODO modo economia