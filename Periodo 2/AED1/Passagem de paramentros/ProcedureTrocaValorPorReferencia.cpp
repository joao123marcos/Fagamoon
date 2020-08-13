#include<iostream>
using namespace std;

void TrocaValor(int &a, int &b)
{
    int aux=0;

    aux=a;
    a=b;
    b=aux;
}
main()
{
    int a=0, b=0;

    cout<<"Digite um numero: ";
    cin>>a;

    cout<<endl;

    cout<<"Digite um outro numero, de preferencia nao repita os numeros: ";
    cin>>b;

    cout<<endl;

    cout<<"Imprimindo o pimeiro numero! "<<a<<endl;

    cout<<endl;

    cout<<"Imprimindo o segundo numero! "<<b<<endl;

    cout<<endl;
 
    TrocaValor(a,b);

    cout<<endl;

    cout<<"Os numero informados trocam de posicoes! "<<a<<' '<<b<<endl;
}