#include <iostream>
using namespace std;
main ()
{
    int vetor_A[1000],vetor_B[1000],i ,vetor_c[2000],a=0,b=0,aux=0;

    do
    {
      cout<<"Informe um tamanho em posicoes para o vetor A: ";
      cin>>a;
      cout<<"Informe um tamanho em posicoes para o vetor B: ";
      cin>>b;
      if(a != b)
      {
        cout<<"vetores com tamanhos diferentes, informe tamanhos iguais";
        cout<<endl;
      }
      cout<<endl;
    } while (a != b);
    cout<<endl;
    cout<<endl;
    for(i=0; i < a; i++)
    {
       cout<<"Informe um numero para preencher o vetor A: ";
       cin>>vetor_A[i];
    }
    cout<<endl;
    cout<<endl;
    for(i=0; i< b; i++)
    {
        cout<<"Infome um numero para preencher o vetor B: ";
        cin>>vetor_B[i];
    }
    for(i=0; i < a; i++)
    {
        vetor_c[i]=vetor_A[i];
    }
    aux=i;
    for(i=0; i < b; i++)
    {
        vetor_c[aux]=vetor_B[i];
        aux++;
    }
    cout<<endl;
    cout<<endl;
    cout<<"O que foi armazenado no Vetor C foi: \n";
    cout<<endl;
    for(i=0; i < (a+b); i++)
    {
        cout<<vetor_c[i]<<" ";
    }
    cout<<endl;
    
}