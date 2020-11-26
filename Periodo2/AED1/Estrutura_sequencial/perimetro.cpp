#include <iostream>
using namespace std;
main()
{
  float lado1=0, lado2=0, perimetro=0,area=0;

  cout<<"Informe o primeiro lado do retângulo:\n";
  cin>>lado1;
  cout<<"Informe o segundo lado do retângulo:\n";
  cin>>lado2;
  perimetro=(lado1+lado2)*2;
  area=lado1*lado2;
  
  cout<<"A área do retângulo é: " << area <<"; e o perimetro é: " << perimetro <<endl;

}
