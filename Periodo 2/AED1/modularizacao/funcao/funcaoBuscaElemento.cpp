#include<iostream>
using namespace std;
#define linha 2
#define coluna 2

bool BuscaElemento(int matriz[linha][coluna], int numero)
{
    bool achou=false;
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (matriz[i][j]== numero)
            {
                achou=true;
                cout<<"Elemento encontrado na linha "<<i<<" coluna "<<j<<endl;
            }
        }
    }
    return achou;
}
main()
{
     int matriz[linha][coluna], numero=0;
     bool encontrou=false;

     for (int i = 0; i < linha; i++)
     {
        for (int j = 0; j < coluna; j++)
        {
            cout<<"Digite um numero para preencher a matriz na linha "<<i<<" coluna "<<j<<endl;
            cin>>matriz[i][j];
        }
        
     }
    cout<<"Digite um numero para verificar se este se encontra na matriz: ";
    cin>>numero;
    BuscaElemento(matriz,numero);
    
}