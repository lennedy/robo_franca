#include "calibracao.h"


calibracao::calibracao(){
}

int calibracao::calcule_media(int valor_maior, int valor_menor){
   int media = (valor_maior + valor_menor)/2;
   return media;
}

int calibracao::get_encruzilhada(int posicao){
  return encruzilhada[posicao];

}
  
float calibracao::get_media_mais_esquerda(){
  return media_mais_esquerda;
}
float calibracao::get_media_esquerda(){
  return media_esquerda;
}
float calibracao::get_media_direita(){
  return media_direita;
}
float calibracao::get_media_mais_direita(){
  return media_mais_direita;
}

void calibracao::calibra(){
    configurar();
    media_mais_esquerda = calcule_media(maior_valor_mais_esquerdo, menor_valor_mais_esquerdo);
    media_esquerda = calcule_media(maior_valor_esquerdo, menor_valor_esquerdo);
    media_direita = calcule_media(maior_valor_direito, menor_valor_direito);
    media_mais_direita = calcule_media(maior_valor_mais_direito, menor_valor_mais_direito);
}
