#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "sensores.h"
#include "movimento.h"
#include "menu.h"

class estrategia{
private:
  char serial = 0;
  
  movimento mover;
  sensores sensor;
  menu  m;

public:
  estrategia();
  void configura();
  void run(); 
  void calibrar();
  inline void iniciar_menu(){}//m.executar();}
  
};

#endif
