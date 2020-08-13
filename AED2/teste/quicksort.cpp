#include <iostream>
#include <math.h>
using namespace std;

int preencheVetor(int vetor[ ], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um numero para preencher o vetor na posicao "<<i<<": ";
        cin>>vetor[i];
    }

}

int Vetor_Digitado_Pelo_Usuario(int vetor[ ], int tam)
{

    cout<<"Vetor que você digitou! "<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;

}
int quicksort(int vetor[ ], int esq, int dir)
{
    for (int i = esq; i < dir; i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
    
    int i = esq, j = dir, pivo = 0,aux = 0;
    pivo = vetor[((i + j) / 2)];
    cout<<pivo<<endl;
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


int Vetor_Ordenado(int vetor[ ], int tam)
{
    cout<<"Vetor ordenado!"<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
}

main()
{
    int tam=0, cont=0;

    cout<<"Usuário, digite um tamnho pra o vetor: ";
    cin>>tam;
    cout<<endl;

    int vetor[tam];

    preencheVetor(vetor, tam);
    cout<<endl;
 
    Vetor_Digitado_Pelo_Usuario(vetor, tam);
    cout<<endl;

    quicksort(vetor,0,tam -1);
    cout<<endl;

    Vetor_Ordenado(vetor, tam);
    cout<<endl;

}
