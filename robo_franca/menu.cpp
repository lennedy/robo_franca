#include "menu.h"

menu::menu(){
}

void menu::espaco(){
  Serial.println("********************************");
  Serial.println();
  Serial.println();
  Serial.println("********************************");
}

char menu::lerSerial(){
  while (Serial.available() <= 0);
  return (char)Serial.read();
}

void menu::print_escolha_de_sensores(){
  Serial.println("Qual sensor deseja?");
  Serial.println("q - todos os brancos");
  Serial.println("w - preto mais esquerdo / e - preto esquerdo / r - preto direito / t - preto mais direito");
  Serial.println("v - voltar");
  espaco();
}

void menu::executar(){
  while(1){
    Serial.println("Deseja calibrar ou iniciar robo?");
    char escolha = 'a';
    escolha = lerSerial();
    if(escolha == 'c'){
      //chamar funcao de escolha
      while(1){
        print_escolha_de_sensores();
        char escolha2 = 'n';
        escolha2 = lerSerial();
        if(escolha2 == 'q'){
          s.inicializar_valores_brancos();
          Serial.println("Calibrado todos os brancos!");
          espaco();
        } else if(escolha2 == 'w'){
          s.inicializar_preto_mais_esquerdo();
          Serial.println("Calibrado preto mais esquerdo!");
          espaco();
        } else if(escolha2 == 'e'){
          s.inicializar_preto_esquerdo();
          Serial.println("Calibrado preto esquerdo!");
          espaco();
        } else if(escolha2 == 'r'){
          s.inicializar_preto_direito();
          Serial.println("Calibrado preto direito!");
          espaco();
        } else if(escolha2 == 't'){
          s.inicializar_preto_mais_direito();
          Serial.println("Calibrado preto mais direito!");
          espaco();
        } else if(escolha2 == 'v'){
          break;
        } else {
          Serial.println("Nao existe essa opcao!!");
          espaco();
        }
      }
    } else if(escolha == 'i'){
      //executar cod
      break;
    } else{
      Serial.println("Nao existe essa opcao");
    }
  }
}
