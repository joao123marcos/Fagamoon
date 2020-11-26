//AULA DE AED2 E LAB2 - 28/04/2020 - PROFA. CRIS 
//LINK PARA O VIDEO DA AULA DE AED https://drive.google.com/file/d/1A-mfCntfb7Otjhg6PM-3C8glp_7dcRHq/view?usp=sharing
//LINK PARA O VIDEO DA AULA DE LAB https://drive.google.com/file/d/1CoTqrq8AHyZk9NYDuuXiMqh0fCJraYz8/view?usp=sharing

// ESTRUTURA DE DADOS LISTA ENCADEADA

#include<iostream>
using namespace std;

struct tipoNo
{
	int item;
	tipoNo *prox;
};
struct tipoLista
{
	tipoNo *primeiro;
	tipoNo *ultimo;
};	
/*procedimento inicializaLista(var lista: tipoLista);
inicio
	inicializaPonteiro(lista.primeiro);  // lista.primeiro = new tipoNo;
	lista.ultimo = lista.primeiro;
	lista.ultimo->prox = nulo;
fim;
*/
void inicializaLista(tipoLista &lista)
{
	lista.primeiro = new tipoNo;
	lista.ultimo = lista.primeiro;
	lista.ultimo->prox = NULL;
}
/*
procedimento insereNoFim(var lista: tipoLista; x: inteiro);
inicio
	inicializaPonteiro(lista.ultimo->prox); // lista.ultimo->prox = new tipoNo;
	lista.ultimo = lista.ultimo->prox;
	lista.ultimo->item = x;
	lista.ultimo->prox = nulo;
fim;
*/
void insereNoFim(tipoLista &lista, int x)
{
	lista.ultimo->prox = new tipoNo;
	lista.ultimo = lista.ultimo->prox;
	lista.ultimo->item = x;
	lista.ultimo->prox = NULL;
}

/*
fun��o listaVazia(lista: tipoLista): l�gico;
inicio
	se(lista.primeiro == lista.ultimo) ent�o
		retorna verdadeiro;
	sen�o
		retorna falso;
	fim-se;
fim;
*/

bool listaVazia(tipoLista lista)
{
	if(lista.primeiro == lista.ultimo)
		return true;
	else
		return false;
}

/*
procedimento imprimeLista(lista: tipoLista);
declare
	aux: ponteiro para tipoNo;
inicio
	se(listaVazia(lista)) ent�o
		escreva("A lista estah vazia");
	sen�o
		aux = lista.primeiro->prox;
		enquanto (aux != NULL) fa�a
			escreva(aux->item);
			aux = aux->prox; 
		fim-enquanto;
	fim-se;
fim;
*/
void imprimeLista(tipoLista lista)
{
	tipoNo *aux;
	if(listaVazia(lista) == true)
		cout << "Lista vazia" << endl;
	else
	{
		aux = lista.primeiro->prox;
		while(aux != NULL)
		{
			cout << aux->item << " ";
			aux = aux->prox;
		}
		cout << endl;
	}
	delete aux;
}

/*procedimento buscaNalistaProc(lista:tipoLista; n: inteiro);
declare
	aux: ponteiro para tipoNo;
	achou: l�gico;
inicio
	achou = false;
	se(listaVazia(lista) == falso) ent�o
		aux = lista.primeiro->prox;
		enquanto (aux != nulo) fa�a
			se (aux->item == n) ent�o
				achou = verdadeiro;
			fim-se;
			aux = aux->prox;
		fim-enquanto;
		
		se (achou == verdadeiro) ent�o
			escreva("Elemento encontrado" );
		sen�o
			escreva("Elemento n�o encontrado");
		fim-se;
	fim-se;
fim;
*/
void buscaNaListaProc(tipoLista lista, int n)
{
	tipoNo *aux;
	bool achou;
	achou = false;
	if(listaVazia(lista) == false) 
	{
		aux = lista.primeiro->prox;
		while(aux != NULL) 
		{
			if(aux->item == n) 
				achou = true;
			aux = aux->prox;
		}
		if (achou == true) 
			cout << "Elemento encontrado" << endl;
		else
			cout << "Elemento nao encontrado" << endl;
	}
}



