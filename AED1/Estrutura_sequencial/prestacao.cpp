#include <iostream>
using namespace std;
main()
{
  float prestacao=0, valor=0,taxa=0;
  int tempo=0;

  cout<<"Informe o valor atrasado a pagar:\n";
  cin>>valor;
  cout<<"Informe o tempo em meses que foi dividido a conta:\n";
  cin>>tempo;
  cout<<"Informe o juros que indicirá sob o valor da conta atrasada:\n";
  cout<<"Observação: Informe o juros sem o simbolo de porcentagem ou já calculado pois o sistema irá fazer os calculos necessarios\n";
  cin>>taxa;
  prestacao= valor + (valor * (taxa/100) * tempo);
  cout<<"O valor da prestação que você terá que pagar já com juros calculado é "<<prestacao<<" R$"<<endl;
}
