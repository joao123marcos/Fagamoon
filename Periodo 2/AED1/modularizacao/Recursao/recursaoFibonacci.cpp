#include<iostream>
using namespace std;


int fibonacci(int numero)
{
    if (numero >=0 && numero<=1)
    {
        return numero;
    }
    else
    {
        return fibonacci(numero-1) + fibonacci(numero-2);
    }
    
}
main()
{
    int n=0;

    cout<<"Digite um numero qualquer: ";
    cin>>n;

    cout<<"O Fibonacci desse numero e "<<fibonacci(n)<<endl;
}