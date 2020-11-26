#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;
main()
{
    ofstream arquivo;
    arquivo.open("teste.txt");

    int vet[100];
  
    srand (time(NULL));


    for (int i = 0; i < 100; i++)
    {
        arquivo<<vet[i]<<endl;
    }
    
}