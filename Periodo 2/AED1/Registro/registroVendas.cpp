#include<iostream>
using namespace std;

   struct vendas{
       double  nov,
               dez,
               jan;
   };

   struct funcionarios{
       string nomeFuncionario;
       vendas vendasMensais;
       int pontuacaoGeralFuncionarios;
   };
   //Iniciando a main - programa principal
   main()
   {
       const int tam=3;
       funcionarios vetor[tam];
       double totalVendido=0;
       int pontuacaoGeralFuncionarios;

       for( int i=0; i< tam; i++)
       {
           cout<<"Digite o nome do funcionario: ";
           cin>>vetor[i].nomeFuncionario;
           cout<<"Quando o funcionario vendeu em Novembro: ";
           cin>>vetor[i].vendasMensais.nov;
           cout<<"Quando o funcionario vendeu em Dezembro: ";
           cin>>vetor[i].vendasMensais.dez;
           cout<<"Quando o funcionario vendeu em Janeiro: ";
           cin>>vetor[i].vendasMensais.jan;
        }
        for (int i = 0; i < tam; i++)
        {
            totalVendido=totalVendido + vetor[i].vendasMensais.nov;
            totalVendido=totalVendido + vetor[i].vendasMensais.dez;
            totalVendido=totalVendido + vetor[i].vendasMensais.jan;
        }
        for (int i = 0; i < tam; i++)
        {
            pontuacaoGeralFuncionarios= (vetor[i].vendasMensais.nov +
            vetor[i].vendasMensais.dez + vetor[i].vendasMensais.jan)/100;
        }
        
        
   }