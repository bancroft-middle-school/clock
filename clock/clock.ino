
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
  Serial.print(rtc.minute());
  lcd.clear();
  lcd.print(rtc.hour());
  
  lcd.print(":");
  lcd.print(rtc.minute());
  //Serial.print(rtc.hour());
 
  delay(1000);


  
}
