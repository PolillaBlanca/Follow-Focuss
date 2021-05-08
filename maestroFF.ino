//códifo para leer los valores de los potenciómetros del controlador//
#include <Servo.h>



//conectamos el potenciómetro en el analogico A0

//Servo zoom;

int pot1=0;// con esto conectamos el poteciómetro al pin analógico A0
int valor1;//aqui es donde se guarda el valor que leeremos del pot

void setup() {
  Serial.begin(9600);
  
}


void loop() {


valor1= analogRead(pot1);
int valor1map =map(valor1, 0,1023,0,225);

Serial.write(valor1);

delay(10);

}
