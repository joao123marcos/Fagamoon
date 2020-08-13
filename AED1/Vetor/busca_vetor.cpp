#include <iostream>
using namespace std;
main()
{
    int b=0,a=0,x,i;
    bool resultado;

    resultado=false;

    cout<<"Informe o tamanho do vetor desejado: ";
    cin>>a;
    
    int vetor[a];

    for( i=0; i< a; i++)
    {
        cout<<"Digite um valor para preencher o vetor: ";
        cin>>vetor[i];
    }
    cout<<"Informe um numero para saber se este se encontra no vetor: ";
    cin>>x;
    for(i=0; i< a; i++)
    {
        if(vetor[i] == x)
        {
            resultado=true;
            b=i;
        }
    }
    if(resultado == true)
       cout<<"No vetor existe o numero que voce digitou, ele esta na "<<b<<"º posicao do vetor"<<endl;
    
    else
      cout<<"numero nao encontrado no vetor"<<endl;
}