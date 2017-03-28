#include "sensores.h"



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
    eh_branco_mais_esquerdo() &&
    eh_branco_esquerdo() &&
    eh_branco_direito() &&
    eh_branco_mais_direito()
  );

}

//2 de 12
boolean sensores::branco_preto_branco_branco(){
  return (
    eh_branco_mais_esquerdo() &&
    eh_preto_esquerdo() &&
    eh_branco_direito() &&
    eh_branco_mais_direito()
  );

}

//3 de 12
boolean sensores::branco_branco_preto_branco(){
  return (
    eh_branco_mais_esquerdo() &&
    eh_branco_esquerdo() &&
    eh_preto_direito() &&
    eh_branco_mais_direito()
  );
}

//4 de 12
boolean sensores::preto_branco_branco_branco(){
  return (
    eh_preto_mais_esquerdo() &&
    eh_branco_esquerdo() &&
    eh_branco_direito() &&
    eh_branco_mais_direito()
  );
}

//5 de 12
boolean sensores::branco_branco_branco_preto(){
  return (
    eh_branco_mais_esquerdo() &&
    eh_branco_esquerdo() &&
    eh_branco_direito() &&
    eh_preto_mais_direito()
  );
}

//6 de 12 
boolean sensores::branco_preto_preto_branco(){
  return (
    eh_branco_mais_esquerdo() &&
    eh_preto_esquerdo() &&
    eh_preto_direito() &&
    eh_branco_mais_direito()
  );
}
//7 de 12
boolean sensores::preto_branco_branco_preto(){
  return (
    eh_preto_mais_esquerdo() &&
    eh_branco_esquerdo() &&
    eh_branco_direito() &&
    eh_preto_mais_direito()
  );
}
//8 de 12  
boolean sensores::preto_branco_preto_branco(){
  return (
    eh_preto_mais_esquerdo() &&
    eh_branco_esquerdo() &&
    eh_preto_direito() &&
    eh_branco_mais_direito()
  );
}
//9 de 12
boolean sensores::branco_preto_branco_preto(){
  return (
    eh_branco_mais_esquerdo() &&
    eh_preto_esquerdo() &&
    eh_branco_direito() &&
    eh_preto_mais_direito()
  );

}
//10 de 12
boolean sensores::preto_preto_preto_branco(){
  return (
    eh_preto_mais_esquerdo() &&
    eh_preto_esquerdo() &&
    eh_preto_direito() &&
    eh_branco_mais_direito()
  );
}
//11 de 12
boolean sensores::branco_preto_preto_preto(){
  return (
    eh_branco_mais_esquerdo() &&
    eh_preto_esquerdo() &&
    eh_preto_direito() &&
    eh_preto_mais_direito()
  );
}
//12 de 12
boolean sensores::preto_preto_preto_preto(){
  return (
    eh_preto_mais_esquerdo() &&
    eh_preto_esquerdo() &&
    eh_preto_direito() &&
    eh_preto_mais_direito()
  );
}

boolean sensores::branco_branco_preto_preto(){
  return (
    eh_branco_mais_esquerdo() &&
    eh_branco_esquerdo() &&
    eh_preto_direito() &&
    eh_preto_mais_direito()
  );
}

boolean sensores::preto_preto_branco_branco(){
  return (
    eh_preto_mais_esquerdo() &&
    eh_preto_esquerdo() &&
    eh_branco_direito() &&
    eh_branco_mais_direito()
  );
}

boolean sensores::preto_branco_preto_preto(){
  return (
    eh_preto_mais_esquerdo() &&
    eh_branco_esquerdo() &&
    eh_preto_direito() &&
    eh_preto_mais_direito()
  );
}


boolean sensores::preto_preto_branco_preto(){
  return (
    eh_preto_mais_esquerdo() &&
    eh_preto_esquerdo() &&
    eh_branco_direito() &&
    eh_preto_mais_direito()
  );
}

boolean sensores::fim_de_curso_apertado(){
  return !robo.lerSensorFimDeCurso();
}

boolean sensores::rfid_presente(){
  return robo.lerTag();
}

void sensores::calibrar(){
  inicializar_valores_brancos();
  inicializar_valores_brancos();
  inicializar_preto_mais_esquerdo();
  inicializar_preto_esquerdo();
  inicializar_preto_direito();
  inicializar_preto_mais_direito();
}
