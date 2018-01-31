#include <LiquidCrystal.h>
#include <SparkFunDS1307RTC.h>
#include <Wire.h>

const int rs = 12, en = 11, d4 = 10, d5 = 9, d6 = 8, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  rtc.begin();
  lcd.begin(16,2);
  Serial.begin(9600);
 // rtc.setTime(0, 50, 8, "wednesday", 1/10/18, "january", 2018);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  rtc.update();
  rtc.set12Hour();
  Serial.print(rtc.minute());
  lcd.clear();
  lcd.print("Current time: ");
  lcd.setCursor(0,1);
  lcd.print(rtc.hour());
  
  lcd.print(":");
  if (rtc.minute() < 10) {
    lcd.print(0);
  }
  lcd.print(rtc.minute());
  //Serial.print(rtc.hour());
 
  delay(1000);


  
}
