#include <iostream>
using namespace std;
main()
    void receber_dados()
    { 
        cout<<"Quantas vezes voce quer que se repita a mensagem: ";
        cin>>quantas_vezes;

        cout<<"Qual é a mensagem que voce quer se repita: ";
        cin>>mensagem;
    }
    void escrever()
    {
        for(int i=0; i< quantas_vezes; i++)
        {
            cout<<mensagem<<endl;
        }
    }

{
    string mensagem;
    int quantas_vezes;

    receber_dados();
    escrever();

}