#include "movimento.h"


movimento::movimento(){ 
}

  

void movimento::andar_frente(){
  acionarMotores(40,40);
}
void movimento::enrolar_esquerda(){
  acionarMotores(-40,40);
}
void movimento::enrolar_direita(){
  acionarMotores(40,-40);
}
void movimento::parar(){
  acionarMotores(0,0);
}
void movimento::soltar_bola(){
  acionarServo(90);
  delay(1000);
  acionarServo(0);
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
  acionarMotores(-40,40);
}
void movimento::noventa_direita(){
  acionarMotores(40,-40);
}
void movimento::frente_encruzilhada(){
  acionarMotores(40,40);
}

void movimento::palito_frente(){
  acionarServo(80);
  Serial.println("frente");
}

void movimento::palito_direita(){
  acionarServo(0);
  Serial.println("direita");
}

void movimento::palito_esquerda(){
  acionarServo(170);
  Serial.println("esquerda");
}
