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
  Serial.println("COMECEI");
  //robo.configurar();
}



void loop(){
  executar.run();
  //robo.acionarMotores(100,100);
  //robo.mostrarSensores();
}
