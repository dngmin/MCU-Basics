#include <Arduino.h>
const int potPin = 13;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  int value = analogRead(potPin);
  Serial.println(value);
  delay(100);
}