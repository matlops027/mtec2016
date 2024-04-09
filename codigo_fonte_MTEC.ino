/*#include "HX711.h"

#define DOUT  A1
#define CLK  A0

HX711 balanca(DOUT, CLK);*/

int mot = 13; 
int horrel = 0;
int minrel = 0;
int segrel = 0;
int alh1 = 0;
int alm1 = 1;
int arrumador = 0;
int arrumador2 = 0;
/*int peso = balanca.read();*/


void setup() {
    pinMode(mot, OUTPUT);
 
}



void loop() {
  
  for(segrel;segrel<=60;segrel++){
      if(segrel == 60){
      minrel=minrel+1;
      arrumador = 0;
      segrel=0;
      }
    if(minrel == 60){
     horrel=horrel+1;
     minrel=0;
   
    }
    
    if(horrel == 24){
        horrel = 0;
      }
   /*if((alm1==minrel)&&(alh1==horrel)&&(arrumador==0);/*&&(analogRead(peso/1000)>100)){
    for(segrel;segrel<=60;segrel++){
      
    if(segrel == 60){
      minrel=minrel+1;
      arrumador = 0;
      segrel=0;
      }
    if(minrel == 60){
     horrel=horrel+1;
     minrel=0;
   
    }
    
    if(horrel == 24){
        horrel = 0;
      }
   if ((analogRead(peso/1000)<100)){
      digitalWrite(mot,HIGH);
      delay(1000);
      
      segrel=segrel+1;
    if(segrel == 60){
      minrel=minrel+1;
      arrumador = 0;
      segrel=0;
      }
    if(minrel == 60){
     horrel=horrel+1;
     minrel=0;
   
    }
    
    if(horrel == 24){
        horrel = 0;
      }
      
   
      digitalWrite(mot,LOW);
      delay(1000);
      
       segrel=segrel+1;
    if(segrel == 60){
      minrel=minrel+1;
      arrumador = 0;
      segrel=0;
      }
    if(minrel == 60){
     horrel=horrel+1;
     minrel=0;
   
    }
    
    if(horrel == 24){
        horrel = 0;
      }

  
      
      digitalWrite(mot,HIGH);
      delay(1000);
      
       segrel=segrel+1;
    if(segrel == 60){
      minrel=minrel+1;
      arrumador = 0;
      segrel=0;
      }
    if(minrel == 60){
     horrel=horrel+1;
     minrel=0;
   
    }
    
    if(horrel == 24){
        horrel = 0;
      }

      digitalWrite(mot,LOW);
  arrumador=1;      
  arrumador2 = segrel;
    segrel=61;
   }
    delay(1000);
    
     }
    segrel=arrumador2+1;
     if(segrel == 60){
      minrel=minrel+1;
      arrumador = 0;
      segrel=0;
      }
    if(minrel == 60){
     horrel=horrel+1;
     minrel=0;
   
    }
    
    if(horrel == 24){
        horrel = 0;
      }

   }
    */if((alm1==minrel)&&(alh1==horrel)&&(arrumador==0)/*&&(analogRead(peso/1000)<100)*/){
    
      digitalWrite(mot,HIGH);
      delay(130);
      
      
      
   
      digitalWrite(mot,LOW);
      delay(1000);
      
       
      

  
      
      digitalWrite(mot,HIGH);
      delay(130);
      
      

      digitalWrite(mot,LOW);
      delay(740);
      segrel=segrel+2;
    
     arrumador = 1;     
      
      }
    
    delay(1000);
  
  
  }
  

}












  
   








