#include "estrategia.h"

estrategia::estrategia(){
  
}

void estrategia::configura(){
  sensor.configura();
  robo.configurar();
   robo.acionarServoCacamba(30);
  /*mover.palito_frente();
  delay(1000);
  mover.levantar_cacamba();*/
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


void estrategia::siga_linha(){
  if(sensor.branco_branco_branco_branco()){
    mover.andar_frente();
  }else if(sensor.branco_preto_branco_branco()){
    mover.enrolar_esquerda();
    //robo.acionarMotores(0,50);
  }else if(sensor.branco_branco_preto_branco()){
    mover.enrolar_direita();
    //robo.acionarMotores(50,0); 
  }else{
    mover.andar_frente();
  }
}

//boolean estrategia::procure_encruzilhada(){
boolean estrategia::eh_especial(){
  if(contador_encruzilhada == soltar_bola || contador_encruzilhada == pegar_bola || contador_encruzilhada == palito_lado || contador_encruzilhada == palito_frente || 
  contador_encruzilhada == abrir_cancela || contador_encruzilhada == fechar_cancela || contador_encruzilhada == giro){
    return true;
  }else{
    return false;
  }
}


void estrategia::passe_curva(char tipo){
  
  if(tipo == ESQUERDA){
    mover.andar_frente();
    delay(120);
    mover.parar();
    delay(200);
    
    while(1){
      if(sensor.eh_preto_mais_esquerdo()){
        robo.acionarMotores(-50,50);    
      }else{
        break;
      }
      
    }/*
    while(1){
      if(sensor.eh_branco_mais_esquerdo()){
        robo.acionarMotores(-50,50);
      }else{
        break;
      }
      
    }
    */
    while(1){
      if(sensor.eh_preto_esquerdo()){
        robo.acionarMotores(-50,50);    
      }else{
        break;
      }
      
    }
    while(1){
      if(sensor.eh_branco_esquerdo()){
        robo.acionarMotores(-50,50);
      }else{
        break;
      }
      
    }
    while(1){
      if(sensor.eh_preto_esquerdo()){
        robo.acionarMotores(-50,50);    
      }else{
        break;
      }
      
    }
  }else if(tipo == DIREITA){
    mover.andar_frente();
    delay(120);
    mover.parar();
    delay(200);
    while(1){
      if(sensor.eh_preto_mais_direito()){
        robo.acionarMotores(50,-50);    
      }else{
        break;
      }
      
    }
    /*while(1){
      if(sensor.eh_branco_mais_direito()){
        robo.acionarMotores(50,-50);
      }else{
        break;
      }
      
    } */   
    while(1){
      if(sensor.eh_preto_direito()){
        robo.acionarMotores(50,-50);    
      }else{
        break;
      }
      
    }
    while(1){
      if(sensor.eh_branco_direito()){
        robo.acionarMotores(50,-50);
      }else{
        break;
      }
      
    }
    while(1){
      if(sensor.eh_preto_direito()){
        robo.acionarMotores(50,-50);    
      }else{
        break;
      }
      
    }
  }else if(tipo == T_FRENTE){
    mover.andar_frente();
    delay(300);    
  }else if(tipo == X_FRENTE){
    alinhe_no_t();
    mover.andar_frente();
    delay(400);
    
  }

}

boolean estrategia::comece(){
  char saia = 'S';
  char veja = 'e';
  char test = 't';
  while(saia != veja){
    veja = Serial.read();
    if(veja == test){
      //Serial.println("vou testar");
      mover.andar_frente();
      delay(1500);
      mover.enrolar_esquerda();
      delay(2000);
      mover.enrolar_direita();
      delay(2000);
      mover.parar();
      delay(1000);
      mover.palito_frente();
      delay(1000);
      mover.palito_esquerda();
      delay(1000);
      mover.palito_direita();
      delay(1000);
      mover.palito_frente();
      delay(1000);
      mover.deitar_cacamba();
      delay(1000);
      mover.levantar_cacamba();
      delay(1000);
    }
  }
} 

void estrategia::cuide_especial(){
  if(contador_encruzilhada == soltar_bola){ 
    mover.parar();
    delay(500);
    mover.deitar_cacamba();
    delay(500);
    mover.levantar_cacamba();
  }else if(contador_encruzilhada == pegar_bola){
    //mover.andar_frente();
    //delay(500);
    mover.parar();
    delay(500);
    
  }/*else if(contador_encruzilhada == palito_lado){
    mover.palito_direita();
  }else if(contador_encruzilhada == palito_frente){
    mover.palito_frente();  
  }*/
  if(contador_encruzilhada == giro){
    Serial.print("G");
  }
  
  if(contador_encruzilhada == abrir_cancela){
    Serial.print("x");
  }
  if(contador_encruzilhada == fechar_cancela){
    Serial.print("y");
  }
}

void estrategia::controle_botao(){
  if(sensor.fim_de_curso_apertado()){
    while(true){
      mover.parar();
    }
  }
}

void estrategia::run(){
//estrategia principal
  controle_botao();
  siga_linha();  
//se ha alguma coisa no serial, trate disso  
  //if(serial == 'a' ){
  if(sensor.eh_preto_mais_esquerdo() || sensor.eh_preto_mais_direito()){
    
    serial = encruzilhada[contador_encruzilhada];
    if(eh_especial()){
      cuide_especial(); 
    }
    if(serial == ESQUERDA || serial == DIREITA || serial == T_FRENTE  ||  X_FRENTE){
      passe_curva(serial);
    }
    
//depois de tratar o serial, apague
    contador_encruzilhada++;
    if(contador_encruzilhada == 15){
      contador_encruzilhada = 0;
    }
    
//se nao ha nada no serial, siga a linha normalmente
  }
  
  

  
   
}