/* Fun��o que busca na lista e retorna verdadeiro ou falso
fun��o buscaNalistaFuncBool(lista:tipoLista; n: inteiro): l�gico;
declare
	aux: ponteiro para tipoNo;
inicio
	se(listaVazia(lista) == falso) ent�o
		aux = lista.primeiro->prox;
		enquanto (aux != nulo) fa�a
			se (aux->item == n) ent�o
				retorna verdadeiro;
			fim-se;
			aux = aux->prox;
		fim-enquanto;
	fim-se;
	retorna falso;
fim;
*/

bool buscaNaListaFuncBool(tipoLista lista, int n)
{
	tipoNo *aux;
	
	if(listaVazia(lista) == false) 
	{
		aux = lista.primeiro->prox;
		while (aux != NULL)
		{
			if (aux->item == n) 
				return true;
			aux = aux->prox;
		}
	}
	return false;
}

/* Fun��o que busca na lista e retorna a posi��o do elemento.
fun��o buscaNaListaFuncPos(lista:tipoLista; n: inteiro): inteiro;
declare
	aux: ponteiro para tipoNo;
	cont: inteiro;
inicio
	cont = 0;
	se(listaVazia(lista) == falso) ent�o
		aux = lista.primeiro->prox;
		enquanto (aux != nulo) fa�a
			cont = cont + 1;
			se (aux->item == n) ent�o	
				retorna cont;
			fim-se;
			aux = aux->prox;
		fim-enquanto;
	fim-se;
	retorna cont;
fim;
*/

int buscaNaListaFuncPos(tipoLista lista, int n)
{
	tipoNo *aux;
	int cont;

	cont = 0;
	if(listaVazia(lista) == false) 
	{
		aux = lista.primeiro->prox;
		while (aux != NULL)
		{
			cont = cont + 1;
			if (aux->item == n) 
			{
				return cont;
			}
			aux = aux->prox;
		}
	}
	return cont;
}


/*fun��o somaElementosDaLista(lista: tipoLista): inteiro;
declare
	aux: ponteiro para n�;
	soma: inteiro;
inicio
	soma = 0;
	se (listaVazia(lista) == falso) ent�o
		aux = lista.primeiro->prox;
		enquanto (aux != nulo) fa�a
			soma = soma + aux->item;
			aux = aux->prox;
		fim-enquanto;
		retorna soma;	
	sen�o
		retorna 0;		
	fim-se;
fim;
*/

int somaElementosDaLista(tipoLista lista)
{
	tipoNo *aux;
	int soma;

	soma = 0;
	if (listaVazia(lista) == false) 
	{
		aux = lista.primeiro->prox;
		while (aux != NULL) 
		{
			soma = soma + aux->item;
			aux = aux->prox;
		}
		return soma;	
	}
	else
		return 0;		
}

/*
fun��o removePrimeiro(var lista:tipoLista): inteiro;
declare
	aux: ponteiro para n�;
	num: inteiro;
inicio
	se(listaVazia(lista) == verdadeiro) ent�o
		retorna 0;
	sen�o
		lista.primeiro = lista.primeiro->prox;
		num = lista.primeiro->item;
		return num;
	fim-se;
fim;
*/


int removePrimeiro(tipoLista &lista)
{
	tipoNo *aux;
	int num;

	if(listaVazia(lista) == true)
		return 0;
	else
	{
		lista.primeiro = lista.primeiro->prox;
		num = lista.primeiro->item;
		return num;
	}
}

