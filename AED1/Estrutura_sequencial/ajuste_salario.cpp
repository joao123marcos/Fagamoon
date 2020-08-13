#include <iostream>
using namespace std;
main ()
{
  float salario=0, novosalario=0;

  cout<<"Informe seu atual salario:\n";
  cin>>salario;
  novosalario=salario+(salario*0.237); //outra forma de fazer o calculo (novosalario=salario*1.237)
  cout<<"Seu novo salário R$ "<<novosalario<<endl;

}
