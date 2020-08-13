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
    int menor=0,aux=0,i,j;

    for ( i = (tam - 1); i != -1; i--)
    {
        menor=i;
        for ( j = (i - 1); j != -1; j--)
        {
            if (vetor[j] > vetor[menor])
            {
                menor = j;
            }
        }
   
    aux = vetor[menor];
    vetor[menor] = vetor[i];
    vetor[i] = aux;
    }
}


void imprimirVetorOrdenado(int vetor[ ], int tam)
{
    int i=0;
    cout<<"Imprimindo vetor ordenado!"<<endl;
    for ( i = (tam - 1); i != -1; i--)
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
    SelectionSort(vetor, tam);
    cout<<endl;
    imprimirVetorOrdenado(vetor, tam);
}