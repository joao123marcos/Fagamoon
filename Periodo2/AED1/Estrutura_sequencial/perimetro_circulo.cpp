#include <iostream>
#define PI 3.1415
using namespace std;
main()
{
  double perimetro=0,raio=0;
 
  cout<<"Informe o raio do circulo:\n";
  cin>>raio;

  perimetro=2*PI*raio;

  cout<<"O perimetro do circulo informado é " << perimetro <<endl;
}
