#include<iostream>
using namespace std;

void mediaVetor(float vetor[], int tam, int soma, float &media)
{
    for (int i = 0; i < tam; i++)
    {
        media=(soma=soma +vetor[i])/tam;
    }
}
main()
{
    int tam=0, soma=0;
    float media=0;

    cin>>tam;

    float vetor[tam];

    for (int  i = 0; i < tam; i++)
    {
        cin>>vetor[i];
        cout<<" ";
    }
    
    mediaVetor(vetor,tam,soma,media);

    cout<<media<<endl;
}