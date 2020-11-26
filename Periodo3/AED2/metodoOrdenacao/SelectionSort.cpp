#include <iostream>
using namespace std;


int preencheVetor(int vetor[ ], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um numero para preencher o vetor na posicao "<<i<<": ";
        cin>>vetor[i];
    }
}

void SelectionSort(int vetor[ ], int tam)
{
    int menor=0,aux=0,i,j,comparacao=0;

    for ( i = 0; i < (tam -1); i++)
    {
        menor=i;
        for ( j = (i + 1); j < tam; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
            comparacao++;
        }
        aux = vetor[menor];
        vetor[menor] = vetor[i];
        vetor[i] = aux;
    }
    cout<<"Comparações realizadas! "<<comparacao<<endl;
}

void imprimirVetorOrdenado(int vetor[ ], int tam)
{
    cout<<"Imprimindo vetor ordenado!"<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
}

main()
{
    int tam=0;

    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;

    int vetor[tam];

    preencheVetor(vetor, tam);
    cout<<endl;
    SelectionSort(vetor, tam);
    cout<<endl;
    imprimirVetorOrdenado(vetor, tam);
}