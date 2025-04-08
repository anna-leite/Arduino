// C++ code
// Les LED clignotent en alternance

const int led_red = 0;
const int led_blue = 1;


void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);

}

void loop()
{
  digitalWrite(led_red, LOW);
  delay(100);
  digitalWrite(led_red, HIGH);
  delay(100);
   digitalWrite(led_blue, LOW);
  delay(100);
  digitalWrite(led_blue, HIGH);
  delay(100);
}
