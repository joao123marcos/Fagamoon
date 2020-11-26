#include <iostream>
using namespace std;

struct mercadoria
{
    int codigo;
    string nome;
    float  estoque,preco;
};
void GetDados(mercadoria vetor[ ], int quantosProdutos)
{
    for (int i = 0; i < quantosProdutos; i++)
    {
        cout<<"Digite o código do produto: ";
        cin>>vetor[i].codigo;
        cout<<endl;
    
        cout<<"Digite o nome do produto: ";
        cin>>vetor[i].nome;
        cout<<endl;

        cout<<"Digite o preço do produto: ";
        cin>>vetor[i].preco;
        cout<<endl;

        cout<<"Qual a quantidade em estoque? ";
        cin>>vetor[i].estoque;
        cout<<endl;
    }
}
void Retorna(mercadoria vetor[ ], int quantosProdutos, int maiorestoque, float maiorpreco)
{
    maiorpreco = 0;
    maiorestoque = 0;

    for (int i = 0; i < quantosProdutos; i++)
    {
        if (vetor[i].estoque > maiorestoque)
        {
            maiorestoque = vetor[i].estoque;
        }

        if (vetor[i].preco > maiorpreco)
        {
            maiorpreco = vetor[i].preco;
        }
        
    }
    cout<<"O produto de maior preço é: "<<maiorpreco<<endl;
    cout<<"O produto de maior estoque é: "<<maiorestoque<<endl;
}
main()
{
    int quantosprodutos,maiorEstoque = 0;
    float maiorPreco = 0;

    cout<<"Quantos produtos vc vai informar!? ";
    cin>>quantosprodutos;
    cout<<endl;

    mercadoria vetor[quantosprodutos];

    GetDados(vetor,quantosprodutos);
    cout<<endl;
   
    Retorna(vetor, quantosprodutos, maiorEstoque, maiorPreco);
    cout<<endl;
}
