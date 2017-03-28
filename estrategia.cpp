#include "estrategia.h"

estrategia::estrategia(){
  
}

void estrategia::alinhe_no_t(){
  if(!sensor.eh_preto_mais_esquerdo()){
    while(!sensor.eh_preto_mais_esquerdo()){
      robo.acionarMotores(50,0);
    }
  }
  if(!sensor.eh_preto_mais_direito()){
    while(!sensor.eh_preto_mais_direito()){
      robo.acionarMotores(0,50);
    }
  }
  
}

void estrategia::configura(){
  sensor.configura();
  robo.configurar();
  //mover.palito_esquerda();
  //mover.levantar_cacamba();
}

void estrategia::siga_linha(){
  if(sensor.branco_branco_branco_branco()){
    mover.andar_frente();
  }else if(sensor.branco_preto_branco_branco() ||  
           sensor.preto_branco_branco_branco() ||
           sensor.preto_preto_branco_branco() || 
           sensor.preto_preto_preto_branco() ||
           
           sensor.preto_preto_branco_preto()||
           sensor.branco_preto_branco_preto()
           ){
    mover.enrolar_esquerda();
  }else if(sensor.branco_branco_preto_branco() ||
           sensor.branco_branco_branco_preto() ||
           sensor.branco_branco_preto_preto() || 
           sensor.branco_preto_preto_preto() ||
           sensor.preto_branco_preto_preto() ||
           sensor.preto_branco_preto_branco()
           ){
    mover.enrolar_direita();  
  }else{
    mover.andar_frente();
  }
}

void estrategia::procure_encruzilhada(){
  while(true){
    if(sensor.branco_branco_branco_branco()){
      mover.andar_frente();
    }else if(sensor.branco_preto_branco_branco()){
      mover.enrolar_esquerda();
    }else if(sensor.branco_branco_preto_branco()){
      mover.enrolar_direita();  
    }else{
      break;
    }
  
  } 


}

void estrategia::passe_luci(char tipo){
  procure_encruzilhada(); 
  Serial.println("encontrei encruzilhada");
  boolean linha = false;
  if(tipo == LUCI_ESQUERDA){
    while(!linha){
      if(sensor.eh_preto_esquerdo() || sensor.eh_preto_mais_esquerdo()){
        mover.enrolar_esquerda();
      }else{
        mover.andar_frente();
      }
      if(sensor.eh_preto_direito()){
        linha = true;
      }
    }
    while(linha){
      if(sensor.eh_preto_esquerdo() || sensor.eh_preto_mais_esquerdo()){
        mover.enrolar_esquerda();
      }else{
        mover.andar_frente();
      }
      
      if(sensor.eh_branco_direito()){
        linha = false;
      }
    }
    
  }else if(tipo == LUCI_DIREITA){
    while(!linha){
      if(sensor.eh_preto_direito() || sensor.eh_preto_mais_direito()){
        mover.enrolar_direita();
      }else{
        mover.andar_frente();
      }
      if(sensor.eh_preto_esquerdo()){
        linha = true;
      }
    }
    while(linha){
      if(sensor.eh_preto_direito() || sensor.eh_preto_mais_direito()){
        mover.enrolar_direita();
      }else{
        mover.andar_frente();
      }
     
      if(sensor.eh_branco_esquerdo()){
        linha = false;
      }
    }
       
  }else if(tipo == LUCI_FRENTE){
    mover.andar_frente();
    delay(600);
     
  }
}

void estrategia::passe_t(char tipo){
  
  procure_encruzilhada(); 
  Serial.println("encontrei encruzilhada");
  boolean linha = false;
  if(tipo == T_ESQUERDA){
      while(!linha){
        if(sensor.eh_preto_esquerdo() || sensor.eh_preto_mais_esquerdo()){
          mover.enrolar_esquerda();
        }else{
          mover.andar_frente();
        }
        if(sensor.eh_preto_direito()){
          linha = true;
        }
      }
      while(linha){
        if(sensor.eh_preto_esquerdo() || sensor.eh_preto_mais_esquerdo()){
          mover.enrolar_esquerda();
        }else{
          mover.andar_frente();
        }
      
        if(sensor.eh_branco_direito()){
          linha = false;
        }
      }
  }else if(tipo == T_DIREITA){
      while(!linha){
        if(sensor.eh_preto_direito() || sensor.eh_preto_mais_direito()){
          mover.enrolar_direita();
        }else{
          mover.andar_frente();
        }
        if(sensor.eh_preto_esquerdo()){
          linha = true;
        }
      }
      while(linha){
        if(sensor.eh_preto_direito() || sensor.eh_preto_mais_direito()){
          mover.enrolar_direita();
        }else{
          mover.andar_frente();
        }
     
        if(sensor.eh_branco_esquerdo()){
          linha = false;
        }
      }
  }
}

