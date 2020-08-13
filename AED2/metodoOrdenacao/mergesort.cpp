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

int Vetor_Digitado_Pelo_Usuario(int vetor[ ], int tam)
{
    cout<<"Vetor que você digitou! "<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;

}

int Vetor_Em_Ordenacao(int vetor[ ], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;

}


int merge(int vetor[ ], int esq, int meio, int dir)
{
    int i, j, k, temporario[dir - esq + 1];

    i=esq;       //i anda na primeira metade do vetor
    j= meio + 1;// j anda na segunda metade do vetor
    k=0;

    while (k < (dir - esq + 1))
    {   //intercalação dos trechos
        if ((i <= meio) && (j <= dir))
        {   //O menor é incrementado uma posição e o valor vai para o tmp
            if (vetor[i] < vetor[j])
            {
                temporario[k] = vetor[i];
                i++;
            }
            else
            {
                temporario[k] = vetor[j];
                j++;
            }
            
            k++;
        }
        /*Preciso verificar se existe uma partição que ainda falta 
        para se copiada para o tmp*/

        //Copia o que sobrou da direita
        else if (i > meio)
        {
            temporario[k] = vetor[j];
            j++;
            k++;
        }
        else
        {
            temporario[k] = vetor[i];
            i++;
            k++; 
        }
    }
    /*Uma vez que os elementos já foram copiados para o vetor tmp agora já posso
      voltar os elementos já ordenados para o vetor principal que recebo como parametro*/

    k=0;

    cout<<"Vetor em ordenação!!!! "<<endl;
    Vetor_Em_Ordenacao(temporario,dir - esq + 1);

    for (int i = esq; i <= dir; i++)
    {
        vetor[i] = temporario[k];
        k++;
    }
}

int mergesort(int vetor[ ], int esq, int dir)
{
    if (esq < dir)
    {
        int meio = ((esq + dir) / 2);
        cout<<meio<<endl;
        mergesort(vetor,esq, meio);     //faz esta chamada recursiva para primeira metade do vetor
        mergesort(vetor, meio + 1, dir); //faz esta chamada recursiva para segunda metade do vetor

        //chamar um algoritmo para intercarlar as partes ordenadas

        merge(vetor, esq, meio, dir);

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

    mergesort(vetor,0,tam -1);
    cout<<endl;

    Vetor_Ordenado(vetor, tam);
    cout<<endl;

}