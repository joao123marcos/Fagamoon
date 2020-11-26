#include <iostream>
using namespace std;
main()
{
    int tam=0, soma=0, i;
    double media=0;

    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;

    int vetor[tam];

    for( i=0; i < tam; i++)
    {
        cout<<"Digite um numero para preencher o vetor, na linha "<<i<<":";
        cin>>vetor[i];
        soma= soma + vetor[i];

    }
    media= soma/i;
    for(int i=0; i < tam; i++)
    {
        if(vetor[i] > media)
        {
            cout<<vetor[i]<<" Numero acima da media"<<endl;
        }
        
    }
   
}