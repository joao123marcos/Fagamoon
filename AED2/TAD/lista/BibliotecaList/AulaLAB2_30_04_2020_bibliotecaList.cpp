//Aula LAB2 30/04/2020
//Link para o video da aula: 
//https://drive.google.com/file/d/1P7p1es_S7VsPn_GO91AyNHoIz-spFVd7/view?usp=sharing
#include<iostream>
#include<list>
#include<cstdlib>
#include<ctime>
using namespace std;

/*
push_back
front()
back()
size()
begin()
end()
empty()
insert()
sort()
pop_front()
pop_back()
push_front()
remove()
*/

int main()
{
	list<int> lista;
	int num, qtde;
	
	/*cout << "Digite um numero ou zero para finalizar: ";
	cin >> num;
	while(num != 0)
	{
		lista.push_back(num);
		cout << "Digite um numero ou zero para finalizar: ";
		cin >> num;
	}*/
	
	cout << "\nInforme a quantidade de numeros desejada: " ;
	cin>> qtde;
	
	srand(time(NULL));	
	for(int i = 1; i <= qtde; i++)
	{
		num = rand() % 30;
		lista.push_back(num);
	}
		
		
	
	cout << "\nQuantidade de elementos inseridos: " << lista.size() << endl;
	
	cout << "\nPrimeiro elemento: " << lista.front() << endl;
	cout << "\nUltimo elemento: " << lista.back() << endl;
	
	cout << "\nElementos  inseridos: ";
	list<int>::iterator aux;
	for(aux = lista.begin(); aux != lista.end(); aux++)
	{
		cout << *aux << " ";
	}
	cout << endl;
	
	if(lista.empty() == true)
		cout << "\nA lista estah vazia "<< endl;
	else
		cout << "\nA lista nao estah vazia " << endl;
	

	cout << "\nRemovendo o primeiro elemento da lista: " << lista.front() << endl;
	lista.pop_front();
	cout << "\nTamanho da lista: " << lista.size() << endl;
	
	
	cout << "\nRemovendo o ultimo elemento da lista: " << lista.back() << endl;
	lista.pop_back();
	cout << "\nTamanho da lista: " << lista.size() << endl;
	
	cout << "\nDigite um elemento para ser inserido no inicio: ";
	cin >> num;
	lista.push_front(num);
	cout << "\nNova lista: ";
	for(aux = lista.begin(); aux != lista.end(); aux++)
	{
		cout << *aux << " ";
	}
	cout << endl;
	
	lista.sort();
	cout << "\nLista ordenada ";
	for(aux = lista.begin(); aux != lista.end(); aux++)
	{
		cout << *aux << " ";
	}
	cout << endl;
	
	
	cout << "\nDigite um numero para inserir na lista: ";
	cin >> num;
	int pos;
	cout << "\nDigite a posicao que deseja inserir: ";
	cin >> pos;
	aux = lista.begin();
	for(int i = 1; i < pos ; i++)
	{
		aux++;
	}
	lista.insert(aux, num);
	cout << "\nNova lista: ";
	for(aux = lista.begin(); aux != lista.end(); aux++)
	{
		cout << *aux << " ";
	}
	
	
	
	
	
	return 0;
}
	
	
