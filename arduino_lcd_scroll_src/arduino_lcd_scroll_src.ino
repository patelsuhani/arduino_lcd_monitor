#include <LiquidCrystal.h>

// Initialize the LiquidCrystal object with pin numbers

//Define constants and variables
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  // Begin serial communication at 9600 baud rate
  Serial.begin(9600);

  // Initialize the LCD with 16 columns and 2 rows
  lcd.begin(16, 2);

  // Set the switchPin as INPUT
  pinMode(switchPin, INPUT);

  // Display initial message on LCD
  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Fruit Oracle!");
}

void loop() {
  // Read the state of the switch
  switchState = digitalRead(switchPin);
  
  // Check if the switch state has changed
  if (switchState != prevSwitchState) {
    // If the switch is pressed (LOW state)
    if (switchState == LOW) {
      // Generate a random number between 0 to 7
      reply = random(8);

      // Clear the LCD screen
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("The oracle says: ");
      lcd.setCursor(0, 1);
      
      // Display a fruit based on the random number
      switch(reply){
        case 0:
          lcd.print("Apple ");
          break;
        case 1:
          lcd.print("Banana ");
          break;
        case 2:
          lcd.print("Cherry ");
          break;
        case 3:
          lcd.print("Grapes ");
          break;
        case 4:
          lcd.print("Orange ");
          break;
        case 5:
          lcd.print("Kiwi ");
          break;
        case 6:
          lcd.print("Mango ");
          break;
        case 7:
          lcd.print("Lychee ");
          break;
      }
      // Scroll logic
      // Scroll the text 13 positions to the left on the LCD
      for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
        lcd.scrollDisplayLeft();
        delay(150);
      }

      // Scroll the text 29 positions to the right on the LCD
      for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
        lcd.scrollDisplayRight();
        delay(150);
      }

      // Scroll the text 16 positions to the left to move it back to the center on the LCD
      for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
        lcd.scrollDisplayLeft();
        delay(150);
      }
    }
  }
  
  // Update the previous switch state
  prevSwitchState = switchState;

  // Delay at the end of the full loop
  delay(1000);
}
