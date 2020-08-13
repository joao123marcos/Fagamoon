#include<iostream>
using namespace std;

bool FuncaoRetornaMaior(double primeiroNumero, double segundoNumero)
{
    bool Maior=false;

    if (primeiroNumero > segundoNumero)
     Maior=true;

    return Maior;
}
main()
{
    double num1=0.0, num2=0.0;

    cout<<"Digite dois numero para verificar quem e o maior! Nao digitar numeros iguais\n";
    cin>>num1;
    cin>>num2;

    cout<<endl;

    cout<<"E "<<FuncaoRetornaMaior(num1,num2)<<" que o primeiro numero e maior que o segundo! "<<endl;
}
