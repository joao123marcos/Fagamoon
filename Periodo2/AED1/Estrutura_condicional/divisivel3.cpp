#include <iostream>
using namespace std;
main()
{
  int n1,div,u,c,d;

  cout<<"Informe um número de ate três algarismos\n";
  cin>>n1;
  div= n1/100;
  cin>>div;
  if(div > 0)
  {
    d= n1 - (div *100);
    cin>>d;
    d= d/10;
    cin>>d;
    u=(n1 - (div*100)) - (d * 10);
    cin>>u;
    if((div + d + u)% 3 ==0)
         cout<<"O numero é divisivel por 3 "<< endl;
    else
       cout<<"O número não é divisivel por 3"<<endl;
   }
   
   else
   {
    div=n1/10;
    if(div >0)
    {
     d= n1- (div*10);
     if((div + d) % 3 == 0)
         cout<<"O número é divisivel por 3 " <<endl;
     else
         cout<<"O número não é divisivel por 3 "<< endl;
    
    }
   
   }
   
   if(n1 % 3 ==0)
         cout<<"O número é divisivel por 3 "<<endl;

   else
         cout<<"O número não é divisivel por 3 "<<endl;
}

      

