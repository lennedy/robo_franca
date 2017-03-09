#include "sensores.h"

#define BRANCO 1
#define PRETO 2



sensores::sensores(){
  
}

void sensores::configura(){
  calibra();
}

int sensores::determine_cor(int sensor, float media){
  int luz = lerSensorDeLinha(sensor);
  int cor = 0;
  
  if(preto_maior_branco){
    if(luz > media){
      cor = PRETO;
    }else{
      cor = BRANCO;
    }
  
  }else{
    if(luz > media){
      cor = BRANCO;
    }else{
      cor = PRETO;
    }
  }
  
  return cor;

}
//funçoes que definem a a viso geral dos sensores de refletancia

//1 de 12
boolean sensores::branco_branco_branco_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda) == BRANCO &&
    determine_cor(sensor_direito, media_direita) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == BRANCO
  );

}

//2 de 12
boolean sensores::branco_preto_branco_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda) == PRETO &&
    determine_cor(sensor_direito, media_direita) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == BRANCO
  );

}

//3 de 12
boolean sensores::branco_branco_preto_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda) == BRANCO &&
    determine_cor(sensor_direito, media_direita) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == BRANCO
  );

}

//4 de 12
boolean sensores::preto_branco_branco_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == PRETO &&
    determine_cor(sensor_esquerdo, media_esquerda) == BRANCO &&
    determine_cor(sensor_direito, media_direita) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == BRANCO
  );

}

//5 de 12
boolean sensores::branco_branco_branco_preto(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda) == BRANCO &&
    determine_cor(sensor_direito, media_direita) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == PRETO
  );

}

//6 de 12 
boolean sensores::branco_preto_preto_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda) == PRETO &&
    determine_cor(sensor_direito, media_direita) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == BRANCO
  
  );
}
//7 de 12
boolean sensores::preto_branco_branco_preto(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == PRETO &&
    determine_cor(sensor_esquerdo, media_esquerda) == BRANCO &&
    determine_cor(sensor_direito, media_direita) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == PRETO
  
  );
}
//8 de 12  
boolean sensores::preto_branco_preto_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == PRETO &&
    determine_cor(sensor_esquerdo, media_esquerda) == BRANCO &&
    determine_cor(sensor_direito, media_direita) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == BRANCO
  
  );
}
//9 de 12
boolean sensores::branco_preto_branco_preto(){
  return (    
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == PRETO &&
    determine_cor(sensor_esquerdo, media_esquerda) == BRANCO &&
    determine_cor(sensor_direito, media_direita) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == BRANCO
  );

}
//10 de 12
boolean sensores::preto_preto_preto_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == PRETO &&
    determine_cor(sensor_esquerdo, media_esquerda) == PRETO &&
    determine_cor(sensor_direito, media_direita) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == BRANCO
  );
}
//11 de 12
boolean sensores::branco_preto_preto_preto(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda) == PRETO &&
    determine_cor(sensor_direito, media_direita) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == PRETO
  );
}
//12 de 12
boolean sensores::preto_preto_preto_preto(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda) == PRETO  &&
    determine_cor(sensor_esquerdo, media_esquerda) == PRETO &&
    determine_cor(sensor_direito, media_direita) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita) == PRETO
  );
}

boolean sensores::rfid_presente(){
  return lerTag();
}
