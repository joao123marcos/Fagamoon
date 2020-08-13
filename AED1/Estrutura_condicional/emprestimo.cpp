#include <iostream>
using namespace std;
main()
{
  float salario=0,novosalario=0,prestacao=0;

  cout<<"Por favor informe seu salario bruto\n";
  cin>>salario;
  cout<<"Por favor informe o valor da prestação que deseja pagar\n";
  cin>>prestacao;
  novosalario=salario - (salario*0.09);
  if(prestacao <=((novosalario/100)*30))
     cout<<"O emprestimo é possível pois a parcela a se pagar é menor ou igual a 30 por cento do seu salario liquido"<<endl;
  else
     cout<<" Infelizmente não será posspivel lhe emprestar o dinheiro pois a parcela que queres pagar e maior que 30 por cento do seu salario liquido"<<endl;

}
  
