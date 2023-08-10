const int soundPin = A0;    // Analog pin for sound sensor
const int ledPin = 2;       // LED pin

int threshold = 500;        // Adjust this threshold based on sensor sensitivity

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(soundPin);

  if (sensorValue > threshold) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Clap detected!");
    delay(500);  // Keep the LED on for 500 milliseconds
    digitalWrite(ledPin, LOW);
  }

  delay(10);  // Small delay between readings
}
