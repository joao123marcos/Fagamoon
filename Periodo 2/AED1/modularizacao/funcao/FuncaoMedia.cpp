#include<iostream>
using namespace std;

float FuncaoMedia(float PrimeiroNota, float SegundaNota)
{
    float media=0.0;

    media= (PrimeiroNota + SegundaNota)/2;

    return media;
}
main()
{
    float Nota1=0.0, Nota2=0.0;

    cout<<"Digite a sua primeria nota: ";
    cin>>Nota1;

    cout<<endl;

    cout<<"Digite a sua segunda nota: ";
    cin>>Nota2;

    cout<<endl;

    cout<<"A media das duas notas informada e "<<FuncaoMedia(Nota1,Nota2)<<endl;
}