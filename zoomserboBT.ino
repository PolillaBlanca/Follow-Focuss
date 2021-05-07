#include <Servo.h>
#include <Wire.h>

//conectamos el cable de datos del servo al pin 2
Servo zoom;

void setup() {
 
 Wire.begin(1); // put your setup code here, to run once:
 Wire.onReceive(llegaDato);
 zoom.attach(2);


}

void loop() {
 delay(10);
}

void llegaDato() {
  int estado = 0;

  // Si hay un byte disponible
  if (Wire.available() == 1)
  {
    estado = Wire.read();

  }
 
  zoom.write(estado);
  
 
}
