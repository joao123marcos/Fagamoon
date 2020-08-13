#include<iostream>
using namespace std;

//Os dados que soma ira receber e devolver estao sendo passados por referencia
void ProcedureSoma(int num1, int num2, int &soma)
{
    soma= num1 + num2;
}
main()
{
    int numero1=0, numero2=0, soma=0;

    cout<<"Digite um numero inteiro qualquer: ";
    cin>>numero1;

    cout<<endl;

    cout<<"Digite um outro numero inteiro qualquer, de preferencia nao repetir: ";
    cin>>numero2;

    cout<<endl;
    
    ProcedureSoma(numero1, numero2, soma);

    cout<<endl;

    cout<<"O resultado da soma dos dois numero informados e "<<soma<<endl;
}