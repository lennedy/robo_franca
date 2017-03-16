#include "estrategia.h"

estrategia::estrategia(){
  
}

void estrategia::configura(){
  sensor.configura();
  robo.configurar();
}
void estrategia::run(){
  mover.palito_frente();
  delay(1000);
  mover.palito_esquerda();
  delay(1000);
  /*
  serial = Serial.read();
  if(serial != 0){
    mover.passar_encruzilhada(serial);
    if(serial == 'u'){
      robo.acionarServo(85);
      
    }else if(serial == 'y'){
      robo.acionarServo(170);
      
    }else if(serial =='i'){
      robo.acionarServo(0);
      
    }
    
    serial = 0;
    
  }
  */
  /*else{
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
  } */
    

}
