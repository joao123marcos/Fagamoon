#include<iostream>
using namespace std;


void mudaValor( int a)
{
    a= a+1;
}

main()
{
    int  x=0;

    cout<<"Digite uma valor inteiro qualquer! ";
    cin>>x;

    mudaValor(x);

    cout<<"O novo valor de "<<x<<" e "<<x<<endl;
}