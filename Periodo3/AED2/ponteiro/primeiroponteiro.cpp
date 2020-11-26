#include <iostream>
#include <math.h>
using namespace std;
main()
{
    int x,y, *p = &y;

    cin>>x;
                  
    *p = pow(x ,3);

    cout<<"O valor de y é: "<<y<<endl;
}   