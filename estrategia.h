#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "sensores.h"
#include "movimento.h"

class estrategia{

  movimento movimentacao;
  sensores sensor;

public:
  estrategia();
  void run(); 
  
};



#endif
