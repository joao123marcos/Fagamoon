#include <iostream>
using namespace std;

struct no
{
    int elemento;
    no *PonteiroParaProximoNo;
};

struct CorpoPilha
{
    no *topo;
    int tamanho;
};

void InicializaPilha(CorpoPilha &pilha)
{
    pilha.topo = new no;
    pilha.topo-> PonteiroParaProximoNo = NULL;
    pilha.tamanho = 0;
}

bool VerificaStatusPilha(CorpoPilha pilha)
{
    if (pilha.topo == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Empilha(CorpoPilha &pilha, int x)
{
    no *aux;

    aux = new no;
    pilha.topo-> elemento = x;
    aux -> PonteiroParaProximoNo = pilha.topo;
    pilha.topo = aux;
    pilha.tamanho = pilha.tamanho ++;
}


