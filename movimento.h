#include "robo_hardware.h"

#ifndef MOVIMENTO_H
#define MOVIMENTO_H

class movimento:protected robo_hardware{
  
  #define ESQUERDA 1
  #define DIREITA 2
  #define FRENTE 3

private:
  void noventa_direita();
  void noventa_enquerda();
  void frente_encruzilhada();
  
public:
  movimento();
  void andar_frente();
  void enrolar_esquerda();
  void enrolar_direita();
  void parar();
  void pegar_bola();
  void soltar_bola();
  void passar_encruzilhada(int encruzilhada);
  
};

#endif
