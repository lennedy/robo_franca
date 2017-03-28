#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "sensores.h"
#include "movimento.h"
#include "menu.h"

class estrategia{
private:
  #define LUCI_ESQUERDA 'j'
  #define LUCI_FRENTE 'i'
  #define LUCI_DIREITA 'l'
  #define T_ESQUERDA 'r'
  #define T_DIREITA 'y'
  #define X_ESQUERDA 'z'
  #define X_FRENTE 's'
  #define X_DIREITA 'x'
  
  char serial = 'b';
  char encruzilhada[9] = {T_ESQUERDA,T_DIREITA,X_FRENTE,X_DIREITA,LUCI_FRENTE,X_DIREITA,X_FRENTE,LUCI_FRENTE,T_ESQUERDA};
  int contador_encruzilhada = 0;
  
  
  movimento mover;
  sensores sensor;
  menu  m;
  
  void alinhe_no_t();

public:

  boolean comece();
  
  estrategia();
  void siga_linha();
  void procure_encruzilhada();
  
  void passe_luci(char tipo);
  void passe_t(char tipo);
  void passe_x(char tipo);
  
  void configura();
  void run(); 
  inline void iniciar_menu(){m.executar(); sensor = m.get_sensores();}
  
};

#endif
