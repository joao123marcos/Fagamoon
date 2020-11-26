#include<iostream>
using namespace std;
main()
{
    int vetor_A[1000],vetor_B[1000],vetor_C[2000],i,a=0,b=0,j,k,m,aux=0,aux2=0;

    cout<<"Informe um tamanho para o Vetor A: ";
    cin>>a;
    cout<<"Informe um tamanho para o vetor B: ";
    cin>>b;
    cout<<endl;
    cout<<endl;
    for(i=0; i< a; i++)
    {
        cout<<"Informe um valor para preencher o vetor A: ";
        cin>>vetor_A[i];
    }
    aux=(i-1);
    cout<<endl;
    cout<<endl;
    for(i=0; i < b; i++)
    {
        cout<<"Informe um valor para preencher o vetor B: ";
        cin>>vetor_B[i];
    }
    
    aux2= (i-1);
    k= 0;
    j= 0;
    m= 0;
    i= 0;
    cout<<endl;
    cout<<endl;
    while (i < (a+b))
    {
        if (j == k && j <= aux)
        {
            vetor_C[i]= vetor_A[j];
            i++;
        }
        if (m == k && m <= aux2)
        {
            vetor_C[i]= vetor_B[m];
            i++;
        }
        j++;
        k++;
        m++;
    }
    cout<<"O vetor C, que e resultante da intercalacao dos vetores A e B; e:\n";
    cout<<endl;
    for(i=0; i < (a+b); i++)
    {
        cout<<vetor_C[i]<<" ";
    }
    cout<<endl;
    
}