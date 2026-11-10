#include <Arduino.h>
const int R_PIN = 27;
const int G_PIN = 14;
const int B_PIN = 12;

void setup()
{
    pinMode(R_PIN, OUTPUT);
    pinMode(G_PIN, OUTPUT);
    pinMode(B_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(R_PIN, HIGH);
    digitalWrite(G_PIN, LOW);
    digitalWrite(B_PIN, LOW);

    delay(1000);

    digitalWrite(R_PIN, LOW);
    digitalWrite(G_PIN, HIGH);
    digitalWrite(B_PIN, LOW);

    delay(1000);

    digitalWrite(R_PIN, LOW);
    digitalWrite(G_PIN, LOW);
    digitalWrite(B_PIN, HIGH);

delay(1000);
}