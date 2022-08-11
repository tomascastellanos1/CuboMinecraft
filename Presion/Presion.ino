
#include "Keyboard.h"    // incluye libreria Keyboard
#include "Mouse.h"  // incluye libreria Mouse
long insulto;
int AnalogPin = 0;   // Sensor conectado a Analog 0
int ResRead;         // La Lectura de la Resistencia


void setup(){

Serial.begin(9600); // Enviaremos la información de depuración a través del Monitor de Serial

}
void loop()
{
 
ResRead = analogRead(AnalogPin);

if (ResRead >100) {   // si se detecta mucha presion 
 Mouse.press(MOUSE_LEFT); 
 Serial.println("PULSADO");
 delay(900);
}else{
  Mouse.release (MOUSE_LEFT);
}



}
