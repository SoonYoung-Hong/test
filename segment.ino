/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int on = LOW;
int off = HIGH;
int i = 0;
int j = 0;
int pin[] = {2,3,4,5,6,7,8,9};
int digit[10][8] = {
{on, on, on, on, on, on, off, on},
{off, on, on, off, off, off, off, off},
{on, on, off, on, on, off, on, on},
{on, on, on, on, off, off, on, off},
{off, on, on, off, off, on, on, on},
{on, off, on, on, off, on, on, off},
{off, off, on, on, on, on, on, on},
{on, on, on, off, off, on, off, off},
{on, on, on, on, on, on, on, on},
{on, on, on, off, off, on, on, off}};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
   for(i = 0; i<8; i++)
   {pinMode(pin[i], OUTPUT);}
}

// the loop routine runs over and over again forever:
void loop() {
  for(i = 0; i<10; i++)
  {  
    for(j = 0; j < 8; j++)
    {
      digitalWrite(pin[j], digit[i][j]) ;
    }
    delay(1000);
  }
}

  // turn the LED on (HIGH is the voltage level)
  // wait for a second
  
  
  
  
  
  
  //digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
 //delay(1000);               // wait for a second
