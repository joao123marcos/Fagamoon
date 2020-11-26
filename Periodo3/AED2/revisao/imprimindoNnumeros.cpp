#include <iostream>
using namespace std;

int numeroNatural(int n, int cont)
{
    if (cont == n)
    {
        return n;
    }
    else
    {
        return cont + numeroNatural(cont + 1, n); 
    }
}

main()
{
    int numero=0, cont=0;


    cout<<"Digite um numero qualquer: ";
    cin>>numero;

    cout<<endl;

    cout<<"Retorno da funcao "<<numeroNatural(numero, cont)<<endl;
}