#include <SoftwareSerial.h> 

SoftwareSerial miBT (10,11);

void setup() {

Serial.begin(9600);
Serial.println("listo");
miBT.begin(38400);

}

void loop() {  

if (miBT.available())
Serial.write(miBT.read());
//con esto esperamos a que haya algún dato en el modulo y si lo hay lo imprime en el serial 

if (Serial.available())
miBT.write(Serial.read());
//lee lo que le pongamos al serial del arduin y se lo manda al módulo bluetooth

//antes de enchufar nada, para que el modulo entre en modo configuración hay que desconectar la alimentación del modulo pero se deja conectado el gnd
//se mantiene presionado el boton del módulo y se conecta la alimentación del módulo
//si los leds parpadean de manera lenta e4s que está en modo configuración

}

//comandos//
/*nuestro serial debe de estar configurado con AMBOS NL & CR y puesto en 9600 baudio
AT nos debe de devolver un OK con eso sabemos que hay verdadera comunicación esntre ellos

saber el nombre del módulo
AT+NAME?
si no responde nada es que no responde a consultas de nombre
pero le podemos poner un nombre personalizado

AT+PSWD? 
con esto se sabe el pin del módulo que también se puede modificar 

AT+ROLE?
con esto se sabe si está en modo esclavo (0) o en modo maestro (1)

AT+UART? 
con esto se sabe la velocidad a la que trabaja el módulo

restablecer los valores de fábrica
----------------------------------
AT+ORGL

AT+NAME=nombre que le queramos poner

AT+PSWD=la contraseña que queramos

AT+UART= la velocidad que queramos,0,0

AT+RESET y salimos del modo de configuración

*/
