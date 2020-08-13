#include <iostream>
#include "conta.hpp"
using namespace std;

struct conta
{
    string nome;
    int cpf;
    float saldo;
};

conta *criar_conta(string nome, float saldo, int cpf)
{
    conta *ponteiro = new conta();

    ponteiro -> nome = nome;
    ponteiro -> cpf = cpf;
    ponteiro -> saldo = saldo;

    return ponteiro;
}

string acessarNome(conta *ponteiro)
{
    return ponteiro -> nome;
}

int acessarCPF(conta *ponteiro)
{
    return ponteiro -> cpf;
}

int acessarSaldo(conta *ponteiro)
{
    return ponteiro -> saldo;
}
