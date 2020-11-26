#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
main()
{
 
   float areacirculo=0, raio=0;

   cout<<"Digite o raio do circulo:\n";
   cin>>raio;
   areacirculo=PI * pow(raio,2);
   cout<<"A área do circulo é: " << areacirculo <<endl;
}
