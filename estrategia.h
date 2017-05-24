#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "sensores.h"
#include "movimento.h"
#include "menu.h"

class estrategia{
private:
  
  
  
  #define ESQUERDA 'z'
  #define X_FRENTE 's'
  #define DIREITA 'x'
  #define T_FRENTE 'd'
  
  
  int soltar_bola = 14;
  int pegar_bola = 2;
  int palito_lado = 100;
  int palito_frente = 100;
  int abrir_cancela = 100;
  int fechar_cancela = 100;
  int giro = 14;
  //int palito_frente = 100; 
  
  char serial = 'a';
  char encruzilhada[15] = {X_FRENTE,T_FRENTE,T_FRENTE,T_FRENTE,ESQUERDA,T_FRENTE,ESQUERDA,ESQUERDA,ESQUERDA,ESQUERDA,T_FRENTE,ESQUERDA,T_FRENTE,T_FRENTE,T_FRENTE};
  int contador_encruzilhada = 0;
  
  
  movimento mover;
  sensores sensor;
  menu  m;
  
  void alinhe_no_t();

public:
  //boolean especial = false;
  boolean comece();
  boolean eh_especial();
  estrategia();
  void siga_linha();
  //boolean procure_encruzilhada();
  void cuide_especial();

  void passe_curva(char tipo);  
  void controle_botao();
  
  void configura();
  void run(); 
  
  inline void iniciar_menu(){m.executar(); sensor = m.get_sensores();}  
};

#endif
