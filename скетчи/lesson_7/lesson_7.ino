#define piezo 2 // Даём имя пину к которому подключён пьезодинамик

void setup() {
  pinMode(2, OUTPUT);// Обозначаем подключённый к пьезодинамику пин как выход

}

void loop() {
  //1 версия
  tone(piezo, 800);//Включаем пьезодинамик на частоте 800 Герц
  delay(100);//Ждём 100 миллисекунд
  noTone(piezo);//Выключаем пьезодинамик
// 2 версия
  tone(piezo, 800, 100);//Запускаем пьезодинамик на частоте 800 Герц на 100 миллисекунд 
}
