#include <iostream>
using namespace std;
main ()
{
    struct classe_produto
    {
        string nome, codigo;
        float preco;
        int estoque;
    };

    classe_produto produto[2];
    float maior_preco;
    int maior_estoque;

    for(int i=0; i < 2; i++)
    {
        cout<<"Digite um nome para seu produto: ";
        cin>>produto[i].nome;

        cout<<endl;

        cout<<"Digite um codigo para seu produto: ";
        cin>>produto[i].nome;

        cout<<endl;

        cout<<"Digite um preço para seu produto: ";
        cin>>produto[i].preco;

        cout<<endl;

        cout<<"Digite a quantidade em estoque para seu produto: ";
        cin>>produto[i].estoque;
    }

    maior_preco= produto[0].preco;
    maior_estoque= produto[0].estoque;

    for (int i = 0; i < 2; i++)
    {
        if (produto[i].preco > maior_preco)
        {
            maior_preco= produto[i].preco;
        }
        if (produto[i].estoque > maior_estoque )
        {
           maior_estoque= produto[i].estoque;
        }    
    }

    cout<<"O produto de maior preço "<<maior_preco<<endl;
    cout<<"O produto de maior estoque "<<maior_estoque<<endl;
}
 
   