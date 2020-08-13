#include <iostream>
using namespace std;
main()
{
    int x,a;
    cin>>x;
    cin>>a;
    cout<<x<<endl;     //mostrando o valor que está armazenado em x (conteúdo)
    cout<<&x<<endl;   // mostrando o endereço de x com o operador &
    
    int *joao = &x;  //criei um ponteiro e atribui a ele o endereço de x
                    // aqui vai ressaltar que eu inicializei o ponteiro na declaração
    cout<<"//////////"<<endl;

    cout<<x<<endl;     //imprimindo o conteúdo de x
    cout<<&x<<endl;    //imprimindo o endereço de x
    cout<<joao<<endl;  //imprimindo o conteúdo do ponteiro
    cout<<*joao<<endl; //imprimindo o que o ponteiro aponta
    
    cout<<"//////////"<<endl;
    int *marcos;
    /*
    depois de algumas linhas de código
    */
    marcos = &a;   //nesta linha de código eu estou inicializando o ponteiro marcos...
    cout<<a<<endl;      //imprimindo o conteúdo da variável a
    cout<<&a<<endl;     //imprimindo o endereço da variável a
    cout<<marcos<<endl; //imprimindo o conteúdo do ponteiro marcos
    cout<<*marcos<<endl;//imprimindo o que o ponteiro aponta

    cout<<"/////////////////////////////////////////////////////////"<<endl;
    int c;

    cin>>c;

    *joao = c;   //Neste momento eu estou alterando a variável que joao está apontando 
                 //com o operador de indireção (*)

    cout<<joao<<endl;
    cout<<*joao<<endl;
    cout<<"Novo valor para a variável x é "<<x<<endl;
}