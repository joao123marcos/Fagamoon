#include<iostream>
using namespace std;

int Ricci(int n1, int n2, int n)
{
    if (n == 0)
    {
        return n1;
    }
    else if (n == 1)
    {
        return n2;
    }
    else
    {
        return Ricci(n1, n2, n-1) + Ricci(n1, n2, n-2);
    }
}
main()
{
    int n=0, n1=0, n2=0;

    cout<<"Qual e o primeiro elemento que voce deseja para a sequencia de Ricci";
    cin>>n1;

    cout<<endl;
  
    cout<<"Qual e o segundo elemento que voce deseja para a sequencia de Ricci";
    cin>>n2;

    cout<<endl;
  
    cout<<"Quantos elementos que voce quer que sejam impressos na tela";
    cin>>n;
    
    cout<<endl;

    cout<<"A sequencia de Ricci levando em consideracao os dados que voce informou e ";

    cout<<endl;

    for (int i = 0; i < n; i++)
    {
       cout<<Ricci(n1, n2, i);
    } 

}