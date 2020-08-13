#include <iostream>
using namespace std;
main()
{
  float numero;
  int cont1=0,cont=0;
  
  for(int i=1;i<=5;i++)
  {
    cout<<"Digite um número qualquer,positivo ou negativo\n";
    cin>>numero;
    if(numero < 0)
        cont1++;
    else
        cont++;
  }
  cout<<"Foram encontrados "<<cont1<<" números negativos e "<<cont<<" números positivos"<<endl;
}   
