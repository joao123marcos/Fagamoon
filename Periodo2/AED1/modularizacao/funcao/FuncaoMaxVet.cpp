#include<iostream>
using namespace std;

float FuncaoMaiorElementoVetor(float vetor[],int tam)
{
    float maior= vetor[0];

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] > maior)
         maior=vetor[i];
        
    }
    return maior;
}
main()
{
    int tam=0;

    cout<<"Com quantas posicoes voce deseja criar um vetor? ";
    cin>>tam;

    cout<<endl;
    float vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um numero para preencher a "<<i<<"ª posicao do vetor! ";
        cin>>vetor[i];
    }
    cout<<endl;

    cout<<"O maior elemento encontrado no vetor e "<<FuncaoMaiorElementoVetor(vetor,tam)<<endl;
}