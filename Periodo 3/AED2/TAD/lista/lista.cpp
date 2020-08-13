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
};

void CrialistaVazia(corpoLista &lista) //deve ser passada por referencia pois sua modificação deve ser mostrada no programa principal (main)
{
  lista.PrimeiroNo = new no();  //Alocando dinâmicamente um nó para manipula-lo mais tarde
  lista.UltimoNo = lista.PrimeiroNo; //estou fazendo ultimos e primeiros apontarem para 
                                //a mesma posição de memoria.
  lista.UltimoNo-> ponteiroParaProximoNo = NULL; 
  //Como por enquanto este é o último elemento da lista o mesmo deve apontar para Null, 
  //indicando o fim da lista.
}

void insereNoFim(corpoLista &lista, int x)
{
  lista.UltimoNo-> ponteiroParaProximoNo = new no(); //Criando um novo nó
  lista.UltimoNo = lista.UltimoNo-> ponteiroParaProximoNo;// Atualizando meu ponteiro ultimo para ir para o proximo nó.
  lista.UltimoNo-> elemento = x; //recebendo o número digitado pelo usuario no campo ELEMENTO
  lista.UltimoNo-> ponteiroParaProximoNo = NULL;
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

int somatorioElementosLista(corpoLista lista)
{
  if (verificaStatusLista(lista) == false)
  {
    no *aux;
    int somatorio = 0;

    aux = lista.PrimeiroNo-> ponteiroParaProximoNo;
    while (aux != NULL)
    {
      somatorio = somatorio + aux-> elemento;
      aux = aux-> ponteiroParaProximoNo;
    }

    delete aux;
    return somatorio;
  }

  else
  {
    return 0;
  }
}

void insereNoInicio(corpoLista &lista, int x)
{
  no *recebePonteiro, *aux;

  if (verificaStatusLista(lista))//Verifica se a lista está vazia
  {
    lista.UltimoNo-> ponteiroParaProximoNo = new no(); //Criando um novo nó
    lista.UltimoNo = lista.UltimoNo-> ponteiroParaProximoNo;// Atualizando meu ponteiro ultimo para ir para o proximo nó.
    lista.UltimoNo-> elemento = x; //recebendo o número digitado pelo usuario no campo ELEMENTO
    lista.UltimoNo-> ponteiroParaProximoNo = NULL;
  }
  else
  {
    recebePonteiro = lista.PrimeiroNo-> ponteiroParaProximoNo;
   /*Estou guardando o ponteiro porque quando eu der o NEW para criar um novo nó eu não posso perder
    a referencia do nó já criado por causa do IF */

    lista.PrimeiroNo-> ponteiroParaProximoNo = new no();// Criei o novo nó
    aux = lista.PrimeiroNo-> ponteiroParaProximoNo;
    aux-> elemento = x;
    aux-> ponteiroParaProximoNo = recebePonteiro; 
    
  }
}

void procuraElementoNaLista(corpoLista lista, int z)
{
  no *PonteiroPercorreLista;
  bool achou = false;

  if (verificaStatusLista(lista) == false)
  {
    PonteiroPercorreLista = lista.PrimeiroNo-> ponteiroParaProximoNo;
    while (PonteiroPercorreLista != NULL)
    {
      if (PonteiroPercorreLista-> elemento == z)
      {
        achou = true;
      }
      PonteiroPercorreLista = PonteiroPercorreLista-> ponteiroParaProximoNo;
    }
  }

  if (achou == true)
  {
    cout<<"Elemento encontrado na lista!"<<endl;
  }
  else
  {
    cout<<"Elemento não encontrado na lista!"<<endl;
  }
}

bool FuncaoprocuraElementosNaLista(corpoLista lista, int z, int &cont) 
{
  no *PonteiroPercorreLista;
  cont = 0;
  
  if (verificaStatusLista(lista) == false)
  {
    PonteiroPercorreLista = lista.PrimeiroNo-> ponteiroParaProximoNo;
    while (PonteiroPercorreLista != NULL)
    {
      if (PonteiroPercorreLista-> elemento == z)
      {
        cont++;
        return true;
      }
      cont++;
      PonteiroPercorreLista = PonteiroPercorreLista-> ponteiroParaProximoNo;
    }
  }
  return false;
}

int imprimeLista(corpoLista lista) 
{
  no *ImprimiLista;
  bool StatusDaLista = false;

  StatusDaLista = verificaStatusLista(lista);
  if (StatusDaLista == true)
  {
    cout<<"Não foi possivel imprimir a lista pois a mesma se encontra vazia!";
    return  0;
  }

  else
  {
  //Recebendo o primeiro ponteiro que aponta para o proximo nó que tem elemento
  ImprimiLista = lista.PrimeiroNo-> ponteiroParaProximoNo;
  cout<<"Imprimindo a lista!"<<endl;
  while (ImprimiLista != NULL)
  {
    cout<<ImprimiLista-> elemento<<" ";
    ImprimiLista = ImprimiLista->ponteiroParaProximoNo;
  }
  return 1;
  delete ImprimiLista;
  /* 
  {Uma outra maniera de implementar a função de imprimir a lista
   
   no *aux;
   if(verificaStatusLista(lista)) Nesta forma simplificada ele já verifica se o resultado deste if é verdadeiro
   {
     cout<<"A lista está vazia"
   }
   else
   {
     aux = lista.PrimeiroNo-> ponteiroParaProximoNo;
     cout<<"Imprimindo a lista!"<<endl;
     while (aux != NULL)
     {
       cout<<aux-> elemento<<" ";
       aux = aux->ponteiroParaProximoNo;
     }
     cout<<endl;
    }
  }*/
  }
}

void RemovePrimeiroElementoDaLista(corpoLista &lista)
{
  if (verificaStatusLista(lista) == true)
  {
    cout<<"Lista vazia! "<<endl;
  }

  else
  {
    int numero = 0;
    no *aux;

    aux = lista.PrimeiroNo-> ponteiroParaProximoNo;
    numero = aux-> elemento;
    
    //avançando o ponteiro primeiro para frente
    lista.PrimeiroNo = lista.PrimeiroNo-> ponteiroParaProximoNo;
    imprimeLista(lista);

    cout<<endl;
    cout<<endl;
    cout<<"O primeiro elemento da lista removido "<<numero<<endl;
  }
  cout<<"Novo somatorio da lista após a remoção do elemento é "<<somatorioElementosLista(lista)<<endl;
}

void InsereEmQualquerPosicao(corpoLista &lista, int posicao, int x)
{
  if (verificaStatusLista(lista))
  {
    cout<<"Lista vazia!";
  }

  else
  {
    int cont = 0;
    no *aux, *aux2;

    aux= lista.PrimeiroNo;
    for (cont = 1; cont < posicao; cont++)
    {
      aux= aux-> ponteiroParaProximoNo;
    }
    
    aux2 = new no();
    aux2-> elemento = x;
    aux2-> ponteiroParaProximoNo = aux-> ponteiroParaProximoNo;
    aux-> ponteiroParaProximoNo = aux2;
    imprimeLista(lista);
    delete aux, aux2;
  }
}

int contaElementosLista(corpoLista lista)
{
  no *aux;
  int cont = 0;
  
  if (verificaStatusLista(lista) == false)
  {
    aux = lista.PrimeiroNo-> ponteiroParaProximoNo;
    while (aux != NULL)
    {
      cont++;
      aux = aux-> ponteiroParaProximoNo;
    }
    return cont;
  }
  else
  {
    return cont;
  }
}

void devolvePosicaoNaLista(corpoLista lista, int z)
{
  if (verificaStatusLista(lista))
  {
    cout<<"A lista está vazia! "<<endl;
  }
  
  else
  {
    int QtdPosicaoLista = 0, cont = 0;
    no *aux;
    
    aux = lista.PrimeiroNo;
    QtdPosicaoLista = contaElementosLista(lista);
    
    if (z > QtdPosicaoLista)
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
        insereNoFim(ListaPar, aux-> elemento);
      }

      else
      {
        insereNoFim(ListaImpar, aux-> elemento);
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
        insereNoFim(listaIntercalada, percorreLista1-> elemento);
        percorreLista1 = percorreLista1-> ponteiroParaProximoNo;
      }

      if (percorreLista2 != NULL)
      {
        insereNoFim(listaIntercalada, percorreLista2-> elemento);
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

main()
{
  int numero = 0, escolha = 0;
  corpoLista lista;

  CrialistaVazia(lista);
  cout<<"Lista vazia criada com sucesso!"<<endl;
  do
  {
    cout<<" 1 - Insere no Fim da lista! "<<endl;
    cout<<" 2 - Insere no Inicio da lista! "<<endl;
    cout<<" 3 - Imprime  lista! "<<endl;
    cout<<" 4 - Renorna o somatorio dos elementos da lista! "<<endl;
    cout<<" 5 - Procura um elemento na lista (Procedimento)! "<<endl;
    cout<<" 6 - Procura um elemento na lista (Função)! "<<endl;
    cout<<" 7 - Remove o Primeiro elemento da lista! "<<endl;
    cout<<" 8 - Conta quantos elementos tem a lista! "<<endl;
    cout<<" 9 - Retorna o número que estiver na posição que você escolher! "<<endl;
    cout<<"10 - Insere elementos em uma determinada posição da lista! "<<endl;
    cout<<"11 - Divide a lista em pares e impares! "<<endl;
    cout<<"12 - Intercala duas listas! "<<endl;
    cout<<"13 - Reinicia a lista! "<<endl;
    cout<<" 0 - Sair! "<<endl;
    cout<<"Digite sua opção ";
    cin>>escolha;
    
    switch (escolha)
    {
      case 1:
      cout<<"Usuário, por favor digite um número ou zero para finalizar: ";
      cin>>numero;
      while (numero != 0)
      {
        insereNoInicio(lista,numero);
        cout<<"Usuário, por favor digite um número ou zero para finalizar: ";
        cin>>numero;
      }
      cout<<"Lista preenchida!"<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////  
    case 2:
      cout<<"Usuário, por favor digite um número ou zero para finalizar: ";
      cin>>numero;
      while (numero != 0)
      {
        insereNoFim(lista,numero);
        cout<<"Usuário, por favor digite um número ou zero para finalizar: ";
        cin>>numero;
      }
      cout<<"Lista preenchida!"<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////
    case 3:
      imprimeLista(lista);
      cout<<endl;
      break;
    ///////////////////////////////////////////////////////////////////////////// 
    case 4:
      cout<<"O somatório dos elementos desta lista é "<<somatorioElementosLista(lista)<<endl;
      cout<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////
    case 5:
      cout<<"Usuário, por favor digite um número para verificar se este se encontra na lista: ";
      cin>>numero;
      procuraElementoNaLista(lista,numero);
      cout<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////
    case 6:
      int cont = 0;
      bool retorno;
      cout<<"Usuário, por favor digite um número para verificar se este se encontra na lista: ";
      cin>>numero;
      retorno = FuncaoprocuraElementosNaLista(lista,numero, cont);
      if (retorno == true)
      {
        cout<<"Elemento encontrado na lista na posiçao "<<cont<<endl;
        cout<<endl;
      }

      else
      {
        cout<<"Elemento não encontrado na lista!"<<endl;
      }
      cout<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////
    case 7:
      RemovePrimeiroElementoDaLista(lista);
      cout<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////
    case 8:
      int cont = 0;
      cont = contaElementosLista(lista);
      cout<<"Lista lista tem "<<cont<<" elementos"<<endl;
      cout<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////
    case 9:
      int posicao = 0;
      cout<<"Informe uma posicao que o sistema vai retornar o número existente nela! ";
      cin>>posicao;
      devolvePosicaoNaLista(lista, posicao);
      cout<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////
    case 10:
      int elemento = 0, posicao = 0;
      cout<<"Qual elemento queres inserir na lista ";
      cin>>elemento;
      cout<<"Em qual posição você quer inserir ";
      cin>>posicao;
      InsereEmQualquerPosicao(lista, posicao, elemento);
      cout<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////
    case 11:
      ListaParImpar(lista);
      cout<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////
    case 12:
      corpoLista lista2;
      cout<<"Usuário preencha uma segunda lista para a intercalação"<<endl;

      cout<<"Usuário, por favor digite um número ou zero para finalizar: ";
      cin>>numero;
      while (numero != 0)
      {
        insereNoFim(lista2,numero);
        cout<<"Usuário, por favor digite um número ou zero para finalizar: ";
        cin>>numero;
      }
      cout<<"Lista preenchida!"<<endl;
      IntercalaLista(lista,lista2);
      break;
    /////////////////////////////////////////////////////////////////////////////
    case 13:
      CrialistaVazia(lista);
      cout<<"Lista reiniciada!"<<endl;
      break;
    /////////////////////////////////////////////////////////////////////////////
    default:
      cout<<"Opção inválida!! "<<endl;
    }
  } while (escolha != 0);
}