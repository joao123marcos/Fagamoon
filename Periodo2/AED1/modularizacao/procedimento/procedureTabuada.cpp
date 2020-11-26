#include<iostream>
using namespace std;

void tabuada(int numero=0)
{
    for (int i = 0; i < 11; i++)
    {
        cout<<numero<<" X "<<i<<" = "<<numero*i<<endl;
    }
    
}
main()
{
    int algarismo=0;

    cout<<"Informe um numero para a tabuada: ";
    cin>>algarismo;

    tabuada(algarismo);
}