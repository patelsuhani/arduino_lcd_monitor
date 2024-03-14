#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;
int scrollPosition = 0; // Variable to keep track of the scrolling position

void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Fruit Oracle!");
}

