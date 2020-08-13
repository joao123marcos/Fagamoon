#include<iostream>
using namespace std;

void ProcedureMaior( float num1, float num2, bool &maior)
{
    maior=false;

    if (num1 > num2)
        maior=true;
}
main()
{
    float numero1=0.0, numero2=0.0;
    bool E_Maior=false;

    cout<<"Digite dois numeros para verificar quem e o maior\n";
    cin>>numero1;
    cin>>numero2;

    cout<<endl;

    ProcedureMaior(numero1, numero2, E_Maior);

    cout<<endl;

    if (E_Maior == true)
     cout<<"O primeiro numero que voce informou e maior que o segundo!"<<endl;
    
    else
     cout<<"O primeiro numero que voce informou nao e maior que o segundo ou os numeros sao iguais"<<endl;
    
}