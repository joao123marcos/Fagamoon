#include<iostream>
using namespace std;

// procedimento para preencher um vetor de strings
void procedure_preenche_vetor(string vetor[],int tam)
{
    cout<<"Digite as strings para preencher o vetor:\n";
    for (int i = 0; i < tam; i++)
    {
        cin>>vetor[i];
    }
    cout<<endl;
    cout<<endl;
}
void maiorPalavra(string vetor[],int tam, int &maiorTam, string &palavra)
{
    maiorTam= vetor[0].size();

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i].size() > maiorTam)
        {
            maiorTam= vetor[i].size();
            palavra= vetor[i];
        }
        
    }
    
}

void armazenaLetra(string vetor[], int tam, string vetchar[])
{
    for (int i = 0; i < tam; i++)
    {
        vetchar[i]= vetor[i].substr(0,1);
    }
    
}

main()
{
    int tam=0, maior_tamanho=0;

    
    cout<<"Digite um tamanho para o vetor: ";
    cin>>tam;

    string vetor[tam], vetchar[tam], palavra=" ";

    cout<<endl;
    cout<<endl;

    procedure_preenche_vetor(vetor, tam);

    maiorPalavra( vetor, tam, maior_tamanho, palavra);

    armazenaLetra(vetor, tam, vetchar);

    cout<<"A maior palavra existe no vetor e "<<palavra<<" e seu tamanho e "<<maior_tamanho<<endl;

    cout<<endl;
    cout<<endl;

    cout<<"As iniciais das palavras existes no vetor\n";

    for (int i = 0; i < tam; i++)
    {
        cout<<vetchar[i]<<endl;
    }
}

