#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Fruit Oracle!");
}

void loop() {
  switchState = digitalRead(switchPin);
  
  if (switchState != prevSwitchState) {
    if (switchState == LOW) {
      reply = random(8);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("The oracle says: ");
      lcd.setCursor(0, 1);
      
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

      for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
        lcd.scrollDisplayLeft();
        delay(150);
      }

    }
  }
  
  prevSwitchState = switchState;

  // Delay at the end of the full loop
  delay(1000);
}