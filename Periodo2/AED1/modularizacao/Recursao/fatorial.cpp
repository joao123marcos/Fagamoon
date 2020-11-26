#include<iostream>
using namespace std;

int funcaofat( int numero)
{
    if (numero == 1)
     return 1;
    else
     return numero * funcaofat(numero -1);
}
main()
{
    int numero=0;

    cout<<"Digite um numero para calcular o seu fatorial! ";
    cin>>numero;

    cout<<endl;

    cout<<"O fatorial do numero informado e "<<funcaofat(numero)<<endl;
}