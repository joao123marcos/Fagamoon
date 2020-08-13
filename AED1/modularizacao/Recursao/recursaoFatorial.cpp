#include<iostream>
using namespace std;
 

int fatorial(int n)
{
    if(n==0)
      return 1;
    
    else
     return n*fatorial(n-1);
    
}

main()
{
    int numero=0;

    cout<<"Digite um numero: ";
    cin>>numero;

    cout<<"O fatorial de "<<numero<<" e: "<<fatorial(numero)<<endl;
}