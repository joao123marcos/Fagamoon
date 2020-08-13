#include<iostream>
using namespace std;
main()
{
  float salario=0,qtdFilhos=0,media_filhos=0,media_salario=0,soma_filhos=0,soma_salario=0,menor=0,maior=0,percentual=0;
  int i=0,k=0;

  cout<<"Informe seu salario\n";
  cin>>salario;
  maior=salario;
  menor=salario;
  while(salario > 0)
  {
   cout<<"Quantos filhos voce tem?\n";
   cin>>qtdFilhos;
   i++;
   soma_salario=soma_salario+salario;
   soma_filhos=soma_filhos+qtdFilhos;
   if(salario > maior)
   {
     maior=salario;
   }
   if(salario < menor)
   {
     menor=salario;
   }
   if(salario <= 1000)
   {
     k++;
   }
   cout<<"Informe seu salario\n";
   cin>>salario;
  }
  if(soma_filhos == 0)
  {
   cout<<"Como voce digitou um valor negativo para salario o programa foi encerrado!"<<endl;
  }
  else
  {
   media_salario=soma_salario/i;
   media_filhos=soma_filhos/i;
   percentual=(k/100)*i;
  
   cout<<"O maior salario dos alunos entrevistados e: "<<maior<<endl;
   cout<<"O menor salario dos alunos entrevistados e: "<<menor<<endl;
   cout<<"A media de filhos entre os alunos e: "<<media_filhos<<endl;
   cout<<"A media de salario entre os alunos e "<<media_salario<<endl;
   cout<<"O percentual de alunos que ganham ate mil reais e "<<percentual<<endl;
   cout<<k<<endl;
   cout<<i<<endl;
  }
}
