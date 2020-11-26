#include<iostream>
using namespace std;

int menorEntreDoisNumeros(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int menorElementoVetor(int vetor[], int tam)
{
    int menor=vetor[0];

    for (int i = 0; i < tam; i++)
    {
        menor= menorEntreDoisNumeros(vetor[i], menor);
    }
    return menor;
}
main()
{
    int tam=0;

    cout<<"Digite um tamanho para o vetor! ";
    cin>>tam;

    cout<<endl;

    int vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um numero para o vetor na posicao "<<i<<endl;
        cin>>vetor[i];
    }
    cout<<endl;

    cout<<"O menor elemento encontrado no vetor e "<<menorElementoVetor(vetor,tam);
}