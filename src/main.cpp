#include <Arduino.h>
#include "KY038.h"

#define PIN_MIC 9

void SensorUmidadeTemperatura();
void configurarSensor();

float temperatura;
float umidade;

SENSOR sensor(PIN_MIC);

void setup()
{
Serial.begin(9600);
}

void loop()
{
  Serial.println(sensor.getPercentage(50));
}
