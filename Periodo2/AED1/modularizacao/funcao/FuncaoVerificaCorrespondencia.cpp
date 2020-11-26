#include<iostream>
using namespace std;

int FuncaoCorrespondencia(int vetor[], int tam, int x)
{
    int cont=0;

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] == x)
        {
            cont++;
        }
        
    }
    return cont;
    
}
main()
{
    int tam=5, frequencia=0, vetor[tam], numero=0;

    for (int i = 0; i < tam; i++)
    {
       cout<<"Digite um numero para preencher o vetor na posicao "<<i<<endl;
       cin>>vetor[i];
    }
    
    cout<<"Digite um numero para verificar a correspondencia dele no vetor! ";
    cin>>numero;
    
    frequencia= FuncaoCorrespondencia(vetor,tam,numero);
    
}