#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "sensores.h"
#include "movimento.h"

class estrategia{

  movimento mover;
  sensores sensor;

public:
  estrategia();
  void configura();
  void run(); 
  
};



#endif
