#include <iostream>
using namespace std;
main()
{
  float media;
  int frequencia;

  cout<<"Informe a nota ou as notas do aluno\n";
  cin>>media;
  cout<<"Por favor informe a frequecia do aluno\n";
  cin>>frequencia;
  if(media >=60 && frequencia> 75)
  {
      cout<<"Aluno aprovado!"<<endl;
      cout<<"Parabens\n";
  }
  else
  {
      cout<<"Aluno reprovado!"<<endl;
  }                                
  return 0;
}
