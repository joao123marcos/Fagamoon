#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream arquivo;
    arquivo.open("teste.txt");

    string nome;
    cout<<"Digite seu nome completo: ";
    getline(cin,nome);

    int numero;
    cout<<"Digite um numero para repetir o nome digitado: ";
    cin>>numero;

    for (int i = 0; i < numero; i++)
    {
       arquivo<<nome<<endl;
    }
    
}