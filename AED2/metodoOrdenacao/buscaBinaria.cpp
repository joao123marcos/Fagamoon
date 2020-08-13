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
    cout<<endl;
}