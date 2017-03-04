//nesse arquivo as funcoes devem ser somente declaradas
#ifndef ROBO_HARDWARE_H
#define ROBO_HARDWARE_H




#include <Arduino.h>
#include <Servo.h>


class robo_hardware{
public: 
  #define RODA_ESQUERDA 5
  #define SENTIDO_HORARIO_RODA_ESQUERDA 7
  #define SENTIDO_ANTIHORARIO_RODA_ESQUERDA 8

  #define RODA_DIREITA 6
  #define SENTIDO_HORARIO_RODA_DIREITA 4
  #define SENTIDO_ANTIHORARIO_RODA_DIRETA 9

  #define SERVO 1
  #define BOTAO 2

  #define sensor_mais_esquerdo A6
  #define sensor_esquerdo A7
  #define sensor_direito A8
  #define sensor_mais_direito A9

  robo_hardware();
  void configurar();
  boolean lerSensorFimDeCurso();
  float lerSensorDeLinha(int sensor);
  void lerXbee();
  void acionarMotores(float motor1, float motor2);
  void acionarServo(float angulo);   

private:
  void tensao(float valor_por_cento,int pino);
  
  

};

#endif
