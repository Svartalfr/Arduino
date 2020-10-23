#include <NewPing.h>
#define TRIGGER_PIN 11
#define ECHO_PIN 12
#define MAX_DISTANCE 200
NewPing sonar (TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
int x;
#include <LiquidCrystal_I2C_AvrI2C.h>
LiquidCrystal_I2C_AvrI2C lcd(0x27, 16, 2);

void setup() {
 lcd.begin();
  lcd.backlight();
}

void loop() {
  x= sonar.ping_cm();
  lcd.home();
  lcd.print("mesafe: ");
  lcd.setCursor(0,1);
  lcd.print(x);
  lcd.setCursor(5,1);
  lcd.print("cm");
  delay(300);
  lcd.clear();

}
