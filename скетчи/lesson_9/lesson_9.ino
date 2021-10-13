#include <IRremote.h> // подключаем библиотеку для IR приемника

IRrecv irrecv(A5); // указываем пин, к которому подключен IR приемник
decode_results results;

void setup() {
   irrecv.enableIRIn();  // запускаем прием инфракрасного сигнала
   Serial.begin(9600); // подключаем монитор порта

   pinMode(13, OUTPUT); // пин 12 будет выходом (англ. «output»)
   pinMode(A5, INPUT); // пин A0 будет входом (англ. «intput»)
  
}

void loop() {
   if (irrecv.decode(&results)) // если данные пришли выполняем команды
   {
      Serial.println(results.value); // отправляем полученные данные на порт
    
      // включаем и выключаем светодиод, в зависимости от полученного сигнала  
      if (results.value == 16724175) { 
      digitalWrite(13, HIGH);
   }
      if (results.value == 16738455) { 
      digitalWrite(13, LOW);
   }
      irrecv.resume(); // принимаем следующий сигнал на ИК приемнике
   }
}
