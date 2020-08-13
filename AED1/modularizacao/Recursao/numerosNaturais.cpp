#include<iostream>
using namespace std;

int numerosNaturais(int numero, int cont)
{
    cout<< cont <<" ";
    if (cont == numero)
     return  numero;
    else
     return  numerosNaturais(numero,++cont);   
}
main()
{
    int numero=0, cont=0;

    cout<<"Digite um numero ";
    cin>>numero;
   
    numerosNaturais(numero, cont);
    cout<<endl;
}