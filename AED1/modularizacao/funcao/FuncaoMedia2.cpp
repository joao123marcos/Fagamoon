#include<iostream>
using namespace std;

struct aluno{
    string nome;
    float nota1=0.0, nota2=0.0, nota3=0.0;
};

float funcaoMEdia(float n1, float n2, float n3)
{
    float media= 0.0;

    media= (n1+ n2+ n3)/3;

    return media;
}
main()
{
   aluno vetor_aluno[10000];
   int i=0,cont_notas=0;
   float media=0.0;

   cout<<"Digite o nome do aluno ou FIM para finalizar: ";
   cin>>vetor_aluno[i].nome;

   while (vetor_aluno[i].nome != "FIM")
   {
      
      cout<<"Digite a primeira nota do aluno: ";
      cin>>vetor_aluno[i].nota1;
      

      cout<<"Digite a segunda nota do aluno: ";
      cin>>vetor_aluno[i].nota2;
      

      cout<<"Digite a terceira nota do aluno: ";
      cin>>vetor_aluno[i].nota3;
      cout<<endl;

      media=funcaoMEdia(vetor_aluno[i].nota1, vetor_aluno[i].nota2, vetor_aluno[i].nota3);
      cout<<endl;
      
      cout<<vetor_aluno[i].nome<<" sua media foi "<<media<<endl;
      cout<<endl;
      
      cout<<"Digite o nome do aluno ou FIM para finalizar: ";
      cin>>vetor_aluno[i].nome;
   }

}