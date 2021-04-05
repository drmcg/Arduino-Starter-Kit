int potVal = 0;          // A variable to store the potentiometer value

void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
}

void loop() {
  int newPotVal = analogRead(A0);

  if ((newPotVal < potVal - 1) || (newPotVal > potVal + 1)) {
    potVal = newPotVal;
  
    // send the value of analog input 0:
    Serial.println(potVal);
  }
  // wait a bit for the analog-to-digital converter to stabilize after the last
  // reading:
  delay(2);
}
