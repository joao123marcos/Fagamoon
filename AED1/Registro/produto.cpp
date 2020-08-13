#include <iostream>
using namespace std;

struct mercadoria{

    int codigo;
    char nome[30];
    double preco;
    int estoque;
};
main()
{
    mercadoria p1,p2;
    
    //produto1
    cout<<"digite o codigo da mercadora 1: ";
    cin>>p1.codigo;

    cout<<"digite o nome da mercadora 1: ";
    cin>>p1.nome;

    cout<<"digite o preco da mercadora 1: ";
    cin>>p1.preco;

    cout<<"digite o estoque da mercadora 1: ";
    cin>>p1.estoque;

    //produto2
    cout<<"digite o codigo da mercadora 2: ";
    cin>>p2.codigo;


    cout<<"digite o nome da mercadora 2: ";
    cin>>p2.nome;
  
    cout<<"digite o preco da mercadora 2: ";
    cin>>p2.preco;
   
    cout<<"digite o estoque da mercadora 2: ";
    cin>>p2.estoque;

    //mostrando mercadoria_1
    cout<<"mostrando mercadoria_1"<<endl; 
    cout<<"Codigo: "<<p1.codigo<<endl;
    cout<<"Nome: "<<p1.nome<<endl;
    cout<<"Valor: "<<p1.preco<<endl;
    cout<<"Estoque: "<<p1.estoque<<endl;

    //mostrando mercadoria_2
    cout<<"mostrando mercadoria_2"<<endl;
    cout<<"Codigo: "<<p2.codigo<<endl;
    cout<<"Nome: "<<p2.nome<<endl;
    cout<<"Valor: "<<p2.preco<<endl;
    cout<<"Estoque: "<<p2.estoque<<endl;


}