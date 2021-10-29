// C++ code
// This program is licenced under GPL V3
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  // Turn on the built-in LED
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  // Turn off the built-in LED
  delay(1000); // Wait for 1000 millisecond(s)
}
