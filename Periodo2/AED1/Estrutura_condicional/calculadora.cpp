#include <iostream>
using namespace std;
main()
{
  float n1=0, n2=0,resultado=0;
  char operacao;

  cout<<"Informe o primeiro numero\n";
  cin>>n1;
  cout<<"Informe o segundo numero\n";
  cin>>n2;
  cout<<"Digite uma das 4 operações basicas da matematica (1- Adição; 2- subtração; 3- multiplicação; 4-Divisão)\n";
  cin>>operacao;
  switch(operacao)
    {
      case '1':
          resultado=n1+n2;
          cout<<"Resultado " <<resultado <<endl; 
          break;
      
      case '2':
          resultado=n1-n2;
          cout<<"Resultado " <<resultado <<endl;
          break;
      case '3':
          resultado=n1*n2;
          cout<<"Resultado " <<resultado <<endl;
          break;
      
      case '4':
          if(n2==0)
             cout<<"Não existe divisão por zero"<<endl;
      
          else
          {
            resultado=n1/n2;
            cout<<"Resultado " <<resultado <<endl;
          }
          break;
      default:
            cout<<"Opção invalida"<<endl;
    }
}
              
