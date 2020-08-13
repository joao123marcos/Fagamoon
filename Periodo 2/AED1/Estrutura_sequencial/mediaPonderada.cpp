#include <iostream>
using namespace std;
main()
{
  double n1=0,n2=0,n3=0,n4=0,mediaPonderada=0;
  
  cout<<"Por favor informe a primeira nota:\n";
  cin>>n1;
  cout<<"Por favor informe a segunda nota:\n";
  cin>>n2;
  cout<<"Por favor informe a terceira nota:\n";
  cin>>n3;
  cout<<"Por favor informe a quarta nota:\n";
  cin>>n4;
  mediaPonderada=((n1*1)+(n2*2)+(n3*3)+(n4*4))/(1+2+3+4);
  cout<<"A média ponderada entre as notas informadas é:" <<mediaPonderada <<endl;
}
