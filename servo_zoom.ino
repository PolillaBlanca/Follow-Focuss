
#include <Servo.h>

Servo zoom;
int valor; 

void setup() {


Serial.begin(38400);
zoom.attach(9);
zoom.write(15);

}

void loop() {
  
if(Serial.available() > 0){ 
  
    valor = Serial.read();// Reads the data from the serial port
    if (valor<0)
    valor==15;
    
 zoom.write(valor);
Serial.println(valor);
 
}
}
