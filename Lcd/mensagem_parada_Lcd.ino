
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);

void setup() {
  lcd.init();

}

void loop() {
  lcd.setBacklight(HIGH);

  lcd.setCursor(0,0);
  lcd.print("teste !!");

  lcd.setCursor(0,1);
  lcd.print("teste 2 !!");

  lcd.setCursor(0,2);
  lcd.print("teste 3 !!");

  lcd.setCursor(0,3);
  lcd.print("teste 4 !!");

}
