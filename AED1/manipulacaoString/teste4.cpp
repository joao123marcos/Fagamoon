#include <iostream>
using namespace std;
main()
{
    string s1("Classes-objetos");

    string s2 (s1,0,8);
    cout<< s2 <<endl;

    string s3(s1,8,7);
    cout<< s3 <<endl;
}