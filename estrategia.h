#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "sensores.h"
#include "movimento.h"
#include "menu.h"

class estrategia{

  movimento mover;
  sensores sensor;
  menu  m;

public:
  estrategia();
  void configura();
  void run(); 
  inline void iniciar_menu(){m.executar(); sensor = m.get_sensores();}
  
};



#endif
