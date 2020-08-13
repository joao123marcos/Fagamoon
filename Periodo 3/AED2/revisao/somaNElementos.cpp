#include <iostream>
using namespace std;

int somaElemntosVetor(int tam, int vetor[ ])
{
    if (tam == 0)
    {
        return 0;
    }
    else
    {
        return vetor[tam -1] + somaElemntosVetor(tam -1, vetor);
    }
}
main()
{
    int tam=0;

    cout<<"Digite uma tamanho para o vetor: ";
    cin>>tam;

    int vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um numero para preencher o vetor na posicao "<<i<<": ";
        cin>>vetor[i];
    }
    cout<<endl;
    cout<<"A soma dos elementos do vetor e "<<somaElemntosVetor(tam, vetor)<<endl;
}
