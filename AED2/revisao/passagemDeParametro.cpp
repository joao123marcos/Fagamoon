#include<iostream>
using namespace std;

 void receber_dados( string &mensagem, int &quantas_vezes)
 {
     cout<<"Quantas vezes você quer que apareça a mensagem: ";
     cin>>quantas_vezes;

     cout<<endl;

     cout<<"Qual é a mensagem que você quer que se repita: ";
     cin>>mensagem;

 }

 void escrever_na_tela( string mensagem ,int quantas_vezes)
 {
     for (int i = 0; i < quantas_vezes ; i++)
     {
        cout<<mensagem<<endl;
     }
     
 }
main()
{
    string mensagem;
    int quantas_vezes;

    receber_dados(mensagem, quantas_vezes);
    escrever_na_tela( mensagem, quantas_vezes);
}

 