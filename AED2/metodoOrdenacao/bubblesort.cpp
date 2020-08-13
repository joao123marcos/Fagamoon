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

void bubbleSort(int vetor[ ], int tam)
{
    int i, j, aux;
    for ( i = 0; i < tam; i++)
    {
        j= (tam -1);
        while (j > i)
        {
            if (vetor[j] > vetor[j - 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
            }
            j--;
        }
    }
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

    bubbleSort(vetor, tam);
    cout<<endl;
    
    imprimirVetorOrdenado(vetor, tam);
}