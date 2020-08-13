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
    for (int i = 1; i <= grafo.numVertices; i++)
    {
        cout<< "vertice "<< i << ": ";
        if (!grafo.vetor[i].empty())
        {
            list<No_Adjacente>:: iterator aux;
            for (aux = grafo.vetor[i].begin(); aux != grafo.vetor[i].end(); aux++)
            {
                cout<<"|"<< aux-> vertice <<" - ";
                cout<< aux-> peso << "| ";
            }
            
        }
        cout<< endl;
    }
}

bool RetornaAdjacente(Tipo_grafo_Lista_Adjacente g, int v1, int v2)
{
    if (v1 <= g.numVertices and v2 <= g.numVertices)
    {
        if(!g.vetor[v1].empty())
        {
            list<No_Adjacente>:: iterator aux;
            for(aux = g.vetor[v1].begin(); aux != g.vetor[v1].end(); aux++)
            {
                if (aux-> vertice == v2)
                {
                    return true;
                }
            }
            return false;
        }
        return false;
    }
    return false;
}

void RetornaTodosAdjacente(Tipo_grafo_Lista_Adjacente g, int v)
{
    if (v <= g.numVertices)
    {
        if(!g.vetor[v].empty())
        {
            cout<<"Adjacentes ao vertice escolhido e  o peso!"<<endl;
            list<No_Adjacente>:: iterator aux;
            for(aux = g.vetor[v].begin(); aux != g.vetor[v].end(); aux++)
            {
                cout<<"Vertice "<<aux-> vertice<<" ";
                cout<<"peso "<<aux-> peso<<"; ";
            }
            cout<<endl;
        }

        else
        {
            cout<<"Vertice não tem adjacente"<<endl;
        }
    }

    else
    {
        cout<<"Vertice não existe!"<<endl;
    }
}

void RetornaVerticeSemAdjacente(Tipo_grafo_Lista_Adjacente g)
{
    for (int i = 1; i <= g.numVertices; i++)
    {
        if (g.vetor[i].empty())
        {
           cout<<i<<" ";
        } 
    }
}  

void Removearesta(Tipo_grafo_Lista_Adjacente &g, int v1, int v2)
{
    bool achou = false;
    if (v1 <= g.numVertices and v2 <= g.numVertices)
    {   //verifico se a posição que o usuario passou não está vazia
        if(!g.vetor[v1].empty())
        {   //criação do meu axiliar que vai percorrer a lista
            list<No_Adjacente>:: iterator aux;
            //percorre do inicio da lista de adjacentes até o final
            for(aux = g.vetor[v1].begin(); aux != g.vetor[v1].end(); aux++)
            {   //verifico se o vertice é igual ao vertice que o usuário passou
                if (aux-> vertice == v2)
                {
                    achou = true;
                    //ERASE- apagar
                    aux= g.vetor[v1].erase(aux);
                }
            }
        } 
    }
    
    if (achou)
    {
        cout<<"Aresta removida!"<<endl;
    }

    else
    {
        cout<<"Aresta não exite!"<<endl;
    }
}

void ParImpar(Tipo_grafo_Lista_Adjacente g, int v1)
{
    list<int> listaPar;
    list<int> listaImpar;
    list<int>::iterator aux;
    
    if (v1 <= g.numVertices)
    {
        list<No_Adjacente>::iterator aux;
        for (aux = g.vetor[v1].begin(); aux != g.vetor[v1].end(); aux++)
        {
            if (aux-> vertice % 2 == 0)
                listaPar.push_back(aux-> vertice);
            else
               listaImpar.push_back(aux-> vertice);
        }
    }
    
    cout<<"Imprimindo dos vertices pares!"<<endl;
    for (aux = listaPar.begin(); aux != listaPar.end(); aux++)
    {
        cout<<*aux<<" ";
    }
    cout<<endl;
    cout<<"Imprimindo dos vertices impares!"<<endl;
    for (aux = listaImpar.begin(); aux != listaImpar.end(); aux++)
    {
        cout<<*aux<<" ";
    }
    cout<<endl;
}

