#include <iostream>
using namespace std;
main()
{
   int matrizA[1000][1000], matrizB[1000][1000],i,j,
   linhamatrizA=0,
   linhamatrizB=0,
   colunamatrizA=0,
   colunamatrizB=0,
   contDiferente=0;

   cout<<"Digite um numero para as linhas da matriz A: ";
   cin>>linhamatrizA;
   cout<<endl;
   cout<<"Digite um numero para as colunas da matriz A: ";
   cin>>colunamatrizA;
   cout<<endl;
   cout<<endl;
   cout<<"Digite um numero para as linhas da matriz B: ";
   cin>>linhamatrizB;
   cout<<endl;
   cout<<"Digite um numero para as colunas da matriz B: ";
   cin>>colunamatrizB;
   cout<<endl;
   cout<<endl;
   if (linhamatrizA == linhamatrizB && colunamatrizA == colunamatrizB)
   {
      for(i=0; i < linhamatrizA; i++)
      {
          for(j=0; j < colunamatrizA; j++)
          {
             cout<<"Digite um numero para preencher a matriz A na linha "<<i<<" coluna "<<j<<" :";
             cin>>matrizA[i][j];
          }
      }
      cout<<endl;
      cout<<"Imprimindo a matriz A"<<endl;
      cout<<endl;
      for(i=0; i < linhamatrizA; i++)
      {
         for(j=0; j < colunamatrizA; j++)
         {
            cout<<matrizA[i][j]<<" ";
         }
         cout<<endl;
      }
      cout<<endl;
      cout<<endl;
      for(i=0; i < linhamatrizB; i++)
      {
         for(j=0; j < colunamatrizB; j++)
         {
           cout<<"Digite um numero para preencher a matriz B na linha "<<i<<" coluna "<<j<<" :";
           cin>>matrizB[i][j];
         }
      }
      cout<<endl;
      cout<<"Imprimindo a matriz B"<<endl;
      cout<<endl;  
      for(i=0; i < linhamatrizB; i++)
      {
        for(j=0; j < colunamatrizB; j++)
        {
           cout<<matrizB[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<endl;
      cout<<endl;
      for(i=0; i < linhamatrizA; i++)
      {
         for(j=0; j < colunamatrizA; j++)
         {
             if (matrizA[i][j] != matrizB[i][j])
               contDiferente++;
           
         }
      }
   }   
   if (linhamatrizA == linhamatrizB && colunamatrizA == colunamatrizB && contDiferente > 0)
        cout<<"As matrizes tem tamanhos iguais,mas os elementos  sao diferentes"<<endl;
   
   else if(linhamatrizA == linhamatrizB && colunamatrizA == colunamatrizB && contDiferente == 0)   
       cout<<"As matrizes  tem tamanhos iguais e elementos iguais"<<endl;
   
   else
   {
       cout<<"As matrizes nao possuem mesmo tamanho, mesmo que voce digitasse alguns elementos iguais"<<endl;
       cout<<"so pelo fato de terem tamanhos diferentes ja nao seriam consideradas iguais "<<endl;;
   }
  
}