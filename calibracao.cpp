#include "calibracao.h"


calibracao::calibracao(){
}

int calibracao::calcule_media(int valor_maior, int valor_menor){
   int media = (valor_maior + valor_menor)/3;
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
    
    media_mais_esquerda = calcule_media(maior_valor_mais_esquerdo, menor_valor_mais_esquerdo);
    media_esquerda = calcule_media(maior_valor_esquerdo, menor_valor_esquerdo);
    media_direita = calcule_media(maior_valor_direito, menor_valor_direito);
    media_mais_direita = calcule_media(maior_valor_mais_direito, menor_valor_mais_direito);
}

void calibracao::inicializar_valores_brancos(){
  int mais_esquerdo_s = robo.lerSensorDeLinha(sensor_mais_esquerdo);
  if(mais_esquerdo_s > maior_valor_mais_esquerdo){
    maior_valor_mais_esquerdo = mais_esquerdo_s;
  }

  int esquerdo_s = robo.lerSensorDeLinha(sensor_esquerdo);
  if(esquerdo_s > maior_valor_esquerdo){
    maior_valor_esquerdo = esquerdo_s;
  }

  int direito_s = robo.lerSensorDeLinha(sensor_direito);
  if(direito_s > maior_valor_direito){
    maior_valor_direito = direito_s;
  }
  
  int mais_direito_s = robo.lerSensorDeLinha(sensor_mais_direito);
  if(mais_direito_s > maior_valor_mais_direito){
    maior_valor_mais_direito = mais_direito_s;
  }
  
}

void calibracao::inicializar_preto_mais_esquerdo(){
  int s_mais_esquerdo = robo.lerSensorDeLinha(sensor_direito);
  if(s_mais_esquerdo < menor_valor_direito){
    menor_valor_direito = s_mais_esquerdo;
  }
}

void calibracao::inicializar_preto_esquerdo(){
  int s_esquerdo = robo.lerSensorDeLinha(sensor_esquerdo);
  if(s_esquerdo < menor_valor_esquerdo){
    menor_valor_esquerdo = s_esquerdo;
  }
}

void calibracao::inicializar_preto_direito(){
  int s_direito = robo.lerSensorDeLinha(sensor_direito);
  if(s_direito < menor_valor_direito){
    menor_valor_direito = s_direito;
  }
}

void calibracao::inicializar_preto_mais_direito(){
  int s_mais_direito = robo.lerSensorDeLinha(sensor_mais_direito);
  if(s_mais_direito < menor_valor_mais_direito){
    menor_valor_mais_direito = s_mais_direito;
  }
}

void calibracao::comparar_variaveis(){
  if(menor_valor_mais_esquerdo > maior_valor_mais_esquerdo){
    preto_maior_branco_mais_esquerdo = true;
  } else {
    preto_maior_branco_mais_esquerdo = false;
  }

  if(menor_valor_esquerdo > maior_valor_esquerdo){
    preto_maior_branco_esquerdo = true;
  } else {
    preto_maior_branco_esquerdo = false;
  }

  if(menor_valor_direito > maior_valor_direito){
    preto_maior_branco_direito = true;
  } else {
    preto_maior_branco_direito = false;
  }

  if(menor_valor_mais_direito > maior_valor_mais_direito){
    preto_maior_branco_mais_direito = true;
  } else {
    preto_maior_branco_mais_direito = false;
  }
  
}

int calibracao::get_menor_valor_mais_esquerdo(){
  return menor_valor_mais_esquerdo;
}
int calibracao::get_maior_valor_mais_esquerdo(){
  return maior_valor_mais_esquerdo;
}

int calibracao::get_menor_valor_esquerdo(){
  return menor_valor_esquerdo;
}
int calibracao::get_maior_valor_esquerdo(){
  return maior_valor_esquerdo;
}

int calibracao::get_menor_valor_direito(){
  return menor_valor_direito;
}
int calibracao::get_maior_valor_direito(){
  return maior_valor_direito;
}

int calibracao::get_menor_valor_mais_direito(){
  return menor_valor_mais_direito;
}
int calibracao::get_maior_valor_mais_direito(){
  return maior_valor_mais_direito;
}