void ParImparLista(Tipo_grafo_Lista_Adjacente g)
{
    list<int> listaPar;
    list<int> listaImpar;
    list<int>::iterator aux;
    
    for(int i = 1; i <= g.numVertices; i++)
    {
        list<No_Adjacente>::iterator aux;
        for (aux = g.vetor[i].begin(); aux != g.vetor[i].end(); aux++)
        {
            if (aux-> vertice % 2 == 0)
                listaPar.push_back(aux-> vertice);
            else
               listaImpar.push_back(aux-> vertice);
        }
    }
    
    cout<<"Imprimindo dos vertices pares!"<<endl;
    for (aux = listaPar.begin(); aux != listaPar.end(); aux++)
    {
        cout<<*aux<<" ";
    }
    cout<<endl;
    cout<<"Imprimindo dos vertices impares!"<<endl;
    for (aux = listaImpar.begin(); aux != listaImpar.end(); aux++)
    {
        cout<<*aux<<" ";
    }
    cout<<endl;
}
//Prova de LAB leta A questao 2
int somaPesoArestas(Tipo_grafo_Lista_Adjacente g, int v1)
{
    int somatorio = 0;
    if (v1 <= g.numVertices)
    {  
       list<No_Adjacente>::iterator aux;
       //na posição que o usuario informar eu vou até o fim da lista fazendo o somatorio
        for (aux = g.vetor[v1].begin(); aux != g.vetor[v1].end(); aux++)
        {
            somatorio = somatorio + aux-> peso;
        }
    }
    return somatorio;
}
//Prova de LAB letra B questão w
bool RetornaVerticeIsolado(Tipo_grafo_Lista_Adjacente g, int v1)
{ //Vertice 1 está fixo no codigo porque só vou analisar o vertice (linha) que o usuário informar
    if (v1 <= g.numVertices)
    {
       if (g.vetor[v1].empty())
           return true;
       
       else
          return false;
    }

    else
      cout<<"Vertice informado não existe! "<<endl;
}

