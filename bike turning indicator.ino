#include<LiquidCrystal.h> 
LiquidCrystal lcd(7,6,5,4,3,2); 
const int xpin = A4; // x-axis of the accelerometer 
const int ypin = A5; // y-axis 
const int zpin = A6; // z-axis (only on 3-axis models) 
#define buzzer 11 
void setup() { 
 
 pinMode(8,OUTPUT); 
 pinMode(9,OUTPUT); 
 pinMode(10,OUTPUT); 
 pinMode(14,OUTPUT); 
 pinMode(15,OUTPUT); 
 pinMode(16,OUTPUT); 
pinMode(buzzer, OUTPUT); 
digitalWrite(8, HIGH); 
 digitalWrite(9, HIGH); 
 digitalWrite(10, HIGH); 
 digitalWrite(14, HIGH); 
 digitalWrite(15, HIGH); 
 digitalWrite(16, HIGH); 
 
 lcd.clear(); 
 lcd.print(" Automatic BIke "); 
 lcd.setCursor(0,1); 
 lcd.print(" Indicator System "); 
 
 lcd.clear(); 
} 
void loop() { 
 
 // print the sensor values: 
 int a,b,c; 
 a=analogRead(xpin); 
 a=analogRead(xpin); 
 a=analogRead(xpin); 
if(a<=300) 
{ 
 
lcd.setCursor(0,0); 
 lcd.print("Left Indicating...."); 
 
digitalWrite(11, HIGH); 
digitalWrite(8, LOW); 
delay(100); 
 digitalWrite(8, HIGH); 
 digitalWrite(9, LOW); 
delay(100); 
 digitalWrite(9, HIGH); 
 digitalWrite(10, LOW);
 delay(100); 
 digitalWrite(10, HIGH); 
 digitalWrite(11, LOW); 
delay(500); 
} 
else if(a>=370) 
{ 
 
 lcd.setCursor(0,0); 
 lcd.print("Right Indicating...."); 
 
digitalWrite(11, HIGH); 
digitalWrite(14, LOW); 
delay(100); 
 digitalWrite(14, HIGH); 
 digitalWrite(15, LOW); 
delay(100); 
 digitalWrite(15, HIGH); 
 digitalWrite(16, LOW); 
delay(100); 
 digitalWrite(16, HIGH); 
 digitalWrite(11, LOW); 
delay(500); 
} 
else 
{ 
 lcd.setCursor(0,0); 
 lcd.print("Stable "); 
 digitalWrite(8, HIGH); 
 digitalWrite(9, HIGH); 
 digitalWrite(10, HIGH); 
 digitalWrite(14, HIGH); 
 digitalWrite(15, HIGH); 
 digitalWrite(16, HIGH); 
 delay(10); 
} 
} 