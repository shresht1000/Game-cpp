#include <LiquidCrystal.h>
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
const int sw1 = 13, sw2 = 12, sw3 = 11;
int pot = A0;
int x = 1;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(sw3, INPUT);
  pinMode(pot, INPUT);

  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Shortcut React");
  lcd.setCursor(0, 1);
  lcd.print("test_me");
}
  /////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////

void loop() {
  if (digitalRead(sw1) == LOW) {
    while (x == 1) {
      lcd.clear();
      lcd.print("Simon");
      lcd.print("Ready");
      delay(500);
    }
  }
  if (digitalRead(sw2) == LOW) {
    while (x == 1) {
      lcd.clear();
      lcd.print("Reaction");
      delay(500);
      lcd.clear();
      lcd.print("Ready");
      delay(1000);
    }
  }
  /////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////
  int y;
  if (digitalRead(sw3) == LOW) {
    while (x == 1) {
      y=analogRead(pot);
      y=map(y,3,1020,0,9);
      lcd.clear();
      if(y==7){
        lcd.print("you win");
        delay(1000);
        lcd.clear();
        lcd.print("Next level");
        delay(1000);
        break;
      }
      else{
      lcd.print(y);
      }
      delay(50);
    }
    while (x == 1) {
      y=analogRead(pot);
      y=map(y,3,1020,0,255);
      lcd.clear();
      if(y==128){
        lcd.print("you win");
        delay(1000);
        lcd.clear();
        lcd.print("Next level");
        delay(1000);
        break;
      }
      else{
      lcd.print(y);
      }
      delay(50);
    }
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Simon Reaction");
    lcd.setCursor(0, 1);
    lcd.print("test_me");
  }
}
