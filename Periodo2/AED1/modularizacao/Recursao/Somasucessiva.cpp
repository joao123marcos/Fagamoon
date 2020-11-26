#include<iostream>
using namespace std;

int somaSucessiva(int base, int expoente)
{
    if (expoente == 1)
    {
        return base;
    }
    else
    {
        return base + somaSucessiva(base, expoente-1);
    }
}
main()
{
    int base=0, expoente=0;

    cout<<"Multiplicacao por soma!";
   
    cout<<endl;

    cout<<"Digite um numero para a base";
    cin>>base;
    
    cout<<endl;

    cout<<"Digite um numero para a expoente";
    cin>>base;

    cout<<endl;

    for (int i = 0; i < expoente; i++)
    {
        cout<< base;

        if (i < expoente)
        {
            cout<<" + ";
        }
    }
    cout<<endl;

    cout<<"O resultado da soma e "<<somaSucessiva(base,expoente);
}
    