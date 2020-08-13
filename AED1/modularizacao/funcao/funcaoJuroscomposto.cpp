#include<iostream>
#include<cmath>
using namespace std;

float jurosComposto(float capital=0.0, float taxa=0.0, float tempo=0.0)
{
    float montante=0.0;

    montante= capital * pow((1+taxa),tempo);
    return montante;
}
main()
{
    float capitalAplicado=0.0, taxaIncidida=0.0, meses=0.0,montante=0.0;

    cout<<"Informe o capital aplicado: ";
    cin>>capitalAplicado;
    
    cout<<endl;
    cout<<endl;
    
    cout<<"Informe taxa ou juros aplicado sobre o capital (ja em percentual): ";
    cin>>taxaIncidida;
    
    cout<<endl;
    cout<<endl;
    
    cout<<"Quanto tempo? (em meses): ";
    cin>>meses;
    
    cout<<endl;
    cout<<endl;
    cout<<"Calculo do seu montante!!!"<<endl;

    cout<<endl;
    cout<<endl;
  
    montante=jurosComposto(capitalAplicado,taxaIncidida,meses);

    cout<<"O montante da sua aplicacao ficou em R$ "<<montante<<endl;  
}
