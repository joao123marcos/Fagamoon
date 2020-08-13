#include <iostream>
using namespace std;
main()
{
  int i, numero=0, menor=0, maior=0, soma=0;
  
  cout<<"Informe um numero inteiro\n";
  cin>>numero;
  menor=numero;
  soma=soma+numero;
 
  for(i=0;i<14;i++)
  {
    cout<<"Informe um número inteiro qualquer\n";
    cin>>numero;
    if(numero < menor)
       menor=numero;
  
    else if(numero > maior)
       maior=numero;
   
    soma=soma+numero;
  }
  cout<<"O maior número é "<< maior <<" e o menor número é "<< menor <<" e a soma dos número informados foi "<<soma<<endl;

}

  
