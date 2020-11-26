#include <iostream>
using namespace std;
main()
{
    char str[11] = "ABCDEFGHIJ";

    string s2(str, str+5);
    cout<< s2 <<endl;

    string s3(str+5, str+10);
    cout<< s3 <<endl;
}