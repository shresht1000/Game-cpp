#include <LiquidCrystal.h>

const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
const int sw1 = 13, sw2 = 12, sw3 = 11;
int pot = A0, y, x = 1;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(sw1, INPUT); pinMode(sw2, INPUT); pinMode(sw3, INPUT); pinMode(pot, INPUT);
  lcd.begin(16, 2);
  lcd.print("click 3");
}

void playLevel(int range, int target, const char* nextLevelMsg) {
  while (x == 1) {
    y = map(analogRead(pot), 3, 1020, 0, range);
    lcd.clear();
    if (y == target) {
      lcd.print("you win"); delay(1000); lcd.clear();
      lcd.print(nextLevelMsg); delay(1000);
      break;
    } else lcd.print(y);
    delay(50);
  }
}

void loop() {
  if (digitalRead(sw3) == LOW) {
    playLevel(9, 7, "Next level 2");
    playLevel(35, 25, "Next level 3");
    playLevel(70, 53, "Next level 4");
    playLevel(130, 53, "Next level 5");
    playLevel(180, 69, "Next level 6");
    playLevel(256, 100, "Next level 7");
    playLevel(300, 220, "Next level 8");
    playLevel(450, 200, "Next level 9");
    playLevel(481, 200, "Next level 10");
    playLevel(512, 234, "You beat the\n game");
    playLevel(700, 333, "Next level 12");
    playLevel(1024, 512, "You beat the\n game");
    
    delay(5000);
    lcd.clear();
    lcd.print("replay?");
  }
}