void estrategia::passe_x(char tipo){
  procure_encruzilhada(); 
  Serial.println("encontrei encruzilhada");
  boolean linha = false;
  if(tipo == X_ESQUERDA){
      while(!linha){
        if(sensor.eh_preto_esquerdo() || sensor.eh_preto_mais_esquerdo()){
          mover.enrolar_esquerda();
        }else{
          mover.andar_frente();
        }
        if(sensor.eh_preto_direito()){
          linha = true;
        }
      }
      while(linha){
        if(sensor.eh_preto_esquerdo() || sensor.eh_preto_mais_esquerdo()){
          mover.enrolar_esquerda();
        }else{
          mover.andar_frente();
        }
      
        if(!sensor.eh_preto_direito()){
          linha = false;
        }
      }
      while(!linha){
        if(sensor.eh_preto_esquerdo() || sensor.eh_preto_mais_esquerdo()){
          mover.enrolar_esquerda();
        }else{
          mover.andar_frente();
        }
        if(sensor.eh_preto_direito()){
          linha = true;
        }
      }
      while(linha){
        if(sensor.eh_preto_esquerdo() || sensor.eh_preto_mais_esquerdo()){
          mover.enrolar_esquerda();
        }else{
          mover.andar_frente();
        }
      
        if(!sensor.eh_preto_direito()){
          linha = false;
        }
      }     
  }else if(tipo == X_DIREITA){
    while(!linha){
      if(sensor.eh_preto_direito() || sensor.eh_preto_mais_direito()){
        mover.enrolar_direita();
      }else{
        mover.andar_frente();
      }
      if(sensor.eh_preto_esquerdo()){
        linha = true;
      }
    }
    while(linha){
      if(sensor.eh_preto_direito() || sensor.eh_preto_mais_direito()){
        mover.enrolar_direita();
      }else{
        mover.andar_frente();
      }
     
      if(sensor.eh_branco_esquerdo()){
        linha = false;
      }
    }
       while(!linha){
      if(sensor.eh_preto_direito() || sensor.eh_preto_mais_direito()){
        mover.enrolar_direita();
      }else{
        mover.andar_frente();
      }
      if(sensor.eh_preto_esquerdo()){
        linha = true;
      }
    }
    while(linha){
      if(sensor.eh_preto_direito() || sensor.eh_preto_mais_direito()){
        mover.enrolar_direita();
      }else{
        mover.andar_frente();
      }
     
      if(sensor.eh_branco_esquerdo()){
        linha = false;
      }
    }
             
  }else if(tipo == X_FRENTE){
    alinhe_no_t();
    mover.andar_frente();
    delay(600);
     
  }
}

boolean estrategia::comece(){
  char saia = 's';
  char veja = 't';
  while(saia != veja){
    veja = Serial.read();
    
  }
} 

void estrategia::run(){
  serial = Serial.read();
//estrategia principal
  if(sensor.fim_de_curso_apertado()){
    while(1){
      mover.parar();
      if(sensor.fim_de_curso_apertado()){
        break;
      }
    }
  }
  
//se ha alguma coisa no serial, trate disso  
  if(serial == 'a'){
    serial = encruzilhada[contador_encruzilhada];
    Serial.print("Recebi mensagem, e estou na encruzilhada: ");
    Serial.println(contador_encruzilhada);
    if(serial == LUCI_ESQUERDA || serial == LUCI_FRENTE || serial == LUCI_DIREITA){
      passe_luci(serial); 
    }else if(serial == X_ESQUERDA || serial == X_FRENTE || serial == X_DIREITA){
      passe_x(serial);
    }else if(serial == T_ESQUERDA || serial == T_DIREITA){
      passe_t(serial);
    }
    
//depois de tratar o serial, apague
    contador_encruzilhada++;
    serial = 'b';    
//se nao ha nada no serial, siga a linha normalmente
  }
  
  
  siga_linha();
  
   
}
