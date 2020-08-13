#include <iostream>
#include "fracao.hpp"
using namespace std;
main()
{
    int numerador =0, denominador = 0;

    cout<<"Usuário, por favor digite um valor para o numerador da fração: ";
    cin>>numerador;
    cout<<endl;
    cout<<"Usuário, por favor digite um valor para o denominador da fração: ";
    cin>>denominador;
    cout<<endl;

    fracao *ponteiro = criarFracao(numerador,denominador);
    cout<<endl;

    cout<<"A fração que voçê digitou é "<<acessarNumeradorFracao(ponteiro)<<" / "<<acessarDenominadorFracao(ponteiro)<<endl;

    cout<<"O numerador da fração é "<<acessarNumeradorFracao(ponteiro)<<endl;
    cout<<"O denominador da fração é "<<acessarDenominadorFracao(ponteiro)<<endl;
}