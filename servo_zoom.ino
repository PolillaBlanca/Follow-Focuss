


#include <Servo.h>

//conectamos el cable de datos del servo al pin 2
Servo zoom;
int valor1=0; 

void setup() {


Serial.begin(9600);
 zoom.attach(9);


}

void loop() {
if(Serial.available() > 0){ 
    valor1 = Serial.read(); // Reads the data from the serial port
 }
 Serial.println(valor1);
zoom.write(valor1);
 delay(10);

}
