#include<iostream>
#include<list>
using namespace std;

#define MAXVERTICE 100

struct No_Adjacente
{
    int vertice;
    int peso;
};

struct Tipo_grafo_Lista_Adjacente
{
    list<No_Adjacente> vetor[MAXVERTICE];
    int numVertices;
};

void inicializaGrafo(Tipo_grafo_Lista_Adjacente &grafo, int num_vertice)
{
    grafo.numVertices = num_vertice;

}

void insereAresta(Tipo_grafo_Lista_Adjacente &grafo, int v1, int v2, int p)
{
    if (v1 <= grafo.numVertices && v2 <= grafo.numVertices)
    {
        No_Adjacente adj;
        adj.vertice = v2;
        adj.peso = p;
        grafo.vetor[v1].push_back(adj);
    }
    
    else
    {
        cout<<"Vertice não existe! "<<endl;
    }
}

void impremeGrafo(Tipo_grafo_Lista_Adjacente grafo)
{
    list<No_Adjacente>:: iterator aux;

    for (int i = 1; i < grafo.numVertices; i++)
    {
        cout<< "vertice "<< i << ": ";
        if (!grafo.vetor[i].empty())
        {
            list<No_Adjacente>:: iterator aux;
            for (aux = grafo.vetor[i].begin(); aux != grafo.vetor[i].end(); aux++)
            {
                cout<< aux-> vertice << " ";
                cout<< aux-> peso << " ";
            }
            
        }
        cout<< endl;
    }
}

// Item 1 o exercicio
bool RetornaAdjacente(Tipo_grafo_Lista_Adjacente g, int v1, int v2)
{
    No_Adjacente adj;
    adj.vertice = v2;
    for (int i = 1; i < g.numVertices; i++)
    {
        if (!g.vetor[i].empty())
        {
            list<No_Adjacente>:: iterator aux;
            for (aux = g.vetor[i].begin(); aux != g.vetor[i].end(); aux++)
            {   //Tentei acessar o adjacênte a essa posição no vetro
                if (g.vetor[v1].adj > 0)
                {
                    return true;
                }

                else
                {
                    return false;
                }
            }
        }
    }
}

main()
{
    Tipo_grafo_Lista_Adjacente g;
    int vertice1, vertice2, peso, numVertices;

    cout<<"Digite o numero de vertices ";
    cin>>numVertices;

    inicializaGrafo(g, numVertices);
    cout<<endl;
    cout<<"Inserindo arestas!"<<endl;
    cout<<"Informe o vertice 1(posicao do vetor) ou zero para finalizar: ";
    cin>>vertice1;
    while (vertice1 != 0)
    {
        cout<<"Informe o vertice 2: ";
        cin>>vertice2;
        cout<<"Informe o peso: ";
        cin>>peso;
        insereAresta(g, vertice1, vertice2, peso);
        cout<<endl;
        cout<<"Informe o vertice 1(posicao do vetor) ou zero para finalizar: ";
        cin>>vertice1;
    }
    
    cout<<"Imprimindo o grafo com lista de adjacentes"<<endl;
    impremeGrafo(g);
}