#include <iostream>
using namespace std;
main()
{
  
  int codigo_aluno=0;
  float media=0,soma_nota,nota=0;
  
  cout<<"Por favor informe o codigo do aluno ou digite zero para finalizar o programa!\n";
  cin>>codigo_aluno;
 
  while(codigo_aluno !=0)
  {
   soma_nota=0;
   for(int i=1;i<=3;i++)
   {
    cout<<"Digite a "<<i<<"ª nota\n";
    cin>>nota;
    soma_nota=soma_nota+nota;
   }
   media= soma_nota/3;
   cout<<"O aluno de codigo "<<codigo_aluno<<" teve media: "<<media<<endl;
   cout<<"Por favor informe o codigo do aluno ou digite zero para finalizar o programa!\n";
   cin>>codigo_aluno;
  }
  if(codigo_aluno == 0) 
     cout<<"Como você digitou zero o programa foi encerrado! Obrigado!"<<endl;

}

