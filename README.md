# Arduino Sensor Projects

Beginner Arduino sketches from August 2023 using LEDs, buzzers and analog sensors. I also used them for an "Unleash Your Innovation with Arduino" workshop.

| Sketch | What it does | Hardware |
|--------|--------------|----------|
| `traffic_lights/` | Red → yellow → green traffic-light cycle | 3 LEDs on pins 9, 10, 11 |
| `traffic_lights_buzzer/` | Traffic lights that beep on yellow | 3 LEDs + buzzer on pin 2 |
| `night_mode/` | Turns an LED on when it gets dark | LDR on A0, LED on pin 9 |
| `clap_led/` | Flashes an LED when it detects a clap or loud sound | Sound sensor on A0, LED on pin 2 |
| `music_visualizer/` | LED and buzzer react to sound level; logs temperature | Sound sensor A0, temp sensor A2, LED 9, buzzer 2 |
| `lcd_keypad/` | UP/DOWN keys change a value shown on an LCD keypad shield | LCD keypad shield (`SpinTimer`, `LcdKeypad` libraries) |

`docs/` holds the workshop slides and photos.

## Upload

1. Open the sketch folder in the Arduino IDE. Each `.ino` file is named after its folder, which the IDE requires.
2. Choose your board (an Uno works for everything here) and the port.
3. Upload. Open the Serial Monitor at 9600 baud to see the sensor logs.
