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
    
    media_mais_esquerda = calcule_media(maior_valor_mais_esquerdo, menor_valor_mais_esquerdo);
    media_esquerda = calcule_media(maior_valor_esquerdo, menor_valor_esquerdo);
    media_direita = calcule_media(maior_valor_direito, menor_valor_direito);
    media_mais_direita = calcule_media(maior_valor_mais_direito, menor_valor_mais_direito);
}

void calibracao::inicializar_valores(){
  int valor_sensor = robo.lerSensorDeLinha(sensor_direito);
  if(valor_sensor < menor_valor_direito){
    menor_valor_direito = valor_sensor;
  }
  
  int s_esquerdo = lerSensorDeLinha(sensor_esquerdo);
  if(s_esquerdo < menor_valor_esquerdo){
    menor_valor_esquerdo = s_esquerdo;
  }
  
  int s_direito = lerSensorDeLinha(sensor_direito);
  if(s_direito < menor_valor_direito){
    menor_valor_direito = s_direito;
  }
  
  int s_mais_direito = lerSensorDeLinha(sensor_mais_direito);
  if(s_mais_direito < menor_valor_mais_direito){
    menor_valor_mais_direito = s_mais_direito;
  }
  
  /*Serial.println("Valor sensor:");
  Serial.println(valor_sensor);
  Serial.println("Valor menor:");
  Serial.println(menor_valor_direito);*/
  
}

void calibracao::inicializar_preto_mais_esquerdo(){
  int mais_esquerdo_s = lerSensorDeLinha(sensor_mais_esquerdo);
  if(mais_esquerdo_s > maior_valor_mais_esquerdo){
    maior_valor_mais_esquerdo = mais_esquerdo_s;
  }
}

void calibracao::inicializar_preto_esquerdo(){
  int esquerdo_s = lerSensorDeLinha(sensor_esquerdo);
  if(esquerdo_s > maior_valor_esquerdo){
    maior_valor_esquerdo = esquerdo_s;
  }
}

void calibracao::inicializar_preto_direito(){
  int direito_s = lerSensorDeLinha(sensor_direito);
  if(direito_s > maior_valor_direito){
    maior_valor_direito = direito_s;
  }
}

void calibracao::inicializar_preto_mais_direito(){
  int mais_direito_s = lerSensorDeLinha(sensor_mais_direito);
  if(mais_direito_s > maior_valor_mais_direito){
    maior_valor_mais_direito = mais_direito_s;
  }
}
