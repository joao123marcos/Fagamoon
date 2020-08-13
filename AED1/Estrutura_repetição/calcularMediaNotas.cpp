#include <iostream>
using namespace std;
main()
{
  float media,nota,soma=0;
  int qtdNotas;
  
  cout<<"Informe a quantidade de notas q serem somadas para calculcar a media\n";
  cin>>qtdNotas;
 
  for(int i=0;i<qtdNotas;i++)
  {
    cout<<"Escreva a nota do aluno\n";
    cin>>nota;
    soma=soma+nota;
  }
  media=soma/qtdNotas;  
  cout<<"A média das notas foi! "<<media<<endl;
}
