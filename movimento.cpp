#include "movimento.h"


movimento::movimento(){
}

void movimento::andar_frente(){
  acionarMotores(25,25);
}
void movimento::enrolar_esquerda(){
  acionarMotores(-10,30);
}
void movimento::enrolar_direita(){
  acionarMotores(30,-10);
}
void movimento::parar(){
  acionarMotores(0,0);
}
void movimento::soltar_bola(){
  acionarServo(90);
  delay(1000);
  acionarServo(0);
}


