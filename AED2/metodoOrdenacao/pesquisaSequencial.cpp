#include<iostream>
using namespace std;


int preencheVetor(int vetor[ ], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um numero para preencher o vetor na posicao "<<i<<": ";
        cin>>vetor[i];
    }
}

int pesquisaSequencial(int vetor[ ], int tam, int x)
{
    int pos= -1, cont=0;

    for (int i = 0; i < tam; i++)
    {
        if ( pos == -1 && vetor[i] == x )
        {
            pos= i;
        }
        cont++;  
    }
    if (pos != -1)
    {
        cout<<"Foram gastas "<<cont<<" comparacoes para achar o numero"<<endl;
    }
    
    return pos;
}
main()
{
    int tam=0, numero=0, retorno=0, cont=0;

    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;

    int vetor[tam];

    preencheVetor(vetor, tam);
    cout<<endl;

    cout<<"Digite um numero para pesquisar se ele está presente no vetor!!!";
    cin>>numero;

    retorno= pesquisaSequencial(vetor, tam, numero);
    cout<<endl;

    if (retorno == -1)
    {
        cout<<"Elemento não encontrado no vetor!!!!!"<<endl;
    }
    else
    {
        cout<<"Elemento encontrado no vetor na posicao "<<retorno<<"º"<<endl;
    }
}