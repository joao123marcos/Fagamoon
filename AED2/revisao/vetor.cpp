#include<iostream>
using namespace std;


int preencheVetor(int vetor[ ], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cin>>vetor[i];
    }
}

int novoVetor(int vetor[ ], int tam)
{
    int vetor2[tam];
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetor2[i]= vetor[i];
            cout<<vetor2[i]<<" ";
        }
    }

}
main()
{
    int tam=0;

    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;

    cout<<endl;

    int vetor[tam];

    cout<<"Informe alguns numero para serem preenchidos no vetor"<<endl;
    preencheVetor(vetor, tam);

    cout<<endl;

    cout<<"Numeros divisiveis por 2"<<endl;
    novoVetor(vetor, tam);
    cout<<endl;
}