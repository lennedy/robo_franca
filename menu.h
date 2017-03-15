#ifndef MENU_H
#define MENU_H

#include "sensores.h"
#include <Arduino.h>

class menu{
 private:
   sensores* s;
 public:
  menu(sensores& s);
  void executar();
  char lerSerial();
  void print_escolha_de_sensores();

};

#endif