/*procedimento insereNaPosicao(var lista: tipoLista; n: inteiro; pos: inteiro);
declare
	aux1, aux2: ponteiro para tipoNo;
	cont: inteiro;
inicio
	se (listaVazia(lista) == verdadeiro) ent�o
		insereNoFim(lista, n);
		escreva("Posicao nao existe. Elemento inserido na lista na primeira posicao");
	sen�o
		aux1 = lista.primeiro->prox;
		para cont de 1 at� pos-1 fa�a
			aux = aux->prox;
		fim-para;
		aux2 = new tipoNo;
		aux2->item = n;
		aux2->prox = aux1->prox;
		aux1->prox = aux2;
		escreva("elemento inserido");
	fim-se;
fim;
*/

void insereNaPosicao(tipoLista &lista, int n, int pos)
{
  tipoNo *aux1, *aux2;
  int cont;
  
  if (listaVazia(lista) == true)
  {
    insereNoFim(lista, n);
    cout<<"Posicao nao existe. Elemento inserido na lista na primeira posicao";
  }

 else
 {
   aux1 = lista.primeiro->prox;
   for(cont = 1; cont < (pos-1); cont++)
   {
       aux1 = aux1->prox;
   }
   aux2 = new tipoNo;
   aux2->item = n;
   aux2->prox = aux1->prox;
   aux1->prox = aux2;
   cout<<"elemento inserido";
 }

}

int main()
{
	tipoLista listaEncadeada;
	int num, opcao, posicao;
	
	inicializaLista(listaEncadeada);
	
	do{
		cout << "\n\n\n1 - Inserir no fim da lista" << endl;
		cout << "2 - Imprimir a lista " << endl;
		cout << "3 - Buscar um elemento na lista (procedimento)" << endl;
		cout << "4 - Buscar um elemento na lista (funcao - verdadeiro ou falso)" << endl;
		cout << "5 - Buscar um elemento na lista (funcao - retorna posicao)" << endl;
		cout << "6 - Somar os elementos da lista " << endl;
		cout << "7 - Remover o primeiro elemento " << endl;
		cout << "8 - Inserir um elemento numa dada posicao " << endl;
		cout << "0 - Sair " << endl;
		cout << "Digite sua opcao: " ;
		cin >> opcao;
		switch(opcao)
		{
			case 1: 
				cout << "Digite um numero ou zero para finalizar: ";
				cin >> num;
				while(num != 0)
				{
					insereNoFim(listaEncadeada, num);
					cout << "Digite um numero ou zero para finalizar: ";
					cin >> num;
				}
				cout << "Lista preenchida: ";
				break;
			case 2:
				imprimeLista(listaEncadeada);
				break;
			case 3:					
				cout << "Informe um elemento para ser buscado na lista: ";
				cin >> num;
				buscaNaListaProc(listaEncadeada, num);
				break;
			case 4:
				cout << "Informe um elemento para ser buscado na lista: ";
				cin >> num;
				if(buscaNaListaFuncBool(listaEncadeada, num) == true)
					cout << "Elemento encontrado" << endl;
				else
					cout << "Elemento nao encontrado " << endl;
				break;
			case 5:
				cout << "Informe um elemento para ser buscado na lista: ";
				cin >> num;
				num = buscaNaListaFuncPos(listaEncadeada, num);
				if(buscaNaListaFuncPos(listaEncadeada, num) != 0)
					cout << "Elemento encontrado na posicao " << num << endl;
				else
					cout << "Elemento nao encontrado " << endl;
				break;
			case 6:
				cout << "\nSoma dos elementos da lista: " << somaElementosDaLista(listaEncadeada) << endl;
				break;
			case 7: 
				cout << "\nPrimeiro elemento removido: " << removePrimeiro(listaEncadeada) << endl;
				break;
			case 8: 
				cout << "\nElemento a ser inserido na lista: ";
                cin>>num;
                cout<<endl;
                cout<<"\nEm qual posição quer inserir: ";
                cin>>posicao;
                insereNaPosicao(listaEncadeada, num, posicao);
				break;
            case 0:
			cout << "Tchau" << endl;
			
			default:
				cout << "Opcao incorreta" << endl;
		}
	}while(opcao != 0);
		
	return 0;
}
	
	
	
	
	
	
	


