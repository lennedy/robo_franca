#ifndef CALIBRACAO_H
#define CALIBRACAO_H

#include "robo_hardware.h"

//esse vai dar certo.

class calibracao:protected robo_hardware{
private:

  //int numero_de_encruzilhadas;
  //int encruzilhada[numero_de_encruzilhadas];

  int menor_valor_mais_esquerdo = 0;
  int maior_valor_mais_esquerdo = 1000;

  int menor_valor_esquerdo = 0;
  int maior_valor_esquerdo = 1000;

  int menor_valor_direito = 0;
  int maior_valor_direito = 1000;

  int menor_valor_mais_direito = 0;
  int maior_valor_mais_direito = 1000;

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
