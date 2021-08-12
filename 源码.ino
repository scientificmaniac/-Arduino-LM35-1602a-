#include <LiquidCrystal.h>
//#include <OneWire.h>


LiquidCrystal lcd(12,11,9,8,7,6);
void setup() {
    Serial.begin(9600);
    lcd.begin(16,2);
    lcd.print("temerature");
    delay(1000);
}
void loop() 
{

int sensorValue = analogRead(A0);
   // 将模拟信号转换成电压
   float voltage = sensorValue * (5.0 / 1023.0);
   Serial.print("voltge:");
   Serial.println(voltage);
   float temperature = (voltage /0.01);
   lcd.clear();
   lcd.print("temperature is");
   Serial.println(temperature);
   lcd.setCursor(0,1);
   lcd.print((long)temperature/10);
   lcd.print(".");
   lcd.print((long)temperature%10);
   lcd.print((char)223);
   lcd.print("C");
 delay(1000);

}