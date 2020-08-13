#include <iostream>
#include <math.h>
using namespace std;
main()
{

  double areacirculo=0,raio=0;
  float const PI=3.14;

  cout<<"Informe o raio do circulo:\n";
  cin>>raio;
  areacirculo=(PI*pow(raio,2));
  cout<<" A área do circulo é:" << areacirculo <<endl;
}
