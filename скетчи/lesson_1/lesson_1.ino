/*Здравствуй, сегодня ты начинаешь учёбу в детской инженерной школе Робовита, удачи!
*На вашем первом уроке вы прошли закон Ома, с начала вам показалось это сложно, но подождите сдаваться
*Сегодня мы начнём с самого простого урока- мигание светодиода.
*                                               СВЕТОДИОД
*Подключение светодиода:
*1. Посмотрите на ножки вашего светодиода, дна из них длиннее, а другая короче. Та что короче - это минус(GND), подключается через резистор к GND
*2.Та что длиннее - это плюс(PIN), подключается к любому цифровому пину на плате(от 2 до 13(мы возьмём Pin под номером 3)).
*3.Прочитайте весь скетч полностью! От начала до самой послндней точки.
*4.Загрузите скетч на плату(Arduino UNO), подключив ещё через порт USB.
*Давайте ознакомимся с нашим первым скетчем:
 */
void setup(){//Эта часть программы работает только при подключении Ардуино к питанию, т.е. не постоянно
  pinMode(3, OUTPUT);//Все пины ардуино делятся на два типа: вход(INPUT) и выход(OUTPUT), их нужно указывать самостоятельно
                     //Тут мы указали, что 3 пин - выход(светодиод)
}//Часть программы окончена

 void loop(){//Эта часть программы раюотает как цикл, т.е. постоянно
  digitalWrite(3, HIGH);//Данная функция включает светодиод(подаёт на пин 5V(HIGH))
  delay(1000);//Задержка на продолжение(1 секунда)
  digitalWrite(3, LOW);//Выключаем светодиод(перестаём подавать на пин 5V(LOW))
 }
