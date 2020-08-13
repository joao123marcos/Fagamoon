#include <iostream>
using namespace std;

struct TipoAluno
{
    string nome;
    int periodo;
    float mediaNotas;
};

struct no
{
    TipoAluno elemento;
    no *ponteiroParaProximoNo;
};

struct Tipolista
{
    no *PrimeiroNo, *UltimoNo;
};

void CriaListaVazia(Tipolista &lista) //deve ser passada por referencia pois sua modificação deve ser mostrada no programa principal (main)
{
  lista.PrimeiroNo = new no();  //Alocando dinâmicamente um nó para manipula-lo mais tarde
  lista.UltimoNo = lista.PrimeiroNo; //estou fazendo ultimos e primeiros apontarem para 
                                //a mesma posição de memoria.
  lista.UltimoNo-> ponteiroParaProximoNo = NULL; 
  //Como por enquanto este é o último elemento da lista o mesmo deve apontar para Null, 
  //indicando o fim da lista.
}

void insereNoFim(Tipolista &lista, TipoAluno x)
{
  lista.UltimoNo-> ponteiroParaProximoNo = new no(); //Criando um novo nó
  lista.UltimoNo = lista.UltimoNo-> ponteiroParaProximoNo;// Atualizando meu ponteiro ultimo para ir para o proximo nó.
  lista.UltimoNo-> elemento = x; //recebendo o número digitado pelo usuario no campo ELEMENTO
  lista.UltimoNo-> ponteiroParaProximoNo = NULL;
}

void imprimeLista(Tipolista lista) 
{
  no *ImprimiLista;

  //Recebendo o primeiro ponteiro que aponta para o proximo nó que tem elemento
  ImprimiLista = lista.PrimeiroNo-> ponteiroParaProximoNo;
  cout<<"Imprimindo a lista!"<<endl;
  while (ImprimiLista != NULL)
  {
    cout<<"Nome do aluno: "<<ImprimiLista-> elemento.nome<<" ";
    cout<<"Período que o aluno está: "<<ImprimiLista-> elemento.periodo<<" ";
    cout<<"A média de notas: "<<ImprimiLista-> elemento.mediaNotas<<endl;
    ImprimiLista = ImprimiLista->ponteiroParaProximoNo;
  }
  delete ImprimiLista;
}

main()
{
  Tipolista listaAluno;
  string nome;
  TipoAluno aluno;
    
  CriaListaVazia(listaAluno);
  cout<<"Lista vazia criada com sucesso!"<<endl;

  cout<<"Digite um nome ou 0 para finalizar ";
  cin>>aluno.nome;
  while (aluno.nome != "0")
  {
    cout<<"Digite o periodo ";
    cin>>aluno.periodo;
    cout<<"Digite a media de notas ";
    cin>>aluno.mediaNotas;

    insereNoFim(listaAluno, aluno);
    cout<<"Digite um nome ou 0 para finalizar ";
    cin>>aluno.nome;
  }
  imprimeLista(listaAluno);
}

