//códifo para leer los valores de los potenciómetros del controlador//
#include <Servo.h>
#include <Wire.h>//esto es básicamente el protocolo i2c


//conectamos el potenciómetro en el analogico A0
//conectamos el cable de datos del servo al pin 2
//Servo zoom;

int pot1=0;
byte valor1;

void setup() {
  Serial.begin(9600);
 // Wire.begin();//inicialización del protocolo i2c

  
}

void loop() {

//Wire.beginTransmission(1);

valor1= analogRead(pot1)/4 ;
//valor1=map(valor1, 0,1023,0,180);

Serial.println(valor1);
//Wire.write(valor1);
delay(8);

}
