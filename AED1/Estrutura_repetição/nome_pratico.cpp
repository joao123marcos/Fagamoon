#include <iostream>
using namespace std;
main()
{

   int i, cont=0;
   string name;

   cout<<"Informe seu nome!\n";
   getline(cin,name);
   cout<<"Quantas vezes desejas que seu nome apareça na tela?\n";
   cin>>cont;

   for(i=0; i< cont; i++)
   {
     cout<< name <<endl;
   }

}
