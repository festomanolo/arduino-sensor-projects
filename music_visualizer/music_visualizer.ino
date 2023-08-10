const int soundPin = A0;    // Analog pin for sound sensor
const int tempPin = A2;     // Analog pin for temperature sensor
const int ledPin = 9;       // LED pin
const int buzzerPin = 2;    // Buzzer pin

void setup() {
  pinMode(soundPin, INPUT);
  pinMode(tempPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read sound level from microphone sensor
  int soundLevel = analogRead(soundPin);

  // Read temperature from temperature sensor
  int tempReading = analogRead(tempPin);
  float temperature = map(tempReading, 0, 1023, -10, 40); // Map to temperature range
  
  // Use sound level and temperature to control LED and buzzer
  if (soundLevel > 500) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000 + soundLevel / 10, 100);
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  // Print temperature and sound level to serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C   Sound Level: ");
  Serial.println(soundLevel);
  
  delay(10);  // Small delay between readings
}
