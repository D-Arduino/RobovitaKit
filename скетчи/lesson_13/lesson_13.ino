#include <Stepper.h> // библиотека для шагового двигателя

// количество шагов на 1 оборот, измените значение для вашего мотора
const int stepsPerRevolution = 200;

// устанавливаем порты для подключения драйвера
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  myStepper.setSpeed(170); // устанавливаем скорость 60 об/мин
}

void loop() {
  // поворачиваем ротор по часовой стрелке
  myStepper.step(-210);


}
