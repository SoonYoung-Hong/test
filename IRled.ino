int sensorPin = 12;
int inputPin = 2;
int pirState = LOW;
int val = 0;

void setup() {
  pinMode(sensorPin, OUTPUT);
  pinMode(inputPin, INPUT);
  Serial.begin(9600);  

}

void loop() {
  val = digitalRead(inputPin);
 if(val == HIGH) {
   digitalWrite(sensorPin, HIGH);
   if(pirState == LOW) {
     Serial.println("Motion Detected!");
     pirState = HIGH;
   }
 }
 else
 {
   digitalWrite(sensorPin, LOW);
   if(pirState == HIGH) {
     Serial.println("Motion ended!");
     pirState = LOW;
   }
 }
}