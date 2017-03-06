#include "robo_hardware.h"

#ifndef CALIBRACAO_H
#define CALIBRACAO_H

class calibracao:protected robo_hardware{
  
  
private:

  

  int menor_valor_mais_esquerdo = 0;
  int maior_valor_mais_esquerdo = 0;

  int menor_valor_esquerdo = 0;
  int maior_valor_esquerdo = 0;

  int menor_valor_direito = 0;
  int maior_valor_direito = 0;

  int menor_valor_mais_direito = 0;
  int maior_valor_mais_direito = 0;

protected:
  
  int encruzilhada[50];

  boolean preto_maior_branco = true;

  float media_mais_esquerda =  0;
  float media_esquerda =  0;
  float media_direita = 0;
  float media_mais_direita = 0;


  int calcule_media(int valor_maior, int valor_menor);
  
public:
  calibracao();
  int get_encruzilhada(int posicao);
  float get_media_mais_esquerda();
  float get_media_esquerda();
  float get_media_direita();
  float get_media_mais_direita();
  void calibra();
};
#endif
