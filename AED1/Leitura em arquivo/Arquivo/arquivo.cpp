#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 
    ofstream arquivo;
    arquivo.open("teste.txt");

    string nome;
    cout<<"Digite seu nome completo: ";
    getline(cin,nome);

    arquivo<< nome <<endl;

    arquivo.close();

    cout<<"Arquivo escrito com sucesso"<<endl;

    return 0;
};