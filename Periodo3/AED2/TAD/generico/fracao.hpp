#ifndef fracao_hpp
#define fracao_hpp

struct fracao;

fracao *criarFracao(int,int);
int acessarNumeradorFracao(fracao *);
int acessarDenominadorFracao(fracao *);

#endif