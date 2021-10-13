#include <Servo.h>
#define button 8//Присваиваем пину 3 имя button(pin подключение кнопки)
#define led 7
Servo servo;
void setup(){
  pinMode(button, INPUT);//Обозначили пин 3 как вход
  pinMode(led, OUTPUT);
  
 servo.attach(9);
}
  
void loop(){
  
  int buttonState = digitalRead(button);//Создаём переменную buttonState и присваиваем положение кнопки(HIGH или LOW)
  if(buttonState == HIGH){//Если кнопка нажата(5V(HIGH)),
   servo.write(90);
   servo.write(90);
   digitalWrite(led, HIGH);
  }
  else{
    servo.write(0);
  }
}
