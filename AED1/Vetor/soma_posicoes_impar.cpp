#include <iostream>
using namespace std;
main()
{
    int vetor [10],i,soma=0;

    for(i=0;i < 10; i++)
    {
        cout<<"Digite um numero para preencher o vetor\n";
        cin>>vetor[i];

        if(i % 2 !=0)
           soma= soma + vetor[i];
    }
    cout<<"O resultado da soma dos numero de posicao impar do vetor e "<<soma<<endl;
}