#include <iostream>
using namespace std;

void* retornaponteiro(int *ponteiro)
{
    *ponteiro = *ponteiro * 2;
    cout<<"Resultado final "<<*ponteiro<<endl;
}
main()
{
    int numero = 0, *ponteiro;

    cout<<"Digite um número: ";
    cin>>numero;

    ponteiro = &numero;

    retornaponteiro(ponteiro);
}