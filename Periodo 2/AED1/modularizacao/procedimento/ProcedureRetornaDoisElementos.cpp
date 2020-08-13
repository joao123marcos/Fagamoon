#include<iostream>
using namespace  std;

void ProcedurePreencheVetor(int vetor[], int tam)
{
    cout<<"Preenchendo o Vetor!"<<endl;

    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um numero para preencher o vetor na posicao "<<i<<": "<<endl;
        cin>>vetor[i];
        cout<<endl;
    }
}

void ProcedureRetornaDoisElementos(int vetor[], int tam, int &MaiorElemento, int &SegundoMaiorElemento)
{
    
}