const int lightPin = A0;   // Analog pin for light sensor
const int ledPin = 9;      // LED pin

int threshold = 500;       // Adjust this threshold based on sensor sensitivity

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(lightPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(lightPin);

  if (lightLevel < threshold) {
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    Serial.println("It's dark! LED ON.");
  } else {
    digitalWrite(ledPin, LOW);   // Turn off the LED
    Serial.println("It's bright! LED OFF.");
  }

  delay(1000);  // Delay between readings
}
