#include <iostream>
using namespace std;

struct mercadoria{

    string codigo;
    char nome[30];
    double preco;
    int estoque;
};
main()
{
    int i,cod;
    mercadoria vet[5];
    bool achou=false;


    for(i=0; i<5; i++)
    {
       cout<<"digite o codigo da mercadoria: ";
       cin>>vet[i].codigo;

       cout<<"digite o nome da mercadoria: ";
       cin>>vet[i].nome;

       cout<<"digite o preco da mercadoria: ";
       cin>>vet[i].preco;

       cout<<"digite o estoque da mercadoria: ";
       cin>>vet[i].estoque;

       cout<<endl;
    }

    cout<<"Qual codigo voce deseja buscar no vetor"<<endl;
    cin>>cod;
    for(i=0; i<5; i++)
    {
      if(cod == vet[i].codigo)
      {
          cout<<"O nome do produto e: "<<vet[i].nome<<endl;
          cout<<"O preço do produto e: "<<vet[i].preco<<endl;
          cout<<"O estoque do produto e: "<<vet[i].estoque<<endl;

          achou=true;
      } 
    }
    if(achou == false)
       cout<<"Voce digitou um codigo que nao tem no vetor"<<endl;
}