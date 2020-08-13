#include<iostream>
using namespace std;

void procedureMaior_numero(int a ,int b)
{
    if (a > b)
    {
        cout<<"O maior numero é "<<a<<endl;
    }
    else
    {
        cout<<"Esse e o menor numero "<<b<<endl;
    }   
}
main()
{
    int n1,n2;

    cout<<"Informe um numero: ";
    cin>>n1;
    cout<<"Informe outro numero: ";
    cin>>n2;
    cout<<endl;

    procedureMaior_numero(n1,n2);
}