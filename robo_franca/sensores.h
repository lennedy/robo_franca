#ifndef SENSORES_H
#define SENSORES_H

#include "calibracao.h"


class sensores:public calibracao{


public:  
  sensores();
  void configura();
  boolean rfid_presente();
  boolean branco_branco_branco_branco();// 1 de 12 - estado: ir para frente
  boolean branco_preto_branco_branco();//2 de 12 - estado: enrolar_esquerda
  boolean branco_branco_preto_branco();//3 de 12 - estado: enrolar_direita
  boolean preto_branco_branco_branco();//4 de 12 - estado: enrolar_esquerda
  boolean branco_branco_branco_preto();//5 de 12 - estado: enrolar_direita
  boolean branco_preto_preto_branco();// 6 de 12 - estado: ir_para_frente
  boolean preto_branco_branco_preto();//7 de 12 - estado: encruzilhada
  boolean preto_branco_preto_branco();//8 de 12 - estado: encruzilhada
  boolean branco_preto_branco_preto();//9 de 12 - estado: encruzilhada
  boolean preto_preto_preto_branco();//10 de 12 - estado: encruzilhada(sem certeza)
  boolean branco_preto_preto_preto();//11 de 12 - estado: encruzilhada(sem certeza)
  boolean preto_preto_preto_preto();//12 de 12 - estado: encruzilhada
  void calibrar();
  
  
private:  
  int determine_cor(int sensor, float media, boolean preto_maior_branco);

};


#endif
