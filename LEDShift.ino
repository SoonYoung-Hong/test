/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int datapin = 2; //DS
int clockpin = 3; //SHCP
int latchpin = 4; //STCP

byte data= 0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(datapin, OUTPUT);
  pinMode(clockpin, OUTPUT);
  pinMode(latchpin, OUTPUT);
}

void shiftWrite(int desiredPin, boolean desiredState)
{
  bitWrite(data, desiredPin, desiredState);
  shiftOut(datapin, clockpin, MSBFIRST, data);
  digitalWrite(latchpin, HIGH);
  digitalWrite(latchpin, LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  for(int i = 0; i <= 3; i++)
  {
    shiftWrite(i, HIGH);
    delay(1000);
  }
  for(int i = 3; i >= 0; i--)
  {
    shiftWrite(i, LOW);
    delay(1000);
  }
}