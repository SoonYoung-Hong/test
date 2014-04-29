
int sensorPin = A0;
int ledPin = 10;
int sensorValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  int brt = sensorValue;
  brt = max(brt, 0);
  brt = min(brt, 255);
  analogWrite(ledPin, brt);
}