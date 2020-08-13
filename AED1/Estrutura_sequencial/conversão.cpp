#include <iostream>
using namespace std;
main()
{
  float moeda=0,conversao=0;

  cout<<"O sistema em questão fará a conversão de dolar para real. Atualmente 1 (um) dolar vale R$ 4,09"<<endl;
  cout<<"Informe a quantidade que queira fazer a conversão de dolar para real:\n";
  cin>>moeda;

  conversao=moeda*4.09;
  
  cout<<"A sua quantidade de dolar informada equivale  R$ "<<conversao<<endl;

} 
