#include<iostream>
using namespace std;

float mediaVetor(float vetor[], int tam, int i)
{ 
    if (i > tam)
     return 0;
    else
      return  mediaVetor(vetor,tam, i);
}
main()
{
    int tam=0,i=0;
    float somaVetor=0, media=0;

    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;

    float vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um numero para preencher o vetor!\n";
        cin>>vetor[i];
    }
    somaVetor= somaVetor + mediaVetor(vetor,tam,i);
    cout<<somaVetor;
}