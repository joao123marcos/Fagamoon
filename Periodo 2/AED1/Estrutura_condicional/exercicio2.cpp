#include <iostream>
using namespace std;
main()
{
  int voto=0,votonulo=0,votobranco=0,candidato1=0,candidato2=0,candidato3=0,i=0;
  string maior;
  
  cout<<"Informe seu voto (1 para o candidato 1 ; 2 para o candidato 2; 3 para o candidato 3) ou -1 para finalizar\n";
  cin>>voto;
  while((voto >= 0) && (candidato1==candidato2 || candidato2==candidato3 || candidato1==candidato3))
  {
   i++;
   if(voto == 0)
     votobranco++;
  
   else if(voto == 1)
     candidato1++;
     
   else if(voto == 2)
     candidato2++;
     
   else if(voto == 3)
     candidato3++;
     
   else if(voto == 4)
     votonulo++;
     
   cout<<"Informe seu voto (1 para o candidato 1 ; 2 para o candidato 2; 3 para o candidato 3) ou -1 para finalizar\n";
   cin>>voto;
  }
  if(i == 0)
     cout<<"Programa encerrado pois digitou um voto invalido\n";
  
  else
  {
   if(candidato1 > candidato2 && candidato1 > candidato3)
      maior="candidato1";
      
   else if(candidato2 > candidato3 && candidato2 > candidato1)
      maior="candidato2";
      
   else
      maior="candidato3";
      
  cout<<"O candidato vencedor foi "<<maior<<endl; 
  cout<<"O numero de eleitores que compareceram as urnas foram "<<i<<endl;
  cout<<"O numero de votos em branco foram "<<votobranco<<endl;
  cout<<"O numero nulo foram "<<votonulo<<endl;
  }
}
