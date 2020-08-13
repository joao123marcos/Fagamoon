#include <iostream>
using namespace std;

int potencia(int base, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }
    else
    {
        return base * potencia(base, expoente - 1); 
    }
}

main()
{
    int base=0, expoente=0;

    cout<<"Digite um valor para base: ";
    cin>>base;
    cout<<"Digite um valor para o expoente: ";
    cin>>expoente;
    cout<<endl;
    
    cout<<"Resultado da poentecia "<<potencia(base, expoente)<<endl;
}