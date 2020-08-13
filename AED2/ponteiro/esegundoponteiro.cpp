#include <iostream>
using namespace std;
main()
{
    int x, y=0, *p;
    
    cout<<y<<endl;
    x = 10;
    p = &x;
    y = *p;

    cout<<y<<endl;
}