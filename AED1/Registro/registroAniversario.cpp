#include<iostream>
using namespace std;

struct nascimento{
    int dia=0, ano=0;
    string mes;
};
struct informacoes_pessoas{
    string telefone,nome;
    nascimento aniversario;
};

main()
{
    informacoes_pessoas vet[1000];
    int tamanho, cont=0;
    string nomeInformado, mesInformado;
    bool naoAchouNome=false,naoAchouMes=false;

    cout<<"Informe o tamanho do vetor que deseja? ";
    cin>>tamanho;
    cout<<endl;


    for (int i = 0; i < tamanho; i++)
    {
        cout<<"Qual o nome que deseja guardar no vetor? ";
        cin>> vet[i].nome;
        
        cout<<"Qual o dia do aniversario que deseja guardar no vetor? ";
        cin>> vet[i].aniversario.dia;
        
        cout<<"Qual o mes do aniversario que deseja guardar no vetor? ";
        cin>> vet[i].aniversario.mes;
        
        cout<<"Qual o ano do aniversario que deseja guardar no vetor? ";
        cin>> vet[i].aniversario.ano;
        
        cout<<"Qual o telefone que deseja guardar no vetor? ";
        cin>> vet[i].telefone;
        cout<<endl;
        
    }
    cout<<endl;
    cout<<endl;
    
    cout<<"Por favor informe um mes para verificar quantas pessoas que fazem aniversario neste mes"<<endl;
    cin>>mesInformado;

    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i].aniversario.mes == mesInformado)
        {
           cont++;
        }
        else
        {
           naoAchouMes=true;
        }
    }
    cout<<endl;
    cout<<endl;

    cout<<"Por favor informe um nome para imprimir na tela esse e o mes do aniversario"<<endl;
    cin>>nomeInformado;
    cout<<endl;

    cout<<"Imprimindo o nome"<<endl;

    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i].nome == nomeInformado)
        {
           cout<<vet[i].nome<<" - "<<vet[i].aniversario.mes<<" ";
        }
        else
        {
            naoAchouNome=true;
        }
        cout<<endl;
    }
    cout<<endl;
    if (cont > 0)
      cout<<"Para o mes que voce digitou existem "<<cont<<" pessoas que fazem aniversario nele!"<<endl;
      
    else if (naoAchouMes == true || cont==0 )
       cout<<"Mes informado nao foi encontrado no vetor!"<<endl;
      
    else if (naoAchouNome == true)
      cout<<"Nome digitado nao foi encontrado no vetor!"<<endl;   
}