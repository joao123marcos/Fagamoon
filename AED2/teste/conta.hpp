#ifndef CONTA_HPP
#define CONTA_HPP
using namespace std;

struct conta;

conta *criar_conta(string, float, int);
string acessarNome(conta *);
int acessarCPF(conta *);
int acessarSaldo(conta *);

#endif