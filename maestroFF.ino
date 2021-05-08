//códifo para leer los valores de los potenciómetros del controlador//




//conectamos el potenciómetro en el analogico A0

int pot=0;// con esto conectamos el poteciómetro al pin analógico A0
int valor;//aqui es donde se guarda el valor que leeremos del pot

void setup() {
  Serial.begin(38400);
  
}


void loop() {



valor= analogRead(pot);
byte valormap =map(valor, 0, 1023, 15, 180);



Serial.write(valormap);




}
