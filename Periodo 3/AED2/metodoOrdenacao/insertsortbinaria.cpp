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

void imprimirVetorOriginal(int vetor[ ], int tam)
{
    cout<<"Imprimindo vetor que voce digitou!"<<endl;
    for ( int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
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

int PesquisaBinaria(int vetor[ ], int tam, int x)
{
    int inicio, fim, meio,cont=0,posicao=-1;
    
    inicio= 0;
    fim= tam;

    while (inicio <= fim)
    {
        meio= (inicio + fim)/2;
        if (x == vetor[meio])
        {
            cont++;
            break;   
        }
        else if (x < vetor[meio])
        {
            fim= meio -1;
            cont++;
        }
        else
        {
            inicio= meio + 1;
            cont++;
        }
    }
    posicao= meio;
    if (posicao > -1)
    {
       cout<<"Foram gastas "<<cont<<" comparacoes para achar o numero que voce escolheu"<<endl;
       cout<<"O numero que voce digitou esta na posicao "<<posicao<<"º do vetor"<<endl;
    }
}

main()
{
    int tam=0, numero=0;

    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;

    int vetor[tam];

    preencheVetor(vetor, tam);
    cout<<endl;

    imprimirVetorOriginal(vetor, tam);
    cout<<endl;

    InsertSort(vetor, tam);
    cout<<endl;

    imprimirVetorOrdenado(vetor, tam);
    cout<<endl;

    cout<<"Agora que ja ordenamos o vetor digite um numero para verificar"<<endl;
    cout<<"para verificar se esta no vetor e em qual posicao ele esta: ";
    cin>>numero;
    
    PesquisaBinaria(vetor, tam , numero);
    cout<<endl;
}