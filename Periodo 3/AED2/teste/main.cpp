#include<iostream>
#include "conta.hpp"
using namespace std;
main()
{
    int CPF = 0;
    float saldo = 0;
    string nome, retorno;

    cout<<"Usuário, digite seu nome!\n";
    cin>>nome;
    cout<<endl;

    cout<<"Usuário,digite seu CPF para criar a conta! ";
    cin>>CPF;
    cout<<endl;

    cout<<"Usuário, digite o seu saldo inicial para abertura da conta: ";
    cin>>saldo;
    cout<<endl;

    conta *ponteiro = criar_conta(nome,saldo,CPF);
    cout<<"Conta Criada com sucesso!"<<endl;
    cout<<endl;

    retorno = acessarNome(ponteiro); //Fiz desta maneira afim de explorar outras formas de retorno
    cout<<"Nome informado na abertura da conta é "<<retorno<<endl;

    cout<<"O CPF vinculado a esta conta é "<<acessarCPF(ponteiro)<<endl;
    
    cout<<"O saldo inicial desta conta é "<<acessarSaldo(ponteiro)<<endl;
}