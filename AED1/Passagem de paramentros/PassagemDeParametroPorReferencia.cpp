#include<iostream>
using namespace std;

//Ao colocar o & estou dizendo que a variavel recebera o valor por referencia
//ou seja, ela aponta para o endereço de onde esta a variavel principal
void mudaValor( int &a)
{
    a= a+1;
}

main()
{
    int  x=0;

    cout<<"Digite uma valor inteiro qualquer! ";
    cin>>x;

    mudaValor(x);

    cout<<"O novo valor de "<<x -1<<" e "<<x<<endl;
}