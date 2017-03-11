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

void movimento::passar_encruzilhada(int encruzilhada){
  if(encruzilhada ==  ESQUERDA){
    noventa_enquerda();
  }else if(encruzilhada == DIREITA){
    noventa_direita();
  }else{
    frente_encruzilhada();
  }
}
