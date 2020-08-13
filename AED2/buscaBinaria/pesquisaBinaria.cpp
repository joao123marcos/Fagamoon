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

bool PesquisaBinaria(int vetor[ ], int tam, int x)
{
    int inicio, fim, meio;
    
    inicio= 0;
    fim= tam;

    while (inicio <= fim)
    {
        meio= (inicio + fim)/2;
        if (x == vetor[meio])
        {
            return true;
        }
        else if (x < vetor[meio])
        {
            fim= meio -1;
        }
        else
        {
            inicio= meio + 1;
        }
    }
    return false;
}
main()
{
    int tam=0, numero=0, retorno=0;

    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;

    cout<<endl;

    int vetor[tam];

    preencheVetor(vetor, tam);

    cout<<endl;

    cout<<"Digite um numero para verificar se este se encontra no vetor: ";
    cin>>numero;

    cout<<endl;

    retorno= PesquisaBinaria(vetor, tam, numero);

    if (retorno == true)
    {
        cout<<"Elemento encontrado no vetor! "<<endl;
    }
    else
    {
        cout<<"Elemento não encontrado! "<<endl;
    }
    cout<<endl;
}