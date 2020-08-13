#include <iostream>
using namespace std;
int main()
{
  int a,b,resultado;
  
  a=0;
  b=0;
  resultado=0;
  
  cout<<"Digite um numero "<<endl;
  cin>>a;
  cout<<"Digite outro número diferente do primeiro informado:\n";
  cin>>b;
  if(a!=b)
     resultado= a+b;
     
  else
  {        
    do{
        cout<<"Os numeros são iguais, digite outro numero!"<<endl;
        cin>>b;
      }
      while (a==b);
      resultado=a+b;
  }  
  cout<<"O resultado da soma é "<<resultado<<endl;

}
