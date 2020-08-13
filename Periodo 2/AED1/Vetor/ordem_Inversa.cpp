#include <iostream>
using namespace std;
main()
{
    int vetor[8];

    for(int i=0; i < 8; i++)
    {
        cout<<"Digite um numero\n";
        cin>>vetor[i];
    }
    for(int i=7; i >= 0; i-- )
    { 
         cout<<vetor[i]<<endl;

    }
}