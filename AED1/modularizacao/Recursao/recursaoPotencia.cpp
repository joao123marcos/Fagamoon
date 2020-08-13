#include<iostream>
using namespace std;

float funcaoPotencia(int base, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }
    else
    {
        return base * funcaoPotencia(base, expoente-1);
    }
}
main()
{
    float base, expoente;

    cout<<"Digite um valor para base: ";
    cin>>base;
    
    cout<<endl;

    cout<<"Digite um valor para expoente: ";
    cin>>expoente;

    cout<<endl;

    cout<<"A potencia dessa base informada e "<<funcaoPotencia(base, expoente)<<endl;
    
}