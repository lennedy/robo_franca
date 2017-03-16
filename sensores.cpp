#include "sensores.h"

#define BRANCO 1
#define PRETO 2



sensores::sensores(){
  
}

void sensores::configura(){
  calibra();
}

int sensores::determine_cor(int sensor, float media, boolean preto_maior_branco){
  int luz = robo.lerSensorDeLinha(sensor);
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
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == BRANCO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == BRANCO
  );

}

//2 de 12
boolean sensores::branco_preto_branco_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == PRETO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == BRANCO
  );

}

//3 de 12
boolean sensores::branco_branco_preto_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == BRANCO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == BRANCO
  );

}

//4 de 12
boolean sensores::preto_branco_branco_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == PRETO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == BRANCO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == BRANCO
  );

}

//5 de 12
boolean sensores::branco_branco_branco_preto(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == BRANCO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == PRETO
  );

}

//6 de 12 
boolean sensores::branco_preto_preto_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == PRETO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == BRANCO
  
  );
}
//7 de 12
boolean sensores::preto_branco_branco_preto(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == PRETO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == BRANCO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == PRETO
  
  );
}
//8 de 12  
boolean sensores::preto_branco_preto_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == PRETO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == BRANCO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == BRANCO
  
  );
}
//9 de 12
boolean sensores::branco_preto_branco_preto(){
  return (    
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == PRETO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == BRANCO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == BRANCO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == BRANCO
  );

}
//10 de 12
boolean sensores::preto_preto_preto_branco(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == PRETO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == PRETO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == BRANCO
  );
}
//11 de 12
boolean sensores::branco_preto_preto_preto(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == BRANCO &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == PRETO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == PRETO
  );
}
//12 de 12
boolean sensores::preto_preto_preto_preto(){
  return (
    determine_cor(sensor_mais_esquerdo,media_mais_esquerda,preto_maior_branco_mais_esquerdo) == PRETO  &&
    determine_cor(sensor_esquerdo, media_esquerda,preto_maior_branco_esquerdo) == PRETO &&
    determine_cor(sensor_direito, media_direita,preto_maior_branco_direito) == PRETO &&
    determine_cor(sensor_mais_direito, media_mais_direita,preto_maior_branco_mais_direito) == PRETO
  );
}

boolean sensores::rfid_presente(){
  return robo.lerTag();
}
