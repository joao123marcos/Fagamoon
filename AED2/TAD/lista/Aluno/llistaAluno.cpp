// Aula LAB2 14/05/2020
//link para a aula: https://drive.google.com/file/d/17CK-wdCMMVCt9QwdosXgaganv4PjFvxD/view?usp=sharing
#include<iostream>
using namespace std;

struct tipoAluno{
	string nome;
	int periodo;
	float mediaNotas;
};

struct tipoNo{
	tipoAluno item;
	tipoNo *prox;
};

struct tipoLista{
	tipoNo *primeiro, *ultimo;
};

void inicializaLista(tipoLista &lista)
{
	lista.primeiro = new tipoNo;
	lista.ultimo = lista.primeiro;
	lista.ultimo->prox = NULL;
}

void insereNoFim(tipoLista &lista, tipoAluno a)
{
	lista.ultimo->prox = new tipoNo;
	lista.ultimo = lista.ultimo->prox;
	lista.ultimo->item = a;
	lista.ultimo->prox = NULL;
}

bool listaVazia(tipoLista lista)
{
	if(lista.primeiro == lista.ultimo)
		return true;
	else
		return false;
}
	
	
void imprimeLista(tipoLista lista)
{
	if(listaVazia(lista))
		cout << "lista vazia" <<endl;
	else
	{
		tipoNo *aux = lista.primeiro->prox;
		while(aux != NULL)
		{
			cout << aux->item.nome << " " ;
			cout << aux->item.periodo << " " ;
			cout << aux->item.mediaNotas << endl;
			aux = aux->prox;
		}
	}
}
			
			

int main()
{
	tipoLista listaAluno;
	inicializaLista(listaAluno);
	tipoAluno aluno;
	
	cout << "\nDigite um nome ou 0 para finalizar: ";
	cin >> aluno.nome;
	while(aluno.nome != "0") 
	{
		cout << "\nDigite o periodo: ";
		cin >> aluno.periodo;
		cout << "\nDigite a media de notas: ";
		cin >> aluno.mediaNotas;
		insereNoFim(listaAluno, aluno);
		
		cout << "\nDigite um nome ou 0 para finalizar: ";
		cin >> aluno.nome;
	}
	return 0;
}
	
	




