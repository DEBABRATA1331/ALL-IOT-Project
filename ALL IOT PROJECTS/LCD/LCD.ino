#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 13, 8, 9, 10, 11);
void setup ()
{
lcd.begin(16,2);
lcd.setCursor(1,0);
lcd.print("");
lcd.setCursor(4,2);
lcd.print("TANMAY SIR");
}
void loop()
{
for (int a=0; a<3; a++)
{
  lcd.scrollDisplayRight();
  delay(100);
}

for (int a=0; a<3; a++)
{
  lcd.scrollDisplayLeft();
  delay(1000);
}

}
