#include<iostream>
using namespace std;
main()
{
    int vetor[10],i;

    for(i=0; i < 10; i++)
    {
        cout<<"Informe um numero para preencher o vetor: ";
        cin>>vetor[i];
    }
    cout<<"Exibindo o vetor na ordem  que foi informado:";
    cout<<endl;
    cout<<endl;
    for(i=0; i < 10; i++)
    {
        cout<<vetor[i]<<" ";
        
    }
    cout<<endl;
    cout<<endl;
    cout<<"Exibindo o vetor na ordem inversa que foi informado:";
    cout<<endl;
    cout<<endl;
    for(i=9; i >= 0; i--)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
}