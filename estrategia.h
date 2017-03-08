#include "sensores.h"
#include "movimento.h"

#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

//lennedy

class estrategia{

  movimento movimentacao;
  sensores sensor;

public:
  estrategia();
  void run(); 
  
};



#endif
