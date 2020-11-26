#include <iostream>
using namespace std;
int main ()
{
  double peso=0,altura=0,imc=0;

  cout<<" Digite sua altura\n";
  cin>>altura;
  cout<<" Digite seu peso\n";
  cin>>peso;
  imc=peso/(altura*altura);
  cout<<"Seu imc e " << imc <<endl;
}

