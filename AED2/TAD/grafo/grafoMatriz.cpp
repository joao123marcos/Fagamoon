#include<iostream>
using namespace std;
#define MAXVERTICES 100

struct tipoGrafo {
	int mat[MAXVERTICES + 1] [MAXVERTICES + 1];
	int numVertices;
	int numArestas;
};

void inicializaGrafo(tipoGrafo &g, int nv)
{
	int i , j;
	g.numVertices = nv + 1;
	for ( i = 0; i < g.numVertices; i++)
	{
		for ( j = 0; j < g.numVertices; j++)
			g.mat[i][j] = 0;
	}
}

void insereAresta(int v1, int v2, int peso, tipoGrafo &g)
{
	if(v1 <= g.numVertices && v2 <= g.numVertices)
	{
		g.mat[v1][v2] = peso;
		cout << "\nAresta inserida" << endl;
	}
	else
		cout << "\nVertice nao existe" << endl; 
}

void imprimeGrafo(tipoGrafo g)
{
	for(int i =1; i < g.numVertices; i++)
	{
		for(int j = 1; j < g.numVertices; j++)
			cout << g.mat[i][j] << "\t";  //espaço entre os numeros
		cout << endl;  // pula linha após cada linha
	}
}

bool ehAdjacente(tipoGrafo g, int v1, int v2)
{
	if(v1 <= g.numVertices && v2 <= g.numVertices)
	{
		if(g.mat[v1][v2] != 0)
			return true;
		else
			return false;
	}
	else
		return false;
}

void mostraAdjacentes(tipoGrafo g, int v)
{
	if(v <= g.numVertices)
	{
		for(int j = 1; j < g.numVertices; j++)
		{	
			cout << g.mat[v][j] << " " ;
		}
	}
	else
		cout << "\nVertice nao existe " << endl;
}

void removeAresta(int v1, int v2, tipoGrafo &g)
{
	if(v1 <= g.numVertices && v2 <= g.numVertices)
	{
		g.mat[v1][v2] = 0;
		cout << "\nAresta removida" << endl;
	}
	else
		cout << "\nVertice nao existe" << endl; 
}


int main()
{
	tipoGrafo grafo;
	int vertice1, vertice2, peso, numVertices;
	
	cout << "Informe o numero de vertices: ";
	cin >> numVertices;
	
	inicializaGrafo(grafo, numVertices);
	
	cout << "Inserindo aresta" << endl;
	cout << "Informe o vertice 1 ou 0 para finalizar: ";
	cin >> vertice1;
	while(vertice1 != 0)
	{
		cout << "Informe o vertice 2: ";
		cin >> vertice2;
		cout << "Informe o peso: ";
		cin >> peso;
		insereAresta(vertice1, vertice2, peso, grafo);
		
		cout << "Informe o vertice 1 ou 0 para finalizar: ";
		cin >> vertice1;
	}
	
	cout << "Grafo: " << endl;
	imprimeGrafo(grafo);
	
	
	cout << "\nInforme dois vertices para verificar se sao adjacentes: ";
	cin >> vertice1 >> vertice2;
	if(ehAdjacente(grafo, vertice1, vertice2)) 
		cout << "\nVertices sao adjacentes" << endl;
	else
		cout << "\nVertices nao sao adjacentes " << endl;
		
		
	return 0;
}
