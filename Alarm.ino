#include <LiquidCrystal.h>
int Mpin =8;// датчик движения
int Spin =6;
LiquidCrystal lcd(11,12,5,4,3,2);

void setup()
{
  Serial.begin(9600);
  pinMode(Mpin,INPUT);
  pinMode(Spin,OUTPUT);
  lcd.begin(16,2);
  lcd.print("  Hello! It's ");
  lcd.setCursor(0,1);
  lcd.print("  a scaner");
  delay(1000);
  lcd.clear();
}

void loop()
{
  int Mstate=digitalRead(Mpin);// показания датчика движения
  Serial.println(Mstate); // вывод в порт показаний датчика
  lcd.setCursor(0,0);
  lcd.print("Value of activ=");
  lcd.setCursor(15,0);
  lcd.print(Mstate);
  
  if (Mstate==0)
  {
    lcd.setCursor(0,1);
     lcd.setCursor(0,1);
  lcd.print("   All good   ");
  Mstate=digitalRead(Mpin);
    
  } 
  else 
  {
    lcd.print("   Ivasion!   ");
    sound(1000);
  lcd.setCursor(0,1);
  lcd.print("   Ivasion!   ");
  Mstate=digitalRead(Mpin);
  }
  
  
}
void sound(int dur) 
{
  long time=millis();
  while((millis()-time)<dur)
  {
    digitalWrite(Spin,HIGH);
    delayMicroseconds(1);
    digitalWrite(Spin,LOW);
    delayMicroseconds(1);
  }

}
