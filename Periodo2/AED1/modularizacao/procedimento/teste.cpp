#include<iostream>
using namespace std;

void contador(int num, int cont)
{
    cout<<cont<<" ";
    if (num > cont)
     contador(num, ++cont);
}
main()
{
    int num=0, cont=0;

    cout<<"DIgite um numero: ";
    cin>>num;

    contador(num,cont);
    cout<<endl;
}
