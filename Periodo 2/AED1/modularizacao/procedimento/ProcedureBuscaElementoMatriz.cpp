#include<iostream>
#define linha 3;
#define coluna 3;
using namespace std;

void ProcedureBuscaElementoMatriz(int Matriz[linha][coluna], int numeroInformado, int &NaLinha, int &NaColuna, bool &Achou)
{
    Achou=false;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Matriz[i][j] == numeroInformado)
            {
                Achou=true;
                NaLinha=i;
                NaColuna=j;
            }
            
        }
        
    }
}
main()
{
    int  NaLinha=0, NaColuna=0, NumeroInformado=0, i,j;
    bool Achou=false;

  /*cout<<"Quantas linhas voce deseja para a Matriz? ";
    cin>>linha;

    cout<<endl;

    cout<<"Quantas colunas voce deseja para a Matriz? ";
    cin>>coluna;*/
  
    int Matriz[linha][coluna];

    cout<<endl;

    for ( i = 0; i < linha; i++)
    {
        for ( j = 0; j < coluna; j++)
        {
            cout<<"Digite um numero para preencher a Matriz a linha "<<i<<" coluna "<<j<<endl;
            cin>>Matriz[i][j];
        }
    }
    cout<<endl;

    cout<<"Digite um numero para verificar se este econtra-se na Matriz ";
    cin>>NumeroInformado;

    ProcedureBuscaElementoMatriz(Matriz,NumeroInformado,NaLinha,NaColuna,Achou);
    
    if (Achou == true)
     cout<<"Elemento encontrado com sucesso, ele esta na linha "<<NaLinha<<" e na coluna "<<NaColuna<<endl;
    
    else
     cout<<"Elemento não encontrado na Matriz! "<<endl;
}