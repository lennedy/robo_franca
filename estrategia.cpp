#include "estrategia.h"

estrategia::estrategia():m(sensor){
  
}

void estrategia::configura(){
  sensor.configura();
}
void estrategia::run(){
  if(sensor.rfid_presente()){
    mover.parar();
  }else if(sensor.branco_branco_branco_branco()){
    mover.andar_frente();
  }else if(sensor.branco_preto_branco_branco()  ||  sensor.preto_branco_branco_branco()){
    mover.enrolar_esquerda();
  }else if(sensor.branco_branco_preto_branco()  ||  sensor.branco_branco_branco_preto()){
    mover.enrolar_direita();  
  }else{
    mover.andar_frente();
  }
  

}

void estrategia::calibrar(){
  sensor.calibrar();  
}
