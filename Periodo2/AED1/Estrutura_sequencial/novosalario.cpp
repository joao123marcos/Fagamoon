#include <iostream>
using namespace std;
main()
{
  float salario=0,novosalario=0; //aux=0;

  cout<<"Informe seu atual salario:\n";
  cin>>salario;
  /*aux=salario*0.05;
  novosalario=salario+aux-(salario*0.07);*/
  novosalario=salario + (((salario/100)*5)-((salario/100)*7));
  cout<<"Seu novo salario já com impostos e acrescimos deduzidos é: R$ "<<novosalario<<endl;
}
 
