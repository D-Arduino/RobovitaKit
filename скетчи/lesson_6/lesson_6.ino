#include <LiquidCrystal_I2C.h>//Подключаем библиотеку для паботы с ЖК-дислеем


LiquidCrystal_I2C lcd(0x3F, 16, 2);//Даём дисплею имя и указываем сколько в нём строчек, столбцов и тип(0х3F)

void setup()
{
  lcd.init();// инициализируем дисплей

  
  lcd.backlight();//Включаем подсветку дисплея
  
}

void loop()
{
 lcd.setCursor(0,0);//Ставим курсор в значение 0,0
 lcd.print("Robovita");//Пишем на дисплее "Robovita"
 lcd.setCursor(1,1);//Ставим курсор в значение 1,1
 lcd.print("Technologies");//Пишем на дисплее "Technologies"
 delay(10000);//Ждём 10 секунд
 lcd.clear();//Очищаем дислей
}
