/*
Algoritmo adega
Declare
      
       tipoVinho:caracter;
       porcentagemTinto<-0,porcentagemBranco<-0,procentagemRose<-0,preco<-0,soma_vinhos<-0,medida<-0:real;
       i<-0,tinto<-0,branco<-0,rose<-0:inteiro;

Inicio
   
     Escreva("Por favor informe o tipo do vinho:T para Tinto; B para Branco; R para Rose ou F para finalizar o programa");
     leia(tipoVinho);
     enquanto(tipoVinho == 'T' || tipoVinho == 'B' || tipoVinho == 'R')
     Inicio
      Escreva("Qual é o preço desse vinho?");
      leia(preco);
      soma_vinhos<-soma_vinhos+preco;
      i<-i+1;
     
      se(tipoVinho == 'T')então
         tinto<tinto+1;
         
      se(tipoVinho == 'B')então
         branco<-branco+1;
         
      se(tipoVinho == 'R')então
         rose<-rose+1; 
       
      Escreva("Por favor informe o tipo do vinho:T para Tinto; B para Branco; R para Rose ou F para finalizar o programa");
      leia(tipoVinho);
     
     Fim enquanto
   
     se(soma_vinhos == 0)então
     Inicio 
        escreva("Como você digitou algo diferente das Iniciais dos tipos dos vinhos (T para Tinto; B para Branco; R para Rose) o programa foi finalizado!)
     Fim se;
     senão
     inicio
       media<soma_vinhos/i;
       porcentagemTinto<- tinto/ (tinto+branco_rose)*100;
       porcentagemBranco<- branco/ (tinto+branco_rose) *100;
       procentagemRose<- rose/(tinto+branco_rose) *100;
     
       Escreva("A quantidade total de vinhos nessa adega e",tinto+branco+rose);
       Escreva("A porcentagem de vinhos Tinto sobre o total de vinhos e",porcentagemTinto);
       Escreva("A porcentagem de vinhos Brancos sobre o total de vinhos e"procentagemBranco);
       Escreva("A porcentagem de vinhos Rose sobre o total de vinhos e"procentagemRose);
     
    Fim senão
Fim
*/
#include <iostream>
using namespace std;
main()
{
    char   tipoVinho;
    float  porcentagemTinto=0,porcentagemBranco=0,porcentagemRose=0,preco=0,soma_vinhos=0,media=0,resultado=0;
    int    i=0,tinto=0,branco=0,rose=0;

   
    cout<<"Por favor informe o tipo do vinho:T para Tinto; B para Branco; R para Rose ou F para finalizar o programa\n";
    cin>>tipoVinho;
   
    while(tipoVinho == 'T' || tipoVinho == 'B' || tipoVinho == 'R')
    {
      
      cout<<"Qual é o preco desse vinho?\n";
      cin>>preco;
      soma_vinhos=soma_vinhos+preco;
      i++;
     
      if(tipoVinho == 'T')
         tinto++;
         
      else if(tipoVinho == 'B')
         branco++;
         
      else if(tipoVinho == 'R')
         rose++; 
       
      cout<<"Por favor informe o tipo do vinho:T para Tinto; B para Branco; R para Rose ou F para finalizar o programa\n";
      cin>>tipoVinho;
    } 
   
    if(soma_vinhos == 0)
    { 
     cout<<"Como você digitou algo diferente das Iniciais dos tipos dos vinhos (T para Tinto; B para Branco; R para Rose) o programa foi finalizado!"<<endl;
    }
    else
    {
     
     media=soma_vinhos/i;
     porcentagemTinto= tinto/(tinto+branco+rose) *100;
     porcentagemBranco= branco/ (tinto+branco+rose) *100;
     porcentagemRose= rose/(tinto+branco+rose) *100;
     
     cout<<"A quantidade total de vinhos nessa adega e "<<tinto+branco+rose<<endl;
     cout<<"A porcentagem de vinhos Tinto sobre o total de vinhos e "<<porcentagemTinto<<endl;
     cout<<"A porcentagem de vinhos Brancos sobre o total de vinhos e "<<porcentagemBranco<<endl;
     cout<<"A porcentagem de vinhos Rose sobre o total de vinhos e "<<porcentagemRose<<endl;
    } 
    
}

