#include <MFRC522.h>
#include <SPI.h>

#include <Servo.h>
#include "estrategia.h"
#include "robo_hardware.h"

robo_hardware robo;
estrategia executar;

void setup() {
  executar.configura();
  //robo.configurar();
  Serial.begin(9600);
}

int x = 0;

void loop(){
  //robo.acionarMotores(50,50);
  executar.run();
  /*x = robo.lerSensorDeLinha(sensor_esquerdo);
  Serial.println(x);
  delay(500);
  */
 

}
