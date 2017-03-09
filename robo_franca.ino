#include <MFRC522.h>
#include <SPI.h>

#include <Servo.h>
#include "estrategia.h"


estrategia executar;

void setup() {
  executar.configura();
   //robo.configurar();
  Serial.begin(9600);
}

void loop(){
  executar.run();
}
