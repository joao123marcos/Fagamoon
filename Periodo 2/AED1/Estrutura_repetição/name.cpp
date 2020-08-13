#include <iostream>
using namespace std;
main()
{

   int i,cont=0;
   string name;
  
   cout<<"Quantas vezes você deseja digitar seu nome?\n";
   cin>>cont;
   cin.get();//getline(cin,name);
   for(i=0;i<cont;i++)
   {
     cout<<"Escreva seu nome!\n";
     getline(cin,name);//cin>>name;
     cout<<" "<<endl;
     cout<<name<<endl;
   }
}
