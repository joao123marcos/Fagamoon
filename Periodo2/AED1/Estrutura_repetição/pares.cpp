/*
algoritmo contaNumerosPares
Declare
  
       num,contaPares,somaPares:int;
       media:real;
Inicio
    
      contaPares<-0;
      somaPares<-0;
      media<-0;
      
      Escreva("Informe um número");
      leia(num);
      
      enquanto(num > 0) faça
      inicio   
        
        if(num mod 2 == 0) então
        inicio
        
          contaPares<-contaPares+1;
          somaPares<- somaPares + num;
        
        fim se;
        
        Escreva("Informe um número");
        leia(num);
      
      fim enquanto;
      media<- somaPares/contaPares;
      Escreva("A Média dos números pares é", media);
Fim
*/

#include <iostream>
using namespace std;
main()
{
   
   int num,contaPares=0,somaPares=0;
   float media=0;
 
   cout<<"Informe um número qualquer ou zero para finalizar:\n";
   cin>>num;
   
   while(num > 0)
   {
    if(num % 2 == 0)
    {   
     contaPares++;
     somaPares=somaPares + num; 
    }
   cout<<"Informe outro numero o zero para finalizar!\n";
   cin>>num;
   
   }
   if(somaPares > 0)
   {
    media=somaPares/contaPares;
    cout<<"A media dos pares é " <<media <<endl;
   }
   else cout<<"Você digitou zero! Programa finalizado"<<endl;
}
  

