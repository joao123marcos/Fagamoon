#include <iostream>
using namespace std;

struct NoFila
{
    int elemento;
    NoFila *ponteiroParaProximoNo;
};

struct TipoFila
{
    NoFila *InicioFila, *FimFila;
    int tamanho;
};

void CriaFilaVazia(TipoFila &fila) //Estou criando o nó cabeça da fila
{
    fila.InicioFila = new NoFila();  //Fiz a alocação dinânica de um no para a fila
    fila.FimFila = fila.InicioFila; // Nesta linha eu estou fazendo os dois ponteiros apontarem para o mesmo nó
    fila.FimFila-> ponteiroParaProximoNo = NULL; //O campo ponteiroParaProximoNo sendo no último nó deve apontar para NULL indicando o fim da fila
    fila.tamanho = 0;
}

bool verificaStatusFila(TipoFila a)
{
    if (a.InicioFila == a.FimFila)
    {
        return true; //Ou seja, a fila está vazia
    }

    else
    {
        return false; 
    }
}

int InsereNoFimFila(TipoFila &fila, int elemento) //A fila deve ser passada por referencia pois sua atualização deve ir para o programa principal
{
    //Peguei o ponteiro e o fiz apontar para um novo nó alocado dinâmicamente
    fila.FimFila-> ponteiroParaProximoNo = new NoFila();
    
    //Atualizei o fim da fila 
    fila.FimFila = fila.FimFila-> ponteiroParaProximoNo;
    
    //Recebendo o elemento para inseri-lo na fila
    fila.FimFila-> elemento = elemento;

    //O último nó da fila deve sempre apontar para NULL indicando o fim dela
    fila.FimFila-> ponteiroParaProximoNo = NULL;

    //Atualizando o tamanho da fila
    fila.tamanho++;

    return fila.tamanho;
}

void Desenfileira(TipoFila &fila)
{
    if (verificaStatusFila(fila))
    {
        cout<<"Não é possível desenfileirar uma fila vazia!"<<endl;
    }

    else
    {
        TipoFila filaAux;
        CriaFilaVazia(filaAux);
        
        //Como o primeiro nó da fila não tem elemento que atualizar o INICIO DA FILA
        fila.InicioFila = fila.InicioFila-> ponteiroParaProximoNo;
        //Percorrendo a fila até o final dela
        while (fila.InicioFila-> ponteiroParaProximoNo != NULL)
        {
            cout<<"Removendo o elemento "<<fila.InicioFila-> elemento<<" da fila para acessar o proximo!"<<endl;
            //pegando o elemento da fila e jogando em um fila auxiliar
            InsereNoFimFila(filaAux, fila.InicioFila-> elemento);
            //avançando sobre a fila
            fila.InicioFila = fila.InicioFila-> ponteiroParaProximoNo;
        }
        cout<<"Removendo o último elemento da fila "<<fila.InicioFila-> elemento<<endl;
        InsereNoFimFila(filaAux, fila.InicioFila-> elemento);
        cout<<endl;
        cout<<"Desenfileiramento realizado com sucesso!"<<endl;
    }
}

int FuncaoDesenfieiraUmavez(TipoFila &fila)
{
    if (verificaStatusFila(fila))
    {
        cout<<"Não é possível desenfileirar uma fila vazia!"<<endl;
    }

    else
    {
        int numero = 0;

        //Como o primeiro nó da fila não tem elemento que atualizar o INICIO DA FILA
        fila.InicioFila = fila.InicioFila-> ponteiroParaProximoNo;
        numero = fila.InicioFila-> elemento;
        
        return numero;
    }
}

int RetornaPrimeiroElementoFila(TipoFila fila) //lembrando que esta função retorna o primeiro elemento sem remove-lo da fila
{
    if (verificaStatusFila(fila))
    {
        return 0;
    }

    else
    {
        int num = 0;
        //O uso de mais de uma seta me garante o acesso ao dado que quero sem remove-lo da fila
        num = fila.InicioFila-> ponteiroParaProximoNo -> elemento;

        return num;
    }
}

void RetiraDaFilaProcurandoElemento(TipoFila &fila, int a)
{
    if (verificaStatusFila(fila))
    {
        cout<<"Fila vazia! Não há como procurar!"<<endl;
    }

    else
    {
        TipoFila filaAux;
        bool achou = false;
        int numero = 0;

        CriaFilaVazia(filaAux);

        while (verificaStatusFila(fila) == false)
        {
            if (a == fila.InicioFila->ponteiroParaProximoNo->elemento)
            {
                achou = true;
                FuncaoDesenfieiraUmavez(fila);
                cout<<"Elemento removido da fila! "<<endl;
            }

            else
            {
                numero = FuncaoDesenfieiraUmavez(fila);
                InsereNoFimFila(filaAux,numero);
            }
        }
        
        if (achou == false)
        {
            cout<<"O elemento que você digitou não está na lista! "<<endl;
        }
    }
}

main()
{
    TipoFila Fila1;
    int numero = 0, tamanho = 0, retornoDesenfileira = 0, escolha = 0;
    bool retornoFila = false;

    CriaFilaVazia(Fila1);
    cout<<"Fila vazia criada com sucesso!"<<endl;
    cout<<endl;

    cout<<"Digite um número para preencher a fila ou zero para finalizar! ";
    cin>>numero;

    while (numero != 0)
    {
        tamanho = InsereNoFimFila(Fila1, numero);
        cout<<"Digite um número para preencher a fila ou zero para finalizar! ";
        cin>>numero;
    }
    cout<<endl;
    retornoFila = verificaStatusFila(Fila1);
    
    if (retornoFila == true)
    {
        cout<<"Usuário você digitou zero, programa encerrado! Não há como usar as outras funções."<<endl;
    }
    
    else
    {
        cout<<"O tamanho da fila é "<<tamanho<<endl;
        escolha = RetornaPrimeiroElementoFila(Fila1); 
        cout<<"O primeiro elemento desta fila é "<<escolha<<endl;
        cout<<endl;
        cout<<"Você quer desenfileirar todos os elementos ou apenas o primeiro (1 para apenas um / 2 para todos): ";
        cin>>escolha;

        switch (escolha)
        {
            case 1:
               retornoDesenfileira = FuncaoDesenfieiraUmavez(Fila1);
               cout<<"O primeiro elemento da fila "<<retornoDesenfileira<<" foi removido"<<endl;
               break;
               
            case 2:
               Desenfileira(Fila1);
               break;
               
            default:
               cout<<"Opção inválida!"<<endl;
        }

        cout<<"Gostaria de remover um número da fila? Qual? ";
        cin>>numero;
        cout<<endl;
        RetiraDaFilaProcurandoElemento(Fila1,numero);
    }
}