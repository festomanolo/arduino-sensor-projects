const int redPin = 9;    // Red LED pin
const int yellowPin = 10; // Yellow LED pin
const int greenPin = 11;   // Green LED pin
const int buzzerPin = 2;  // Buzzer pin

const unsigned long redDuration = 3000;      // Red light duration in milliseconds
const unsigned long greenDuration = 3000;    // Green light duration in milliseconds
const unsigned long yellowDuration = 1000;   // Yellow light duration in milliseconds

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  // Initial state: red light on, others off
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  // Red light
  digitalWrite(redPin, HIGH);
  delay(redDuration);
  digitalWrite(redPin, LOW);

  // Green light
  digitalWrite(greenPin, HIGH);
  delay(greenDuration);
  digitalWrite(greenPin, LOW);

  // Yellow light and buzzer
  digitalWrite(yellowPin, HIGH);
  digitalWrite(buzzerPin, HIGH);
  delay(yellowDuration);
  digitalWrite(yellowPin, LOW);
  digitalWrite(buzzerPin, LOW);
  
  // Repeat the cycle
}