main()
{
    Tipo_grafo_Lista_Adjacente grafo;
    int vertice1, vertice2, peso, numVertices, opcao = 0;
    bool retorno =false;
    //A linha abaixo define o tamanho do vetor!
    cout<<"Usuário, digite um tamanho para o grafo! ";
    cin>>numVertices;
    cout<<endl;
    cout<<"Grafo inicializado!"<<endl;
    inicializaGrafo(grafo, numVertices);
    cout<<endl;

    do
    {
        cout<<" 1  - Insere no grafo "<<endl;
        cout<<" 2  - Imprime o grafo "<<endl;
        cout<<" 3  - Verifica se dois vertices são adjacentes "<<endl;
        cout<<" 4  - Remove aresta do grafo "<<endl;
        cout<<" 5  - Imprime todos os vertices adjacente a um vertice escolhido no grafo "<<endl;
        cout<<" 6  - Varre o grafo e enconta todos os vertices sem adjacentes!"<<endl;
        cout<<" 7  - Cria uma lista para vertices pares e impares de um vertice escolhido no grafo"<<endl;
        cout<<" 8  - Cria uma lista para vertices pares e impares para todos os vertices do grafo"<<endl;
        cout<<" 9  - Retorna o somatório dos pesos de um vertice do grafo!"<<endl;
        cout<<"10  - Verifica se um determinado vertice está isolado no grafo!"<<endl;
        cout<<" 0  - Encerrar! "<<endl;
        cout<<"Digite sua opção: ";
        cin>>opcao;

        switch (opcao)
        {
        case 1:
            cout<<endl;
            cout<<"Digite um valor para o vertice 1 ou zero para finalizar: ";
            cin>>vertice1;
            while (vertice1 != 0)
            {
                cout<<"Digite um valor para o vertice 2: ";
                cin>>vertice2;
                cout<<"Digite um valor para o peso: ";
                cin>>peso;
                insereAresta(grafo, vertice1, vertice2, peso);
                cout<<endl;
                cout<<"Digite um valor para o vertice 1 ou zero para finalizar: ";
                cin>>vertice1;
            }
            break;
        /////////////////////////////////////////////////////////////////////////////////
        case 2:
           cout<<endl;
           cout<<"Imprimindo o grafo! "<<endl;
           impremeGrafo(grafo);
           cout<<endl;
           break;
        /////////////////////////////////////////////////////////////////////////////////
        case 3:
           cout<<endl;
           cout<<"Informe dois vertices para verificar se são adjacentes no grafo"<<endl;
           cout<<"Vertice 1: ";
           cin>>vertice1;
           cout<<"Vertice 2: ";
           cin>>vertice2;
           retorno = RetornaAdjacente(grafo,vertice1,vertice2);
           if (retorno)
            cout<<"Os vertices informados são adjacentes"<<endl;
           else
            cout<<"Os Vertices informados NÃO são adjacentes"<<endl;
           cout<<endl;
           break;
        /////////////////////////////////////////////////////////////////////////////////
        case 4:
           cout<<endl;
           cout<<"Informe dois vertices que compoe uma aresta que deseja remover do grafo"<<endl;
           cout<<"Vertice 1: ";
           cin>>vertice1;
           cout<<"Vertice 2: ";
           cin>>vertice2;
           Removearesta(grafo,vertice1,vertice2);
           cout<<endl;
           break;
        /////////////////////////////////////////////////////////////////////////////////
        case 5:
           cout<<endl;
           cout<<"Informe um vertice para imprimir seus adjacentes no grafo"<<endl;
           cout<<"Vertice 1: ";
           cin>>vertice1;
           RetornaTodosAdjacente(grafo,vertice1);
           cout<<endl;
           break;
        /////////////////////////////////////////////////////////////////////////////////
        case 6:
           cout<<endl;
           cout<<"Vertices sem adjacentes no grafo!"<<endl;
           RetornaVerticeSemAdjacente(grafo);
           cout<<endl;
           cout<<endl;
           break;
        /////////////////////////////////////////////////////////////////////////////////
        case 7:
           cout<<endl;
           cout<<"Usuário, informe um vertice para listar seus vertices pares e impares: ";
           cin>>vertice1;
           ParImpar(grafo,vertice1);
           cout<<endl;
           break;
        /////////////////////////////////////////////////////////////////////////////////
        case 8:
           cout<<endl;
           ParImparLista(grafo);
           cout<<endl;
           break;
        /////////////////////////////////////////////////////////////////////////////////
        case 9:
           cout<<endl;
           cout<<"Usuário, informe um vertice para fazer o somatorio dos pesos de suas arestas: ";
           cin>>vertice1;
           cout<<"O somatorio dos pesos da aresta informada é "<<somaPesoArestas(grafo,vertice1);
           cout<<endl;
           cout<<endl;
           break;
        /////////////////////////////////////////////////////////////////////////////////
        case 10:
           cout<<endl;
           cout<<"Usuário, informe um vertice para verificar se está isolado no grafo ";
           cin>>vertice1;
           retorno = RetornaVerticeIsolado(grafo, vertice1);
           if (retorno)
              cout<<"O vertice informado esta isolado no grafo! "<<endl;
           else
               cout<<"O vertice informado NÃO esta isolado no grafo! "<<endl;
           cout<<endl;
           cout<<endl;
           break;
        /////////////////////////////////////////////////////////////////////////////////
        case 0:
           cout<<endl;
           cout<<"Programa encerrado!"<<endl;
           break;
        /////////////////////////////////////////////////////////////////////////////////
        default:
            cout<<"Opçao inválida!";
        }
    } while (opcao != 0);
    

}