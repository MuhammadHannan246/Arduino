#include <LiquidCrystal.h>

LiquidCrystal led(2,4,7,8,12,13);
#define temp A0
void setup(){
  pinMode(temp, INPUT);
  led.begin(16, 2);
  Serial.begin(9600);
}

void loop(){
  int RawVal = analogRead(temp);
  
  float voltage = (RawVal / 1023.0)*5000;
  float tempC = (voltage-500)*0.1;
  Serial.print("Temperature in C: ");
  Serial.println(tempC,1);
  
  int humidity = analogRead(temp);
  Serial.print("Humidity: ");
  Serial.print(map(humidity, 0, 1023, 10, 70));
  Serial.println("%");
  Serial.println("------------------");
  
  led.setCursor(0,0);
  led.print("Temp: ");
  led.print(tempC);
  
  led.setCursor(0,1);
  led.print("Humidity: ");
  led.print(humidity);
  led.print("%");
}