#include <iostream>
#include<cmath>
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
    int meio = 0, guarda_mediana = 0;

    meio = (esq + dir) / 2;

    if (vetor[esq] < vetor[meio])
    {
        if (vetor[meio] < vetor[dir])
        {
            guarda_mediana = meio;
        }
        else
        {
            if (vetor[esq] < vetor[dir])
            {
                guarda_mediana = dir;
            }
            else
            {
                guarda_mediana = esq;
            }
        }
    }
    else
    {
        if (vetor[dir] < vetor[meio])
        {
            guarda_mediana = meio;
        }
        else
        {
            if (vetor[dir] < vetor[esq])
            {
                guarda_mediana = dir;
            }
            else
            {
                guarda_mediana = esq;
            }
        }
    }
    return guarda_mediana;
}
int rearranja(int vetor[ ], int pivo, int esq, int dir, int u[ ])
{
    int a = esq, b = dir;
    for (int i = esq; i <= dir; i++)
    {
        if (i == pivo)
        {
            continue;
        }
        if (vetor[i] <= vetor[pivo])
        {
            u[a++] = vetor[i];
        }
        else
        {
            u[b--] = vetor[i];
        }
    }
    u[a] = vetor[pivo];
    cout<<"Vetor em ordenação! "<<endl;
    for (int i = esq; i <= dir; i++)
    {
        vetor[i] = u[i];
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
    return a;
}

void quicksort (int vetor[ ], int esq, int dir, int u[ ])
{
    if (esq >= dir)
    {
        return;
    }
    int pivo;
    pivo = Acha_mediana(vetor, esq, dir);
    pivo = rearranja(vetor,pivo,esq,dir,u);
    quicksort(vetor,esq,pivo-1,u);
    quicksort(vetor,pivo+1,dir,u);
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
    int tam=0;

    cout<<"Usuário, digite um tamnho pra o vetor: ";
    cin>>tam;
    cout<<endl;

    int vetor[tam],u[tam];

    preencheVetor(vetor, tam);
    cout<<endl;
 
    Vetor_Digitado_Pelo_Usuario(vetor, tam);
    cout<<endl;

    quicksort(vetor,0, tam -1,u);
    cout<<endl;

    Vetor_Ordenado(vetor, tam);
    cout<<endl;

}