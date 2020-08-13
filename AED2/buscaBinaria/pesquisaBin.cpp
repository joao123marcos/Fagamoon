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

int pesquisaBinaria(int vetor[ ], int tam, int x)
{
    int inicio, meio, fim, posicao;

    inicio = 0;
    fim = tam;
    posicao= -1;

    while (posicao == -1 && inicio <=fim)
    {
        meio = (inicio + fim)/2;
        if (vetor[meio] == x)
        {
           posicao = meio;
        }
        else if (x < vetor[meio])
        {
            fim= meio -1;
            posicao = meio;
        }
        else
        {
            inicio = meio + 1;
            posicao = meio;
        }
    }
    return posicao;
}
void retornoFuncaoPesquisaBinaria(int retorno)
{
    if (retorno == -1)
    {
        cout<<"Elemento não foi encontrado no vetor!"<<endl;
    }
    else
    {
        cout<<"Elemento encontrado na posicao "<<retorno<<" do vetor."<<endl;
    }
    
    
}
main()
{
    int tam=0, numero=0, retorno=0;

    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;

    int vetor[tam];

    //chamando a função de preencher o vetor
    preencheVetor(vetor, tam);
    cout<<endl;

    cout<<"Digite um numero para ser pesquisado no vetor: ";
    cin>>numero;

    retorno = pesquisaBinaria(vetor, tam , numero);

    retornoFuncaoPesquisaBinaria(retorno);
    cout<<endl;
}