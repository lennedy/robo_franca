//#include <MFRC522.h>
#include <SPI.h>

#include <Servo.h>
#include "estrategia.h"
#include "robo_hardware.h"

//robo_hardware robo;
estrategia executar;

void setup() {
 //executar.configura();
  robo.configurar();
  //Serial.begin(9600);
  
}

int x = 0;
int y = 0;
int z = 0;
int n = 0;

void loop(){
  //robo.acionarServo(10);
  //robo.acionarMotores(50,50);
  executar.run();
  x = robo.lerSensorDeLinha(sensor_mais_esquerdo);
  y = robo.lerSensorDeLinha(sensor_esquerdo);
  z = robo.lerSensorDeLinha(sensor_direito);
  n = robo.lerSensorDeLinha(sensor_mais_direito);
  
  Serial.print("Mais esquerdo: ");
  Serial.println(x);
  
  Serial.print("Esquerdo: ");
  Serial.println(y);
  
  Serial.print("Direito: ");
  Serial.println(z);
  
  Serial.print("Mais direito: ");
  Serial.println(n);
  
  Serial.println("*******************************"); 
  delay(500);
}
