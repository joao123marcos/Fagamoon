#include<iostream>
using namespace std;

float FuncaoMediaVet(float vetorMedia[], int tam)
{
    float soma=0.0, mediaVetor=0.0;

    for (int i = 0; i < tam; i++)
    {
       soma= soma + vetorMedia[i];
    }
    mediaVetor = soma/ tam;
    return mediaVetor;  
}
main()
{
    int tam=0;

    cout<<"Com quantas posicoes deseja criar um vetor?";
    cin>>tam;

    cout<<endl;
    float vetorMedia[tam];

    for (int i = 0; i < tam; i++)
    {
       cout<<"Digite um numero para a posicao "<<i<<" do vetor! ";
       cin>>vetorMedia[i];
    }
    cout<<endl;

    cout<<"A media desse vetor e "<<FuncaoMediaVet(vetorMedia, tam)<<endl;
}