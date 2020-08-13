#include <iostream>
#include "fracao.hpp"

struct fracao
{
    int numerador;
    int denominador;
};

fracao *criarFracao(int numerador, int denominador)
{
    fracao *f = new fracao();
    f -> numerador = numerador;
    f -> denominador = denominador;
    return f;
}

int acessarNumerador(fracao *f)
{
    return f -> numerador;
}

int acessarDenominador(fracao *f)
{
    return f -> denominador;
}

