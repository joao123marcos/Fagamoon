#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n > 2)
    {
        return n;
    }
    else
    {
        return fibonacci(n -1) + fibonacci(n -2);
    }
    
}

main()
{
    int numero=0;

    cout<<"Digite um numero pra calcular o fibonacci: ";
    cin>>numero;

    cout<<endl;

    cout<<"O fibonacci do numero que voce informou e"<<endl;
    cout<<endl;

    fibonacci(numero);
}