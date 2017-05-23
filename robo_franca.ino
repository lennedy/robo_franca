//codigo competiçao
//#include <MFRC522.h>
#include <SPI.h>

#include <Servo.h>
#include "estrategia.h"
#include "robo_hardware.h"

//robo_hardware robo;
estrategia executar;
//Servo servo;

void setup() {
  executar.configura();
  executar.comece();
  //Serial.println("COMECEI");
  //robo.configurar();
  
}



void loop(){
  
  
  executar.run();
  //robo.mostrarSensores();
  //robo.acionarMotores(-50,-50);

}
