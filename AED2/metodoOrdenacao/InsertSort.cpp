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

void InsertSort(int vetor[ ], int tam)
{
    int i,j, aux, comparacao=0,comparacoes_de_dentro=0,comparacoes_de_fora=0;
    j = 1;
    while (j < tam)
    {
        aux = vetor[j];
        i = j - 1;
        while ((i >= 0) && (vetor[i] > aux))
        {
          vetor[i + 1] = vetor[i];
          i--;
          comparacoes_de_dentro++;
        }
        vetor[i + 1] = aux;
        j++;
        comparacoes_de_fora++;
    }
    comparacao = comparacoes_de_dentro + comparacoes_de_fora;
    cout<<"Foram gastas "<<comparacao<<" para ordenar este vetor!"<<endl;
}

void imprimirVetorOrdenado(int vetor[ ], int tam)
{
    cout<<"Imprimindo vetor ordenado!"<<endl;
    for ( int i = 0; i < tam; i++)
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

    InsertSort(vetor, tam);
    cout<<endl;

    imprimirVetorOrdenado(vetor, tam);

 }