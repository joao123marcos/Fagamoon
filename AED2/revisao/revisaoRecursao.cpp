#include <iostream>
using namespace std;

int fibonacci(int numero)
{
    if (numero > 1)
    {
        return numero;
    }
    else
    {
        return fibonacci(numero - 1 ) + fibonacci(numero - 2);
    }
}

main()
{
    int x = 0;

    cout<<"Digite um numero para calcular o fibonacci dele! ";
    cin>>x;
    cout<<endl;

    cout<<"O fibonacci do número que você digitou é "<<fibonacci(x)<<endl;
}