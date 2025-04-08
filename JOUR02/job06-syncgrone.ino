// C++ code
// Les LED clignotent en même temps

const int led_red = 2;


void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led_red, OUTPUT);

}

void loop()
{
  digitalWrite(led_red, LOW);
  delay(1000);
  digitalWrite(led_red, HIGH);
  delay(1000);
}
