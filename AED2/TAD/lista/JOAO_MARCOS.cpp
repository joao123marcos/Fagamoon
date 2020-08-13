#include <iostream>
using namespace std;

struct no
{
  int elemento;
  no *ponteiroParaProximoNo;
};

struct corpoLista
{
  no *PrimeiroNo;
  no *UltimoNo;
  int tamanho;
};

void CrialistaVazia(corpoLista &lista) //deve ser passada por referencia pois sua modificação deve ser mostrada no programa principal (main)
{
  lista.PrimeiroNo = new no();  //Alocando dinâmicamente um nó para manipula-lo mais tarde
  lista.UltimoNo = lista.PrimeiroNo; //estou fazendo ultimos e primeiros apontarem para 
                                //a mesma posição de memoria.
  lista.UltimoNo-> ponteiroParaProximoNo = NULL; 
  //Como por enquanto este é o último elemento da lista o mesmo deve apontar para Null, 
  //indicando o fim da lista.
  lista.tamanho = 0;
}

bool verificaStatusLista(corpoLista lista)
{
  if (lista.PrimeiroNo == lista.UltimoNo)
  {
    return true ;//Então a lista está vazia
  }
  else
  {
    return false;
  }
}

int insereNaLista(corpoLista &lista, int x)
{
  
  lista.UltimoNo-> ponteiroParaProximoNo = new no(); //Criando um novo nó
  lista.UltimoNo = lista.UltimoNo-> ponteiroParaProximoNo;// Atualizando meu ponteiro ultimo para ir para o proximo nó.
  lista.UltimoNo-> elemento = x; //recebendo o número digitado pelo usuario no campo ELEMENTO
  lista.UltimoNo-> ponteiroParaProximoNo = NULL;
  lista.tamanho++;

  return lista.tamanho;
}

void ListaParImpar(corpoLista lista)
{
  if (verificaStatusLista(lista))
  {
    cout<<"Não existe Par nem Impar numa lista vazia, programa finalizado!"<<endl;
  }
  
  else
  {
    corpoLista ListaPar, ListaImpar;
    no *aux, *ImprimiLista;
    
    aux = lista.PrimeiroNo-> ponteiroParaProximoNo;
    
    CrialistaVazia(ListaPar);
    CrialistaVazia(ListaImpar);
    
    while (aux != NULL)
    {
      if (aux-> elemento % 2 == 0)
      {
        insereNaLista(ListaPar, aux-> elemento);
      }

      else
      {
        insereNaLista(ListaImpar, aux-> elemento);
      }
      aux = aux->ponteiroParaProximoNo;
    }
    
    ImprimiLista = ListaPar.PrimeiroNo-> ponteiroParaProximoNo;
    cout<<"Imprimindo a lista Par!"<<endl;
    while (ImprimiLista != NULL)
    {
      cout<<ImprimiLista-> elemento<<" ";
      ImprimiLista = ImprimiLista->ponteiroParaProximoNo;
    }
    cout<<endl;
    
    ImprimiLista = ListaImpar.PrimeiroNo-> ponteiroParaProximoNo;
    cout<<"Imprimindo a lista Impar!"<<endl;
    while (ImprimiLista != NULL)
    {
      cout<<ImprimiLista-> elemento<<" ";
      ImprimiLista = ImprimiLista->ponteiroParaProximoNo;
    }
    cout<<endl;
    delete ImprimiLista;
  }
}

void imprimeLista(corpoLista lista)
{
  no *ImprimiLista;
 
  if (verificaStatusLista(lista))
  {
    cout<<"Não foi possivel imprimir a lista pois a mesma se encontra vazia!";
  }

  else
  {
  //Recebendo o primeiro ponteiro que aponta para o proximo nó que tem elemento
  ImprimiLista = lista.PrimeiroNo-> ponteiroParaProximoNo;
  cout<<"Imprimindo a lista!"<<endl;
  while (ImprimiLista != NULL)
  {
    cout<<ImprimiLista-> elemento<<" ";
    ImprimiLista = ImprimiLista-> ponteiroParaProximoNo;
  }
  delete ImprimiLista;
  }
  cout<<endl;
}

