/*
Algoritmo PEsquisa_dados_habitantes
Declare
    
      salario<-0,media_salario<-0,maior_salario<-0, soma_salario<-0,soma_filhos<-0:real;
      qtd_filhos<-0,media_filhos<-0,percentual<-0,cont<-0,soma_p<-0:inteiro;

     
      Escreva("Digite seu salario ou informe um valor negario para finalizar");
      leia(salario);
      Escreva("Informe a quantidade de filhos");
      leia(qtd_filhos);
      maior_salario<-salario;
  
      enquanto(salario > 0) faça
      Inicio
         cont<-cont+1;
         soma_salario=soma_salario + salario;
         soma_filhos=soma_filhos + qtd_filhos;
         
         se(salario > maior_salario)então
         Inicio  
              maior_salario<-salario;
         
         Fim se;
         
         Se(salario <= 1000)então
         Inicio
               soma_p<-soma_p+1;
               soma_p<- soma_p/100;
               percentual<- cont - (cont * soma_p); 
         Fim se;
          
         Escreva("Por favor, informe seu salario ou um valor negativo para finalizar");
         leia(salario);
         Escreva("Por favor, informe a quantidade de filhos")
         leia(qtd_filhos);
      
      Fim equanto
      
      Se(soma_salario >0 e soma_filhos > 0)então
      Inicio  
            media_salario<- soma_salario / cont;
            media_filhos<- soma_filhos /cont;
      
      Fim se;
      
      else
        escreva("Como você digitou um valor negativo o programa sera encerrado!");
      
      Escreva("O maior salario e",maior_salario,", a media de filhos e", media_filhos ,", a media de salario e", media_salario,", e o percentual de pessoas que ganham até 1000 reais e", percentual);

Fim
*/
#include <iostream>
using namespace std;
main()
{
  
     float salario=0,media_salario=0,maior_salario=0, soma_salario=0,soma_filhos=0;
     int qtd_filhos=0,media_filhos=0,percentual=0,cont=0,soma_p=0;
     
     cout<<"Digite seu salario ou informe um valor negario para finalizar\n";
     cin>>salario;
     maior_salario=salario;
     
     while(salario > 0)
     {
         cout<<"Por favor, informe a quantidade de filhos\n";
         cin>>qtd_filhos;
         
         cont++;
         soma_salario=soma_salario + salario;
         soma_filhos=soma_filhos + qtd_filhos;
         
         if(salario > maior_salario)
            maior_salario=salario;
            
         if(salario <= 1000)
            soma_p++;
          
         cout<<"Por favor, informe seu salario ou um valor negativo para finalizar\n";
         cin>>salario;
         
     }
     if(soma_salario >0 && soma_filhos > 0)
     {  
      media_salario=soma_salario / cont;
      media_filhos= soma_filhos /cont;
      percentual=(soma_p/cont)*100;
      cout<<"O maior salario e "<< maior_salario <<" e a media de filhos e "<< media_filhos <<" e a media de salario e "<< media_salario <<" e o percentual de pessoas que ganham até 1000 reais e "<< percentual<<" %"<<endl;

     }
     else cout<<"Programa finalizado! Você digitou zero"<<endl;
     
}

      

