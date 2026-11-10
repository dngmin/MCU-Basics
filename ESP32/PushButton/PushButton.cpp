#include <Arduino.h>
const int BUTTON_PIN = 19;

void setup()
{
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop()
{
  int ButtonState = digitalRead(BUTTON_PIN);

  if (ButtonState == LOW)
  {
    Serial.println("Push!!");
  }
  else
  {
    Serial.println("Pull off");
  }
  delay(1000);
}