#include <iostream>
using namespace std;
main()
{ 
    float nota[5],soma=0,media=0;
    int j=0;

    j=0;

    for(int i=0; i< 5; i++)
    {
         cout<<"Informe a nota:";
         cin>>nota[i];
         soma=soma + nota[i];
    }
    media=soma/5;
    for(int i=0;i< 5;i++)
    {
        if(nota[i] > media)
            j++;
    }
    cout<<"Existem "<<j<<" acima da media"<<endl;
}
    