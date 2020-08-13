#include<iostream>
using namespace std;

void * retornamaiorendereco(double *p, double *p2, double *p3)
{
    if ((p > p2) && (p > p3))
    {
        cout<< *p;
    }
    else if ((p2 > p) && (p2 > p3))
    {
        cout<< *p2;
    }
    else
    {
        cout<< *p3;
    }
}
main()
{
    double x = 0, y = 0, w = 0, *p = &x, *p2 = &y, *p3 = &w;

    cout<<"Digite um número: ";
    cin>>x;
    cout<<endl;

    cout<<"Digite um número: ";
    cin>>y;
    cout<<endl;

    cout<<"Digite um número: ";
    cin>>w;
    cout<<endl;

    cout<<"O maior número é "<<retornamaiorendereco(p,p2,p3)<<endl;
}