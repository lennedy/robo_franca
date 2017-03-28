#include "movimento.h"


movimento::movimento(){ 
}

  

void movimento::andar_frente(){
  robo.acionarMotores(50,40);
}
void movimento::enrolar_esquerda(){
  robo.acionarMotores(-40,60);
}
void movimento::enrolar_direita(){
  robo.acionarMotores(60,-40);
}
void movimento::parar(){
  robo.acionarMotores(0,0);
}
void movimento::soltar_bola(){
  deitar_cacamba();
  delay(1000);
  levantar_cacamba();
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


void movimento::deitar_cacamba(){
  robo.acionarServoCacamba(100);
  Serial.println("Cacamba Deitada");
}

void movimento::levantar_cacamba(){
  robo.acionarServoCacamba(180);
  Serial.println("Cacamba Levantada");
}

void movimento::palito_frente(){
  robo.acionarServoPalito(80);
  Serial.println("frente");
}

void movimento::palito_direita(){
  robo.acionarServoPalito(0);
  Serial.println("direita");
}

void movimento::palito_esquerda(){
  robo.acionarServoPalito(170);
  Serial.println("esquerda");
}
