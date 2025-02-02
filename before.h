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
  lcd.print("click 3");
}
int y;
void loop() {
  if (digitalRead(sw3) == LOW) {
    while (x == 1) {
      y = analogRead(pot);
      y = map(y, 3, 1020, 0, 9);
      lcd.clear();
      if (y == 7) {
        lcd.print("you win");
        delay(1000);
        lcd.clear();
        lcd.print("Next level 2");
        delay(1000);
        break;
      } else {
        lcd.print(y);
      }
      delay(50);
    }
    /////////////////////////////////////////////////////////////
    if (digitalRead(sw3) == LOW) {
      while (x == 1) {
        y = analogRead(pot);
        y = map(y, 3, 1020, 0, 35);
        lcd.clear();
        if (y == 25) {
          lcd.print("you win");
          delay(1000);
          lcd.clear();
          lcd.print("Next level 3");
          delay(1000);
          break;
        } else {
          lcd.print(y);
        }
        delay(50);
      }
      //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      while (x == 1) {
        y = analogRead(pot);
        y = map(y, 3, 1020, 0, 70);
        lcd.clear();
        if (y == 53) {
          lcd.print("you win");
          delay(1000);
          lcd.clear();
          lcd.print("Next level 4");
          delay(1000);
          break;
        } else {
          lcd.print(y);
        }
        delay(50);
      }
      //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      while (x == 1) {
        y = analogRead(pot);
        y = map(y, 3, 1020, 0, 180);
        lcd.clear();
        if (y == 69) {
          lcd.print("you win");
          delay(1000);
          lcd.clear();
          lcd.print("Next level 5");
          delay(1000);
          break;
        } else {
          lcd.print(y);
        }
        delay(50);
      }
      //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      while (x == 1) {
        y = analogRead(pot);
        y = map(y, 3, 1020, 0, 256);
        lcd.clear();
        if (y == 100) {
          lcd.print("you win");
          delay(1000);
          lcd.clear();
          lcd.print("Next level 6");
          delay(1000);
          break;
        } else {
          lcd.print(y);
        }
        delay(50);
      }
      ///////////////////////////////////////////////////////
      while (x == 1) {
        y = analogRead(pot);
        y = map(y, 3, 1020, 0, 450);
        lcd.clear();
        if (y == 200) {
          lcd.print("you win");
          delay(1000);
          lcd.clear();
          lcd.print("Next level 6");
          delay(1000);
          break;
        } else {
          lcd.print(y);
        }
        delay(50);
      }
      //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      while (x == 1) {
        y = analogRead(pot);
        y = map(y, 3, 1020, 0, 512);
        lcd.clear();
        if (y == 234) {
          lcd.print("you win");
          delay(1000);
          lcd.clear();
          lcd.print("You beat the");
          lcd.setCursor(0, 1);
          lcd.print("game");
          delay(1000);
          break;
        } else {
          lcd.print(y);
        }
        delay(50);
      }
      delay(5000);
      lcd.clear();
      lcd.print("replay?");
    }
  }
}
