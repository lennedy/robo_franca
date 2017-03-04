#include "calibracao.h"

#ifndef SENSORES_H
#define SENSORES_H



class sensores:calibracao{


public:  
  sensores();
  inline boolean branco_branco_branco_branco();// 1 de 12 - estado: ir para frente
  inline boolean branco_preto_branco_branco();//2 de 12 - estado: enrolar_esquerda
  inline boolean branco_branco_preto_branco();//3 de 12 - estado: enrolar_direita
  inline boolean preto_branco_branco_branco();//4 de 12 - estado: enrolar_esquerda
  inline boolean branco_branco_branco_preto();//5 de 12 - estado: enrolar_direita
  inline boolean branco_preto_preto_branco();// 6 de 12 - estado: ir_para_frente
  inline boolean preto_branco_branco_preto();//7 de 12 - estado: encruzilhada
  inline boolean preto_branco_preto_branco();//8 de 12 - estado: encruzilhada
  inline boolean branco_preto_branco_preto();//9 de 12 - estado: encruzilhada
  inline boolean preto_preto_preto_branco();//10 de 12 - estado: encruzilhada(sem certeza)
  inline boolean branco_preto_preto_preto();//11 de 12 - estado: encruzilhada(sem certeza)
  inline boolean preto_preto_preto_preto();//12 de 12 - estado: encruzilhada
  
  
private:  
  int determine_cor(int sensor, float media);

};


#endif
