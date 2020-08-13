#include <iostream>
using namespace std;
main()
{
  int CodigoPedido=0,qtd=0;
  float conta=0;
  

 
  cout<<"Por favor informe o codigo do pedido do lanche desejado\n";
  cout<<"100 cachorro quente\n";
  cout<<"101 bauru simples\n";
  cout<<"102 bauru com ovo\n";
  cout<<"103 hamburguer\n";
  cout<<"104 chesburger\n";
  cout<<"105 refrigerante\n";
  cin>>CodigoPedido;
  
  switch(CodigoPedido)
  {
   
    case 100:
       cout<<"Por favor informe a quantidade que se quer desse produto\n";
       cin>>qtd;
       conta= qtd*1.20;
       cout<<"O valor que você terá que pagar é R$ " <<conta<<endl;
       break;
       
    case 101:
       conta= qtd*1.30;
       cout<<"O valor que você terá que pagar é R$ " <<conta<<endl;
       break;
       
    case 102:
       cout<<"Por favor informe a quantidade que se quer desse produto\n";
       cin>>qtd;
       conta= qtd*1.50;
       cout<<"O valor que você terá que pagar é R$ " <<conta<<endl;
       break;
       
    case 103:
       cout<<"Por favor informe a quantidade que se quer desse produto\n";
       cin>>qtd;
       conta= qtd*1.20;
       cout<<"O valor que você terá que pagar é R$ " <<conta<<endl;
       break;
       
    case 104:
       cout<<"Por favor informe a quantidade que se quer desse produto\n";
       cin>>qtd;
       conta= qtd*1.30;
       cout<<"O valor que você terá que pagar é R$ " <<conta<<endl;
       break;
       
    case 105:
       cout<<"Por favor informe a quantidade que se quer desse produto\n";
       cin>>qtd;
       conta= qtd*1.00;
       cout<<"O valor que você terá que pagar é R$ " <<conta<<endl;
       break;
   
    default:
       if(CodigoPedido <100 || CodigoPedido >105)
       cout<<"Codigo informado é invalido\n";
   }
  
}
