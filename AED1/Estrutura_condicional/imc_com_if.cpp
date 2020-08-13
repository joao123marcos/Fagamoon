#include <iostream>
#include <cmath>
using namespace std;
main ()
{
  float imc=0, peso=0, altura=0;

  cout<<"Por favor informe a sua altura\n";
  cin>>altura;
  cout<<"Por favor informe seu peso\n";
  cin>>peso;
  imc=peso/pow(altura,2);
  if(imc < 20)
  {
   cout<<"Você está abaixo do peso"<<endl;
  } 
  else if (imc >= 20 && imc <= 25 )
  { 
   cout<<"Você está no peso adequado!"<<endl;
  }
  else if (imc >25 && imc >30)
  { 
   cout<<"Cuidado! procure um medico pois você já está com um leve sobrepeso!"<<endl;
  }
  else
  {
  cout<<"Meu amigo aproveite os ultimos momentos de sua vida, pois você já está morto. Obesidade MORBIDA!"<<endl;
  }
  return 0;
}
