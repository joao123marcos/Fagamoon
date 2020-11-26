
bre//Aula AED2 e LAB2 19-05-2020
//Link para a aula de AED: https://drive.google.com/file/d/1AeFcK5ZzYzvSwMfiUHa85OaNQrcdpXaJ/view?usp=sharing
//Link para a aula de LAB: https://drive.google.com/file/d/1Bf8YMroJoVSOWXtOCL17HLtVSwLDexAC/view?usp=sharing
//Árvore binária de busca
/*

tipoNo: registro
	(item: inteiro;
	 esq: ponteiro para tipoNo;
	 dir: ponteiro para tipoNo;
	 );


tipoArvore: ponteiro para tipoNo;
*/

#include<iostream>
using namespace std;

struct tipoNo
{
	int item;
	tipoNo *esq, *dir;
};

typedef tipoNo * tipoArvore;

/*
procedimento inicializa(var arvore: tipoArvore)
inicio
	arvore = nulo;
fim;
*/
void inicializaArvore(tipoArvore &arvore)
{
	arvore = NULL;
}

/*
procedimento insereNaArvore(var arvore: tipoArvore; x: inteiro);
inicio
	se (arvore == nulo) então
		inicializaPonteiro(arvore);   // arvore = new tipoNo;
		arovre->item = x;
		arvore->esq = nulo;
		arvore->dir = nulo;
	senão
		se (x > arvore->item ) então
			insereNaArvore(arvore->dir, x);
		senão se (x < arvore->item) então
			insereNaArvore(arvore->esq, x);
		senão
			escreva("Elemento já existe na arvore");
		fim-se;
	fim-se;
fim;
*/

void insereNaArvore(tipoArvore &arvore, int x)
{
	if(arvore == NULL)
	{
		arvore = new tipoNo;
		arvore->item = x;
		arvore->esq = NULL;
		arvore->dir = NULL;
	}
	else
	{
		if(x > arvore->item) 
			insereNaArvore(arvore->dir, x);
		else if(x < arvore->item) 
			insereNaArvore(arvore->esq, x);
		else
			cout << "\nElemento jah existe na arvore" << endl;
	}
}
/*
procedimento buscaNaArvore(arvore: tipoArvore; x: inteiro);
inicio
	se (arvore == nulo) então
		escreva("elemento nao encontrado");
	senão
		se (x == arvore->item) então
			escreva("Elemento encontrado");
		senão se (x > arvore->item) então
			buscaNaArvore(arvore->dir, x);
		senão
			buscaNaArvore(arvore->esq, x);
		fim-se;
	fim-se;
fim;				
*/	
void buscaNaArvore(tipoArvore arvore, int x)
{
	if(arvore == NULL)
		cout << "Elemento nao encontrado " << endl;
	else
	{
		if(x == arvore->item)
			cout << "Elemento encontrado" << endl;
		else if ( x > arvore->item)
			buscaNaArvore(arvore->dir, x);
		else
			buscaNaArvore(arvore->esq, x);
	}
}

/*	
procedimento percursoProfPreOrdem(arvore: tipoArvore);  // V E D 
inicio
	se (arvore != nulo) então
		escreva(arvore->item); //V
		percursoProfPreOrdem(arvore->esq);  // E
		percursoProfPreOrdem(arvore->dir);  // D
	fim-se;
fim;

*/
void percursoProfPreOrdem(tipoArvore arvore)
{
	if(arvore != NULL)
	{
		cout << arvore->item << " ";
		percursoProfPreOrdem(arvore->esq);
		percursoProfPreOrdem(arvore->dir);
	}
}

/*

procedimento percursoProfEmOrdem(arvore: tipoArvore);  // E V D 
inicio
	se (arvore != nulo) então
		percursoProfEmOrdem(arvore->esq);  // E
		escreva(arvore->item); //V
		percursoProfEmOrdem(arvore->dir);  // D
	fim-se;
fim;
*/

void percursoProfEmOrdem(tipoArvore arvore)
{
	if(arvore != NULL)
	{
		percursoProfEmOrdem(arvore->esq);
		cout << arvore->item << " ";
		percursoProfEmOrdem(arvore->dir);
	}
}

/*	
procedimento percursoProfPosOrdem(arvore: tipoArvore);  // E  D V 
inicio
	se (arvore != nulo) então
		percursoProfPosOrdem(arvore->esq);  // E
		percursoProfPosOrdem(arvore->dir);  // D
		escreva(arvore->item); //V
	fim-se;
fim;

*/

void percursoProfPosOrdem(tipoArvore arvore)
{
	if(arvore != NULL)
	{
		percursoProfPosOrdem(arvore->esq);
		percursoProfPosOrdem(arvore->dir);
		cout << arvore->item << " ";
	}
}
int main()
{
	tipoArvore arv;
	int num, opcao;
	
	do{
		cout << "\n\n1 - Inicializa arvore " << endl;
		cout << "2 - Insere na arvore " << endl;
		cout << "3 - Busca na arvore " << endl;
		cout << "4 - Percurso Profundidade Pre-ordem " << endl;
		cout << "5 - Percurso Profundidade Em-ordem" << endl;
		cout << "6 - Percurso Profundidade Pos-ordem " << endl;
		cout << "0 - Sair " << endl;
		cout << "Digite sua opcao: ";
		cin >> opcao;
		switch(opcao)
		{
			case 1: 
				inicializaArvore(arv);
				break;
			case 2: 
				cout << "Digite um numero ou zero para finalizar: ";
				cin >> num;
				while(num != 0)
				{
					insereNaArvore(arv, num);
					cout << "Digite um numero ou zero para finalizar: ";
					cin >> num;
				}
				break;
			case 3: 
				cout <<"\nInforme um numero para buscar: ";
				cin >> num;
				buscaNaArvore(arv, num);
				break;
			case 4:
				cout << "\nPercurso em Profunidade pre-ordem: ";
				percursoProfPreOrdem(arv);
				break;
			case 5:
				cout << "\nPercurso em Profunidade em-ordem: ";
				percursoProfEmOrdem(arv);
				break;
			case 6:
				cout << "\nPercurso em Profunidade pos-ordem: ";
				percursoProfPosOrdem(arv);
				break;
			case 0:
				cout << "\nTchau" << endl;
				break;
			default:
				cout << "\nOpcao incorreta" << endl;
		}
	}while(opcao != 0);
	return 0;
}
	
	





		
