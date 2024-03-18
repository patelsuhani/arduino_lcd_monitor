**LCD Display**

## Description
These Arduino projects leverage the capabilities of the LiquidCrystal library and hardware interfacing to create interactive experiences. Utilizing a combination of LCD displays and tilt switches, both the arduino_lcd_monitor.ino and arduino_monitor_scroll.ino deliver random responses to user queries. The arduino_lcd_monitor.ino randomly selects responses from a predefined set, while the arduino_monitor_scroll.ino presents a variety of fruits as responses and scrolls the font on the LCD screen.

## Components
- Arduino board (e.g., Arduino Uno)
- 16x2 LCD display
- Tilt switch
- 10kΩ resistor (for pull-up configuration)
- Potentiometer (for adjusting screen contrast)
- 220Ω resistor (for LED+ pin on the LCD)
- Jumper wires
- Breadboard

## Step-by-Step Assembly Guide
1. **Prepare Power and Ground:**
   - Connect power and ground to one side of your breadboard.

2. **Connect Tilt Switch:**
   - Place the tilt switch on the breadboard.
   - Connect one lead of the tilt switch to 5V.
   - Connect the other lead of the tilt switch to ground through a 10-kilohm resistor, and to your Arduino’s pin 6.

3. **LCD Connections:**
   - Connect the LCD pins as follows:
     - RS (Register Select): Arduino Digital Pin 12
     - Enable (EN): Arduino Digital Pin 11
     - D4: Arduino Digital Pin 5
     - D5: Arduino Digital Pin 4
     - D6: Arduino Digital Pin 3
     - D7: Arduino Digital Pin 2
     - R/W (Read/Write): Ground
   - Connect the LED- pin on the LCD to ground.
   - Connect the LCD power supply (Vcc) to 5V.
   - Connect the LED+ pin on the LCD to power through a 220-ohm resistor.

4. **Potentiometer for Screen Contrast:**
   - Place the potentiometer on the breadboard.
   - Connect one end pin of the potentiometer to power and the other end to ground.
   - Connect the center pin of the potentiometer to V0 on the LCD.

## Setup
1. Connect the components according to the step-by-step assembly guide.
2. Upload the provided Arduino sketch to your Arduino board.
3. Power up your Arduino board.
## Usage
1. Activate the LCD by tilting the tilt switch and rotating the potentiometer.
2. A random response will be displayed on the LCD screen.
3. Release the tilt switch to see a new response.
  
## Customization
- You can modify the responses in the `loop()` function by changing the strings within the `switch(reply)` block.
- Adjust the number of responses and their content as desired.

## Note
- Ensure that you have the LiquidCrystal library installed in your Arduino IDE for the code to compile properly.
- This project is for educational and entertainment purposes only. The responses generated on the LCD Screen are random and not based on any real predictive abilities.

## Author
Suhani Patel

## License
This project is released under the MIT License. See the LICENSE file for details.

## Acknowledgments
Special thanks to the Arduino community and the creators of the LiquidCrystal library.
