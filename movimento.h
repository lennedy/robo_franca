#ifndef MOVIMENTO_H
#define MOVIMENTO_H

#include "robo_hardware.h"


class movimento{
  
  #define ESQUERDA 'a'
  #define DIREITA 'd'
  #define FRENTE 'w'

private:
  void noventa_direita();
  void noventa_esquerda();
  void frente_encruzilhada();
  
public:
  movimento();
  void palito_frente();
  void palito_esquerda();
  void palito_direita();
  
  void levantar_cacamba();
  void deitar_cacamba();
  
  void andar_frente();
  void andar_tras();
  void enrolar_esquerda();
  void enrolar_direita();
  void parar();
  void pegar_bola();
  void soltar_bola();
  void passar_encruzilhada(char encruzilhada);
  
};

#endif
