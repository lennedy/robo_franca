#ifndef CALIBRACAO_H
#define CALIBRACAO_H

#include "robo_hardware.h"

//esse vai dar certo.

class calibracao{
private:

  //int numero_de_encruzilhadas;
  //int encruzilhada[numero_de_encruzilhadas];

  int menor_valor_mais_esquerdo = 73;
  int maior_valor_mais_esquerdo = 436;

  int menor_valor_esquerdo = 68;
  int maior_valor_esquerdo = 469;

  int menor_valor_direito = 73;
  int maior_valor_direito = 494;

  int menor_valor_mais_direito = 82;
  int maior_valor_mais_direito = 507;

protected:
  
  int encruzilhada[50];

  boolean preto_maior_branco_mais_esquerdo = true;
  boolean preto_maior_branco_esquerdo = true;
  boolean preto_maior_branco_direito = true;
  boolean preto_maior_branco_mais_direito = true;

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
  void inicializar_valores();
};
#endif
