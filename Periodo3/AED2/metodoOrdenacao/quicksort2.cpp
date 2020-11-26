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

int Acha_mediana(int vetor[ ], int esq, int dir)
{
    int meio = 0, primeira_Posicao, Ultima_posicao, guarda_mediana = 0;

    meio = floor (vetor[((esq + dir) / 2)]);
    primeira_Posicao = vetor[esq];
    Ultima_posicao = vetor[dir];

    if (primeira_Posicao < meio)
    {
        if (meio < Ultima_posicao)
        {
            guarda_mediana = meio;
        }
        else
        {
            if (primeira_Posicao < Ultima_posicao)
            {
                guarda_mediana = Ultima_posicao;
            }
            else
            {
                guarda_mediana = primeira_Posicao;
            }
        }
    }
    else
    {
        if (Ultima_posicao < meio)
        {
            guarda_mediana = meio;
        }
        else
        {
            if (Ultima_posicao < primeira_Posicao)
            {
                guarda_mediana = Ultima_posicao;
            }
            else
            {
                guarda_mediana = primeira_Posicao;
            }
        }
    }
    return guarda_mediana;
}

int quicksort(int vetor[ ], int esq, int dir)
{
    int i = esq, j = dir, pivo = 0,aux = 0;
    pivo = Acha_mediana(vetor,esq,dir);
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
    else if (i < dir)
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
