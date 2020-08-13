#include <iostream>
using namespace std;
main()
{

   float media=0,nota=0,soma=0,maior=0,menor=0;
   int cont=0;

   cout<<"Informe a nota ou zero para finalizar\n";
   cin>>nota;
 
   menor=nota;
   maior=nota;

   while(nota > 0)
   {
    cont++;
    if(nota < menor && nota !=0)
      menor=nota;
    if(nota > maior)
      maior=nota;
    
    soma=soma+nota;
    cout<<"Digite outra nota ou zero para finalizar\n";
    cin>>nota;
  }
  if(soma != 0)
  { 
   media=soma/cont;   
   cout<<"A maior nota foi!! "<<maior<<" e a menor nota foi "<<menor<<endl;
  }
  else cout<<"Você digitou zero! Programa finalizado"<<endl;

} 
  








