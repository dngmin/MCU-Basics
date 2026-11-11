#include <Arduino.h>
const int LDR_DO = 14;
const int LDR_AO = 12;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  int DO = digitalRead(LDR_DO);
  int AO = analogRead(LDR_AO);

  Serial.print("DO: ");
  Serial.print(DO);

  Serial.print(" | AO: ");
  Serial.println(AO);

  delay(1000);
}