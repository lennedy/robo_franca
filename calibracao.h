#ifndef CALIBRACAO_H
#define CALIBRACAO_H

#include "robo_hardware.h"

//esse vai dar certo.

class calibracao{
private:

  //int numero_de_encruzilhadas;
  //int encruzilhada[numero_de_encruzilhadas];
  
  // variaveis com nome menor... guardam valores do preto -- variaveis com nome maior guardam valores do branco
  
  int menor_valor_mais_esquerdo = 509;
  int maior_valor_mais_esquerdo = 31;
  
  int menor_valor_esquerdo = 522;
  int maior_valor_esquerdo = 29;

  int menor_valor_direito = 505;
  int maior_valor_direito = 30;

  int menor_valor_mais_direito = 390;
  int maior_valor_mais_direito = 26;

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
  int get_menor_valor_mais_esquerdo();
  int get_maior_valor_mais_esquerdo();

  int get_menor_valor_esquerdo();
  int get_maior_valor_esquerdo();

  int get_menor_valor_direito();
  int get_maior_valor_direito();

  int get_menor_valor_mais_direito();
  int get_maior_valor_mais_direito();
  
  calibracao();
  int get_encruzilhada(int posicao);
  float get_media_mais_esquerda();
  float get_media_esquerda();
  float get_media_direita();
  float get_media_mais_direita();
  void calibra();
  void inicializar_valores_brancos();
  void inicializar_preto_mais_esquerdo();
  void inicializar_preto_esquerdo();
  void inicializar_preto_direito();
  void inicializar_preto_mais_direito();
  void comparar_variaveis();
};
#endif
