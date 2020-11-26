#include <iostream>
using namespace std;

void preeche_Vetor(int vetor[ ], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout<<"Usuário, digite um número para preencher a posição "<<i<<"ª do vetor! ";
        cin>>vetor[i];
    }
}

int Retorna_Maior_Valor(int vetor[ ], int tam)
{
    int maior_Elemento = 0;

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] > maior_Elemento)
        {
            maior_Elemento = vetor[i];
        }
    }
    return maior_Elemento;
}

void Retorna_Par_Impar(int vetor[ ], int tam)
{
    int cont_Par = 0;
    int cont_Impar = 0;

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            cont_Par++;
        }
        
        else
        {
            cont_Impar++;
        }
    }
    cout<<"Existem nesse vetor "<<cont_Par<<" elementos pares!"<<endl;
    cout<<"Existem nesse vetor "<<cont_Impar<<" elementos Impares!"<<endl;
}

int Ocorrencia_Elemento(int vetor[ ], int tam, int &ocorrencia, int x)
{
    ocorrencia = 0;

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] == x)
        {
            ocorrencia++;
        }
    }
    return ocorrencia;
}

void Retorna_Vetor(int vetor[ ], int tam)
{
    cout<<"Imprimindo o vetor que você digitou!"<<endl;
    
    for (int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
}

void Verifica_Retorno(int quantas_Vezes)
{
    if (quantas_Vezes > 0)
    {
        cout<<"O elemento que você digitou se repete "<<quantas_Vezes<<" vezes neste vetor!"<<endl;
    }
    
    else if (quantas_Vezes == 0)
    {
        cout<<"O número que você digitou não se encontra no vetor!"<<endl;
    }

}


main()
{
    int tam = 0, numero = 0, quantas_Vezes;

    cout<<"Usuário, digite um tamanho em posições para o vetor: ";
    cin>>tam;
    cout<<endl;

    int vetor[tam];

    preeche_Vetor(vetor,tam);
    cout<<endl;

    Retorna_Vetor(vetor,tam);
    cout<<endl;

    cout<<"O maior elemento encontrado nesse vetor é "<<Retorna_Maior_Valor(vetor , tam);
    cout<<endl;
    cout<<endl;

    Retorna_Par_Impar(vetor, tam);
    cout<<endl;

    cout<<"Usuário, por favor informe um número para verificar quantas vezes se repete no vetor digitado! ";
    cin>>numero;
    cout<<endl;

    quantas_Vezes = Ocorrencia_Elemento(vetor, tam, quantas_Vezes, numero);
    cout<<endl;
    
    Verifica_Retorno(quantas_Vezes);
    cout<<endl;
}