void IntercalaLista(corpoLista x, corpoLista y)
{
  if ( (verificaStatusLista(x)) && (verificaStatusLista(y)) )
  {
    cout<<"Uma das lista, ou as duas, estão vazias; por isso não há como fazer a intercalação."<<endl;
  }

  else
  {
    corpoLista listaIntercalada;
    no *percorreLista1, *percorreLista2, *ImprimiLista;

    cout<<"Lista que receberá a intercalação criada com sucesso!"<<endl;
    CrialistaVazia(listaIntercalada);

    percorreLista1 = x.PrimeiroNo-> ponteiroParaProximoNo;
    percorreLista2 = y.PrimeiroNo-> ponteiroParaProximoNo;

    while (percorreLista1 != NULL || percorreLista2 != NULL)
    {
      if (percorreLista1 != NULL)
      {
        insereNaLista(listaIntercalada, percorreLista1-> elemento);
        percorreLista1 = percorreLista1-> ponteiroParaProximoNo;
      }

      if (percorreLista2 != NULL)
      {
        insereNaLista(listaIntercalada, percorreLista2-> elemento);
        percorreLista2 = percorreLista2-> ponteiroParaProximoNo;
      }
    }

    ImprimiLista = listaIntercalada.PrimeiroNo-> ponteiroParaProximoNo;
    cout<<"Imprimindo a lista intercalada!"<<endl;
    while (ImprimiLista != NULL)
    {
      cout<<ImprimiLista-> elemento<<" ";
      ImprimiLista = ImprimiLista-> ponteiroParaProximoNo;
    }
    delete ImprimiLista;
  }
  cout<<endl;
}

int somatorioElementosLista(corpoLista lista)
{
  no *aux;
  int somatorio = 0;
  
  if (verificaStatusLista(lista) == false)
  {
    aux = lista.PrimeiroNo-> ponteiroParaProximoNo;
    while (aux != NULL)
    {
      somatorio++;
      aux = aux->ponteiroParaProximoNo;
    }
    return somatorio;
  }
  else
  {
    return somatorio;
  }
}

void procuraElementosNaLista(corpoLista lista, int z)
{
  if (verificaStatusLista(lista))
  {
    cout<<"A lista está vazia! "<<endl;
  }
  
  else
  {
    int somatorio = 0, cont = 0;
    no *aux;
    
    aux = lista.PrimeiroNo-> ponteiroParaProximoNo;
    somatorio = somatorioElementosLista(lista);
    
    if (z > somatorio)
    {
      cout<<"Usuário, a posição que você passou está além da lista"<<endl;
    }

    else
    {
      for ( cont = 1; cont <= z; cont++)
      {
        aux= aux->ponteiroParaProximoNo;
      }
      cout<<"Na posição "<<z<<", que voçê digitou, está o elemento "<<aux->elemento<<endl;
    }
  }
  
}

main()
{
    corpoLista lista1, lista2;
    int tamanho = 0, numero, tamanho1 = 0, escolha = 0;

    CrialistaVazia(lista1);
    cout<<"Lista vazia criada com sucesso!"<<endl;
    cout<<endl;

    cout<<"Usuário, digite um número ou 0 para finalizar: ";
    cin>>numero;
    
    while (numero != 0)
    {
        tamanho = insereNaLista(lista1, numero);
        cout<<"Usuário, digite um número ou 0 para finalizar: ";
        cin>>numero;
    }
    cout<<endl;
    imprimeLista(lista1);

    cout<<"O tamanho da lista é "<<tamanho<<endl;
    cout<<endl;
    
    //Preenchendo a lista 2
    CrialistaVazia(lista2);
    cout<<"Usuário, agora você deve digitar outros valores para preecher uma nova lista!"<<endl;
    
    cout<<"Digite um número ou 0 para finalizar: ";
    cin>>numero;

     while (numero != 0)
    {
        tamanho1 = insereNaLista(lista2, numero);
        cout<<"Digite um número ou 0 para finalizar: ";
        cin>>numero;
    }
    cout<<endl;

    imprimeLista(lista2);
    cout<<endl;

    IntercalaLista(lista1,lista2);
     
    ListaParImpar(lista1);
}

