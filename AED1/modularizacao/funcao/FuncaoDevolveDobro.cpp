#include <iostream>
using namespace std;

float FuncaoPotencia(int base=0)
{
    float resultado=0.0;
    resultado= base*base;
    return resultado;
}
main()
{
    int numero=0, resultado=0;

    cout<<"Informe um numero para calcular o quadrado dele: ";
    cin>>numero;
    
    cout<<endl;
    cout<<endl;

    resultado= FuncaoPotencia(numero);

    cout<<" O quadrado do numero informado e "<<resultado<<endl;

}
