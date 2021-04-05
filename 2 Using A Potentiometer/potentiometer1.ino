int potPin = A0;        // Input pin from the potentiometer
int ledPin = 9;        // Output pin to the LED
int potVal = 0;          // A variable to store the potentiometer value
int brightness = 0;

void setup()          // Runs once when sketch start
{
  pinMode(ledPin, OUTPUT);      // Setting the LED pin as an output
}

void loop()          // Runs repeatedly
{
  //read from the pot pin, and store it into potval
  potVal = analogRead(potPin);

  //"map" the brightness, so that potval (0->1023)
  // corresponds with a value between (0->255)

  brightness = map(potVal , 0, 1023, 0, 255);

  //analog write uses PWM to control the brightness of the LED.
  // it will only work on the PWM pins, which pin 9 is.
  analogWrite(ledPin, brightness);
}