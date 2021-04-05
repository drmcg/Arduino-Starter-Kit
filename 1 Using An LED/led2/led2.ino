void setup()          // Runs once when sketch starts

{
  pinMode(13, OUTPUT);        // Setting the LED pin as an output
}

void loop()         // Runs repeatedly
{
  digitalWrite(13, HIGH);     // Turning the LED on
  delay(50);                    // Waiting 1 second
  digitalWrite(13, LOW);          // Turning the LED off
  delay(2000);                  // Waiting 1 second
}
