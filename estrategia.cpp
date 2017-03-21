#include "estrategia.h"

estrategia::estrategia(){
  
}

void estrategia::configura(){
  sensor.configura();
  robo.configurar();
  mover.palito_esquerda();
}

void estrategia::siga_linha(){
  if(sensor.branco_branco_branco_branco()){
    mover.andar_frente();
  }else if(sensor.branco_preto_branco_branco()  ||  sensor.preto_branco_branco_branco()){
    mover.enrolar_esquerda();
  }else if(sensor.branco_branco_preto_branco()  ||  sensor.branco_branco_branco_preto()){
    mover.enrolar_direita();  
  }else{
    mover.andar_frente();
  }
}

void estrategia::passe_luci(char tipo){
  if(tipo == LUCI_ESQUERDA){
      
  }else if(tipo == LUCI_FRENTE){
      
  }else if(tipo == LUCI_DIREITA){
            
  }
}

void estrategia::passe_t(char tipo){
  if(tipo == T_ESQUERDA){
    
  }else if(tipo == T_DIREITA){
    
  }
}

void estrategia::passe_x(char tipo){
  if(tipo == X_ESQUERDA){
      
  }else if(tipo == X_FRENTE){
      
  }else if(tipo == X_DIREITA){
            
  }
}
  

void estrategia::run(){
  serial = Serial.read();
  

  if(serial == 's'){
    mover.palito_esquerda();
    //delay(1000);
  }else if(serial == 'a'){
    
    //delay(1000);  
  }
  
  if(serial == 's'){
    mover.palito_frente();
    //delay(1000);
  }else if(serial == 'a'){
    mover.palito_esquerda();
    //delay(1000);  
  }
  
  if(serial == 'l'){
    mover.levantar_cacamba();
  }else if(serial == 'k'){
    mover.deitar_cacamba();
  }
  
  serial = 0;
  
  mover.andar_frente();
  //delay(1000);
//  serial = 0;

/*estrategia principal

//se ha alguma coisa no serial, trate disso  
  if(serial != 0){
    if(serial == LUCI_ESQUERDA || serial == LUCI_FRENTE || serial == LUCI_DIREITA){
      passe_luci(serial); 
    }else if(serial == X_ESQUERDA || serial == X_FRENTE || serial == X_DIREITA){
      passe_x(serial);
    }else if(serial == T_ESQUERDA || serial == T_DIREITA){
      passe_t(serial);
    }
//depois de tratar o serial, apague
    serial = 0;
    
//se nao ha nada no serial, siga a linha normalmente
  }else{
    siga_linha();
  }
    
*/
}
