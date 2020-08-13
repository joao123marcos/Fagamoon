#include<iostream>
using namespace std;

float FuncaoDevolveMaior(float primeiroNumero, float segundoNumero)
{
    if (primeiroNumero > segundoNumero)
     return primeiroNumero;
    
    else 
     return segundoNumero;
        
}
main()
{
    float numero=0.0, numero1=0.0;

    do
    {
       cout<<"Digite um numero qualquer: ";
       cin>>numero;

       cout<<endl;
       
       cout<<"Digite um outro numero diferente o primeiro informado: ";
       cin>>numero1;

       cout<<endl;
    } while (numero == numero1);

    cout<<endl;

    cout<<"O maior numero que voce informou e "<<FuncaoDevolveMaior(numero, numero1)<<endl;
}