#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "sensores.h"
#include "movimento.h"
#include "menu.h"

class estrategia{
private:
  char serial =  0;
  
  #define LUCI_ESQUERDA 'j'
  #define LUCI_FRENTE 'i'
  #define LUCI_DIREITA 'l'
  #define T_ESQUERDA 'r'
  #define T_DIREITA 'y'
  #define X_ESQUERDA 'z'
  #define X_FRENTE 's'
  #define X_DIREITA 'x'
  
  movimento mover;
  sensores sensor;
  menu  m;

public:
  estrategia();
  void siga_linha();
  
  void passe_luci(char tipo);
  void passe_t(char tipo);
  void passe_x(char tipo);
  
  void configura();
  void run(); 
  inline void iniciar_menu(){m.executar(); sensor = m.get_sensores();}
  
};

#endif
