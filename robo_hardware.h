#include <SPI.h>
#include "MFRC522.h"
//nesse arquivo as funcoes devem ser somente declaradas
#ifndef ROBO_HARDWARE_H
#define ROBO_HARDWARE_H




#include <Arduino.h>
#include <Servo.h>


class robo_hardware{
private:
  #define AJUSTE_MOTOR 0.65
public: 
  #define PWM_RODA_ESQUERDA 5
  #define SENTIDO_ANTIHORARIO_RODA_ESQUERDA 7
  
  #define PWM_RODA_DIREITA 6
  #define SENTIDO_ANTIHORARIO_RODA_DIREITA 8
  
  #define SERVO 11
  #define BOTAO 2

  #define sensor_mais_esquerdo A3
  #define sensor_esquerdo A2
  #define sensor_direito A1
  #define sensor_mais_direito A0
  
  #define SS_PIN 53
  #define RST_PIN 3

  robo_hardware();
  void configurar();
  boolean lerSensorFimDeCurso();
  float lerSensorDeLinha(int sensor);
  void lerXbee();
  void acionarMotores(float motor1, float motor2);
  void acionarServo(float angulo); 
  boolean lerTag(); 
  

private:
  Servo servo;
  MFRC522 leituraTag;
  void tensao(float valor_por_cento,int pino);
  
  

};

#endif
