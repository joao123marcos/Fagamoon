#include <iostream>
using namespace std;
main()
{
  float estoqueMedio,qtdMinima,qtdMaxima;

  cout<<"Informe a quantidade minixa existe no estoque:" <<endl;
  cin>>qtdMinima;
  cout<<"Informe a quantidade maxima que o estoque aguenta:" <<endl;
  cin>>qtdMaxima;
  estoqueMedio=(qtdMinima+qtdMaxima)/2;
  cout<<"O estoque medio do objeto em questão é:" <<estoqueMedio<<endl;

}
