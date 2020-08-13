#include <iostream>
using namespace std;
main()
{
  int cont=0,numero=0;

  cout<<"Qual tabuada você deseja que seja impresso na tela\n";
  cin>>numero;
  cout<<"Até qual número\n";
  cin>>cont;
  for(int i=0;i<=cont;i++)
     cout<< numero<<" X "<<i<<" = "<<numero*i<<endl;
}
