#include <iostream>
#define TEMPOCURSO 4
using namespace std;
int main ()
{
  string nome;
  float mensalidade=0;
  int idade=0;

  cout<<"Informe you name\n";
  cin>>nome;
  cout<<"Informe sua idade atual\n";
  cin>>idade;
  cout<<"Informe sua mensalidade atual\n";
  cin>>mensalidade;
  idade=idade+TEMPOCURSO;
  mensalidade=(mensalidade*12)*TEMPOCURSO;
  cout<<"A idade final do"<< nome <<" sera" << idade << " no final curso e tera pago o montante " << mensalidade << " no fim dos " <<       TEMPOCURSO << " curso "<< endl;

}
