#include "menu.h"

menu::menu(sensores& s){
  this->s=&s;
}

char menu::lerSerial(){
  while (Serial.available() <= 0);
  return (char)Serial.read();
}

void menu::print_escolha_de_sensores(){
  Serial.println("Qual sensor deseja?");
  Serial.println("1 - todos os brancos / 2 - todos os pretos");
  Serial.println("3 - branco esquerdo / 4 - branco direito / 5 - preto esquerdo / 6 - preto direito");
  Serial.println("3 - branco esquerdo / 4 - branco direito / 5 - preto esquerdo / 6 - preto direito");
}

void menu::executar(){
  while(1){
    Serial.println("Deseja calibrar ou iniciar robo?");
    char escolha = 'a';
    escolha = lerSerial();
    if(escolha == 'c'){
      //chamar funcao de escolha
      print_escolha_de_sensores();
      s->calibrar();
    } else if(escolha == 'i'){
      //executar cod
      break;
    } else{
      Serial.println("Nao existe essa opcao");
    }
  }
}
