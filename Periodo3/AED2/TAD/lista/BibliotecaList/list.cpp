#include <iostream>
//incluindo a biblioteca list (lista)
#include <list>
#include <ctime>
#include <cstdlib>
using namespace std;
main()
{
    //declarei a minha lista
    list<int> lista;
    int num = 0, opcao, qtd =0, pos;
    //iterador (ponteiro auxiliar) para atividades auxiliares
    list<int>:: iterator aux;

    do
    {
        cout<<endl;
        cout<<" 1 - Preenche a lista no inicio "<<endl;
        cout<<" 2 - Preenche a lista no Final "<<endl;
        cout<<" 3 - Imprime a lista "<<endl;
        cout<<" 4 - Remove do Inicio da lista "<<endl;
        cout<<" 5 - Remove do Final da lista "<<endl;
        cout<<" 6 - Ordena a lista "<<endl;
        cout<<" 7 - Insere em uma posição "<<endl;
        cout<<" 0 - Sair "<<endl;
        cout<<"Digite uma opção! ";
        cin>>opcao;

        switch (opcao)
        {
        case 1:
            cout<<endl;
            cout<<"Informe uma quantidade de números para preencher a lista automaticamente ";
            cin>>qtd;
            srand(time(NULL));
            for (int i = 1; i <= qtd; i++)
            {
                lista.push_front(rand() % 100);
            }
            break;
        /////////////////////////////////////////////////////////////////////////
        case 2:
            cout<<endl;
            cout<<"Informe uma quantidade de números para preencher a lista automaticamente ";
            cin>>qtd;
            srand(time(NULL));
            for (int i = 1; i <= qtd; i++)
            {
                lista.push_back(rand() % 100);
            }
            break;
        /////////////////////////////////////////////////////////////////////////
        case 3:
            cout<<endl;
            if (lista.empty())
            {
                cout<<"Não há como imprimir uma lista vazia!"<<endl;
            }
            
            else
            {
                //lista.begin(); função que retorna um ponteiro para o inicio da lista (lista.primeiro)
               // lista.end(); função que retorna um ponteiro para o fim da lista      (lista.ultimo)
                cout<<"Imprimindo os números da lista"<<endl;
                for (aux = lista.begin(); aux != lista.end(); aux++)
                {
                    //derreferenciação. Imprimindo o valor para onde o ponteiro aux aponta
                    cout<< *aux <<" ";
                }
                cout<<endl;
            }
            break;
        /////////////////////////////////////////////////////////////////////////
        case 4:
            cout<<endl;
            if (lista.empty())
            {
                cout<<"A lista está vazia, não há como remover";
            }
            
            else
            {
                cout<<"Removendo o primeiro elemento da lista! ";
                cout<<lista.front()<<" ";
                lista.pop_front();
                cout<<endl;
                cout<<"O tamanho da lista depois da remoção é "<<lista.size()<<endl;
            }
            cout<<endl; 
            break;
        /////////////////////////////////////////////////////////////////////////
        case 5:
            cout<<endl;
            if (lista.empty())
            {
                cout<<"A lista está vazia, não há como remover";
            }
            
            else
            {
                cout<<"Removendo o último elemento da lista!";
                cout<<lista.back()<<" ";
                lista.pop_back();
                cout<<endl;
                cout<<"O tamanho da lista depois da remoção é "<<lista.size()<<endl;
            }
            cout<<endl; 
            break;
        /////////////////////////////////////////////////////////////////////////
        case 6:
            cout<<endl;
            if (lista.empty())
            {
                cout<<"A lista está vazia, não há como Ordenar!";
            }
            
            else
            {
                cout<<"Lista ordenada "<<endl;
                lista.sort();
            }
            cout<<endl;
            break;
        /////////////////////////////////////////////////////////////////////////
        case 7:
            cout<<endl;
            if (lista.empty())
            {
                cout<<"A lista está vazia, não há como Inserir elementos!";
            }
            
            else
            {
                cout<<"Digite um numero para inserir na lista: ";
	            cin>>num;
                cout<<"Digite a posicao que deseja inserir: ";
	            cin>>pos;
	            aux = lista.begin();
                for(int i = 1; i < pos ; i++)
	            {
                    aux++;
                }
                lista.insert(aux, num);
                cout<<"Nova lista: ";
                for(aux = lista.begin(); aux != lista.end(); aux++)
	            {
                    cout << *aux << " ";
	            }
                cout<<endl;
            }
            break;
        /////////////////////////////////////////////////////////////////////////
        case 0:
            cout<<"Programa encerrado!"<<endl;
            break;
        /////////////////////////////////////////////////////////////////////////
        default:
            cout<<"Opção inválida!"<<endl;
        }

    } while (opcao != 0);
}