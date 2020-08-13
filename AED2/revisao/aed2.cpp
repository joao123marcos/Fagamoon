#include <iostream>
using namespace std;
main
()
{
    int n1=0, n2=0, aux=0;

    cout<<"Informe um numero: ";
    cin>>n1;
    cout<<"Informe outro numero:";
    cin>>n2;
    aux=n1;
    n1=n2;
    n2=aux;

    cout<<n1<<" "<<n2<<endl;
}