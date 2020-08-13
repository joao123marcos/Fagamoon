#include <iostream>
using namespace std;
main()
{
    char nome [30];
    char esporte [15];

    cout<<"Digite seu nome completo: ";
    cin.getline(nome,30);
    cout<<"Digite seu esporte favorito: ";
    cin.getline(esporte,15);

    cout<<"Seu esporte favorito e "<<esporte<<" , "<<nome<<endl;
}