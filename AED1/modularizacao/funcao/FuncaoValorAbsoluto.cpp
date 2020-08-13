#include<iostream>
using namespace std;

double FuncaoValorAbsoluto(double numero)
{
    if (numero > 0)
     return numero;
    
    else
     return numero * (-1);
}
main()
{
    double numero=0.0;

    cout<<"Digite um numero para ser retornado seu valor absoluto: ";
    cin>>numero;

    cout<<endl;

    cout<<"O valor absoluto do numero informado e "<<FuncaoValorAbsoluto(numero)<<endl;
}