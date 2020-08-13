#include<iostream>
using namespace std;

int FuncaoMaiorElemento(int vetor[], int tam)
{
    int maior=0;
    for (int i = 0; i < tam; i++)
    {
        if (vetor[tam] > maior)
        {
            maior= vetor[tam];
        }
        
    }
    return maior;
    
}
main()
{  
      
    int maiorElemento=0, tam=3,vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um valor para preencher o vetor na posicao "<<i<<endl;
        cin>>vetor[tam];
    }

    maiorElemento= FuncaoMaiorElemento(vetor,tam);

    cout<<"O maior elemento encontrado no vetor e "<<maiorElemento<<endl;
    
}
