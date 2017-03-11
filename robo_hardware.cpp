#include "robo_hardware.h"
#include <math.h>


robo_hardware::robo_hardware():leituraTag(SS_PIN, RST_PIN){
  //leituraTag(SS_PIN, RST_PIN);
}

void robo_hardware::tensao(float valor_por_cento,int pino){
  float k = 255/100;
  float valor_ate_255 = valor_por_cento * k;
  analogWrite(pino, abs(valor_ate_255)); 
}

void robo_hardware::configurar(){
  
  Serial.begin(9600);
  
  servo.attach(SERVO);
/* 
  pinMode(2, OUTPUT);  
  digitalWrite(2, HIGH);
  
  pinMode(3, OUTPUT);  
  digitalWrite(3, HIGH);
*/
  SPI.begin(); 
  leituraTag.PCD_Init();
  pinMode(4, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT);

  //pinMode(BOTAO, INPUT);
}

boolean robo_hardware::lerSensorFimDeCurso(){
  return digitalRead(BOTAO); 
}

float robo_hardware::lerSensorDeLinha(int sensor){
  return analogRead(sensor);
}

void robo_hardware::lerXbee(){
  
}

void robo_hardware::acionarMotores(float motor1, float motor2){
  
  if(motor1 < 0){
    digitalWrite(SENTIDO_ANTIHORARIO_RODA_ESQUERDA, false);
    tensao(motor1,PWM_RODA_ESQUERDA);  
  }else{
    digitalWrite(SENTIDO_ANTIHORARIO_RODA_ESQUERDA, true);
    motor1 = motor1 - 255;
    tensao(motor1,PWM_RODA_ESQUERDA);  
  }
  
  if(motor2 < 0){
    digitalWrite(SENTIDO_ANTIHORARIO_RODA_DIREITA, false);
    tensao(motor2,PWM_RODA_DIREITA);  
  }else{
    digitalWrite(SENTIDO_ANTIHORARIO_RODA_DIREITA, true);
    motor2 = motor2 - 255;
    tensao(motor2,PWM_RODA_DIREITA);  
  }
    
    
}

void robo_hardware::acionarServo(float angulo){
  servo.write(angulo);
}

boolean robo_hardware::lerTag(){
  if(leituraTag.PICC_IsNewCardPresent() && leituraTag.PICC_ReadCardSerial()){
    return true;
  }
}
