#include<iostream>
using namespace std;

void preencher_vetor(int &vetor[ ], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite um número para preencher a linha "<<i<<"º do vetor";
        cin>>vetor[i];
    }
}

int retorna_maior( int vetor[ ], int tam)
{
    int maior_elemento=0;
    maior_elemento= vetor[0];

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] > maior_elemento)
        {
            maior_elemento= vetor[i];
        }
        
    }
    return maior_elemento;
}
void par_impar(int vetor[ ], int tam, int &cont_impar, int &cont_par)
{
    cont_impar=0;
    cont_par=0;

    for(int i=0; i < tam; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            cont_par++;
        }
        else
        {
            cont_impar++;
        }
    }

}

int ocorrencia_elementos(int vetor[ ], int tam, int numero, int &cont)
{
    cont=0;

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] == numero)
        {
            cont++;
        }
    }
}

void imprimir_vetor_na_tela(int vetor[ ], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" "<<endl;
    }   
}

main()
{
    int tam=0, numero=0, cont_impar, cont_par, cont;

    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;

    int vetor[tam];

    cout<<"Digite um número para verificar quantas vezes ele aparece nesse vetor: ";
    cin>>numero;
    cout<<endl;

    preencher_vetor(vetor,tam);
    cout<<endl;

    cout<<"O maior elemento encontrado nesse vetor é \n";
    retorna_maior(vetor,tam);

    cout<<endl;

    cout<<"Essa é a quantidade de números impares e pares presentes no vetor \n";
    par_impar(vetor,tam,cont_impar, cont_par);
    cout<<endl;

    cout<<"Levando em consideração o número que você digitou, ele apareceu essa quantidade de vezes \n";
    ocorrencia_elementos(vetor, tam, numero, cont);
    cout<<endl;

    cout<<"Esse é o vetor que você informou!\n";
    imprimir_vetor_na_tela(vetor,tam);
    cout<<endl;
}