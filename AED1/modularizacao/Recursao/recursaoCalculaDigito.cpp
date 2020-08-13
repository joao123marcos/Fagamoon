#include<iostream>
using namespace std;

int Funcao_Recursiva_Digito(int n)
{
    int unidade=0, resto=0;

    //Tornando o numero divisivel por 10
    unidade= n % 10;

    //Subtraindo o numero a unidade já obtida
    resto=(n - unidade)/ 10;

    if (resto == 0)
    {
        return unidade;
    }
    else
    {
        return unidade + Funcao_Recursiva_Digito(resto);
    }    
}
main()
{
    int numero=0;

    cout<<"Digite um numero para calcular a soma de seus algarismos: ";
    cin>>numero;

    cout<<"A soma dos Algarismos desse numero e "<<Funcao_Recursiva_Digito(numero)<<endl;
}