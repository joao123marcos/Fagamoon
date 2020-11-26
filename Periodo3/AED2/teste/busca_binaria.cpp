#include <iostream>
#include <cmath>
using namespace std;

int preencheVetor(int vetor[ ], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um numero para preencher o vetor na posicao "<<i<<": ";
        cin>>vetor[i];
    }
}

void imprimirVetorOriginal(int vetor[ ], int tam)
{
    cout<<"Imprimindo vetor que voce digitou!"<<endl;
    for ( int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
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

int quicksort(int vetor[ ], int esq, int dir)
{

    int i = esq, j = dir, pivo = 0,aux = 0;
    pivo = floor (vetor[((i + j) / 2)]);
    do
    {
        while (vetor[i] < pivo)
        {
            i++;
        } 
        while (vetor[j] > pivo)
        {
            j--;
        }
        if (i <= j)
        {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);
    
    if (esq < j)
    {
        quicksort(vetor, esq, j);
    }
    if (i < dir)
    {
        quicksort(vetor, i, dir);
    }
}

bool PesquisaBinaria(int vetor[ ], int tam, int x)
{
    int inicio, fim, meio;
    bool achou= false;

    inicio= 0;
    fim= tam -1;

    while (inicio <= fim)
    {
        meio= (inicio + fim)/2;
        if (x == vetor[meio])
        {
            cout<<"O elemento do meio "<<vetor[meio]<<endl;
            achou = true;
            break;
        }
        else if (x < vetor[meio])
        {
            cout<<"O elemento do meio "<<vetor[meio]<<endl;
            cout<<"Elementos que farão para da proxima busca! "<<endl;
            for (int i = inicio; i <= (meio - 1); i++)
            {
                cout<<vetor[i]<<" ";
            }
            cout<<endl;
            fim= meio -1;
        }
        else
        {
            cout<<"O elemento do meio "<<vetor[meio]<<endl;
            cout<<"Elementos que farão para da proxima busca! "<<endl;
            for (int i = (meio + 1); i <= fim; i++)
            {
                cout<<vetor[i]<<" ";
            }
            cout<<endl;
            inicio= meio + 1;
        }
    }
    return achou;
}

main()
{
    int tam= 0, numero= 0;
    bool retorno = false;

    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;
    cout<<endl;

    int vetor[tam];

    preencheVetor(vetor, tam);
    cout<<endl;

    imprimirVetorOriginal(vetor,tam);
    cout<<endl;

    quicksort(vetor, 0 , tam -1);
    cout<<endl;

    imprimirVetorOrdenado(vetor,tam);
    cout<<endl;

    cout<<"Digite um numero para verificar se este se encontra no vetor: ";
    cin>>numero;
    cout<<endl;

    retorno = PesquisaBinaria(vetor, tam, numero);

    if (retorno == false)
    {
        cout<<"Elemento não incontrado no vetor."<<endl;
    }
    else
    {
        cout<<"Elemento encontrado. O Programa foi encerrado!"<<endl;
    }
}