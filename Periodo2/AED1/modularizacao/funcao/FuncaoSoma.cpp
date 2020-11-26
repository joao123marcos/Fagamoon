#include<iostream>
using namespace std;

int FuncaoSoma(int num1, int num2)
{
    int soma=0;

    soma= num1 + num2;

    return soma;
}
main()
{
    int numero1=0, numero2=0;

    cout<<"Digite um numero inteiro qualquer: ";
    cin>>numero1;

    cout<<endl;

    cout<<"Digite um outro numero inteiro qualquer, de preferencia nao repetir: ";
    cin>>numero2;

    cout<<endl;

    cout<<"O resultado da soma dos dois numero informados e "<<FuncaoSoma(numero1,numero2)<<endl;
}