#include<iostream>
using namespace std;
main()
{
    int vetor_A[1000],vetor_B[1000],vetor_C[2000],i,a=0,b=0,
    ateQuePosicaoAndou,
    posicaoindiceVetor_A,
    posicaoindiceVetor_B,
    ultimaPosicaoVetor_A=0,
    ultimaPosicaoVetor_B=0;

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
    ultimaPosicaoVetor_A=(i-1);
    cout<<endl;
    cout<<endl;
    for(i=0; i < b; i++)
    {
        cout<<"Informe um valor para preencher o vetor B: ";
        cin>>vetor_B[i];
    }
    
    ultimaPosicaoVetor_B= (i-1);
    ateQuePosicaoAndou= 0;
    posicaoindiceVetor_A= 0;
    posicaoindiceVetor_B= 0;
    i= 0;
    cout<<endl;
    cout<<endl;
    while (i < (a+b))
    {
        if (posicaoindiceVetor_A == ateQuePosicaoAndou && posicaoindiceVetor_A <= ultimaPosicaoVetor_A)
        {
            vetor_C[i]= vetor_A[posicaoindiceVetor_A];
            i++;
        }
        if (posicaoindiceVetor_B == ateQuePosicaoAndou && posicaoindiceVetor_B <= ultimaPosicaoVetor_B)
        {
            vetor_C[i]= vetor_B[posicaoindiceVetor_B];
            i++;
        }
        posicaoindiceVetor_A++;
        ateQuePosicaoAndou++;
        posicaoindiceVetor_B++;
    }
    cout<<"O vetor C, que e resultante da intercalacao dos vetores A e B; e:\n";
    cout<<endl;
    for(i=0; i < (a+b); i++)
    {
        cout<<vetor_C[i]<<" ";
    }
    cout<<endl;
    
}