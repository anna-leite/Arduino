// C++ code
// Les LED clignotent l'une après l'autre

const int leds[] = {0, 1, 2, 3, 4, 5, 6, 7};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(leds[i], HIGH);
    delay(200);
    digitalWrite(leds[i], LOW);
  }
}
