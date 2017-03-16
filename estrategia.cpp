#include "estrategia.h"

estrategia::estrategia(){//:m(sensor){
  
}

void estrategia::configura(){
  ///sensor.configura();
  mover.confi();
}
void estrategia::run(){
  serial = Serial.read();/*
  if(serial != 0){
    mover.passar_encruzilhada(serial);
    if(serial == 'u'){*/
      mover.palito_frente();
      delay(1000);
      mover.palito_esquerda();
      delay(1000);
      
      /*
    }else if(serial == 'y'){
      mover.palito_esquerda();
      
    }else if(serial =='i'){
      mover.palito_direita();
      
    }
    
    serial = 0;
   */ 
  //}else{
    /*if(sensor.rfid_presente()){
      mover.parar();
    }else if(sensor.branco_branco_branco_branco()){
      mover.andar_frente();
    }else if(sensor.branco_preto_branco_branco()  ||  sensor.preto_branco_branco_branco()){
      mover.enrolar_esquerda();
    }else if(sensor.branco_branco_preto_branco()  ||  sensor.branco_branco_branco_preto()){
      mover.enrolar_direita();  
    }else{
      mover.andar_frente();
    }*/
  //} 
  
}

void estrategia::calibrar(){
 // sensor.calibrar();  
}
