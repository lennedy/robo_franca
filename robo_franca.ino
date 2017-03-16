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
 // robo.configurar();
  //Serial.begin(9600);
//  servo.attach(10);
}

int x = 0;

void loop(){
  
 // servo.write(90);
  //robo.acionarServo(00);
  //robo.acionarServo(10);
  //robo.acionarMotores(50,50);
  executar.run();
  /*x = robo.lerSensorDeLinha(sensor_esquerdo);
  Serial.println(x);
  delay(500);
  */
 

}
