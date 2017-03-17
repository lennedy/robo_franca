#include "movimento.h"


movimento::movimento(){ 
}

  

void movimento::andar_frente(){
  robo.acionarMotores(40,40);
}
void movimento::enrolar_esquerda(){
  robo.acionarMotores(-40,40);
}
void movimento::enrolar_direita(){
  robo.acionarMotores(40,-40);
}
void movimento::parar(){
  robo.acionarMotores(0,0);
}
void movimento::soltar_bola(){
  robo.acionarServo(90);
  delay(1000);
  robo.acionarServo(0);
}

void movimento::passar_encruzilhada(char encruzilhada){
  if(encruzilhada ==  ESQUERDA){
    noventa_esquerda();
  }else if(encruzilhada == DIREITA){
    noventa_direita();
  }else{
    frente_encruzilhada();
  }
}

void movimento::noventa_esquerda(){
  robo.acionarMotores(-40,40);
}
void movimento::noventa_direita(){
  robo.acionarMotores(40,-40);
}
void movimento::frente_encruzilhada(){
  robo.acionarMotores(40,40);
}

void movimento::palito_frente(){
  robo.acionarServo(80);
  Serial.println("frente");
}

void movimento::palito_direita(){
  robo.acionarServo(0);
  Serial.println("direita");
}

void movimento::palito_esquerda(){
  robo.acionarServo(170);
  Serial.println("esquerda");
}
