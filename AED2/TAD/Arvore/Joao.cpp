#include <iostream>
#include <list>
#include <queue>
using namespace std;

struct no
{
    int elemento;
    no *esq, *dir;
};
//Na linha 10 estou apenas renomeando o Nó para TipoArvore para facilitar a chamada nos subprogramas
typedef no *TipoArvore;

void CriaArvoreVazia(TipoArvore &arvore)
{
    arvore = NULL;
}

void InsereNaArvore(TipoArvore &arvore, int num)
{
    if (arvore == NULL)
    {   //Criando um novo nó
        arvore = new no();

        //inserindo um número na arvore, só insere-se em nós folhas
        arvore-> elemento = num;
        
        //Como os nós folhas são os últimos da arvore seus ponteiros devem ser NULL
        arvore-> esq = NULL;
        arvore-> dir = NULL;
    }

    else
    {
        if (num > arvore-> elemento)
        {
            InsereNaArvore(arvore-> dir, num);
        }

        else if(num < arvore-> elemento)
        {
            InsereNaArvore(arvore-> esq, num);
        }

        else
        {
            cout<<"O elemento já existe na arvore"<<endl;
        }
    }
}

void BuscaNaArvore(TipoArvore arvore, int x)
{
    if (arvore == NULL)
    {
        cout<<"Elemento não encontrado"<<endl;
    }

    else
    {
        if (x == arvore-> elemento)
        {
            cout<<"Elemento encontrado! "<<endl;
        }

        else if(x > arvore-> elemento)
        {
            BuscaNaArvore(arvore-> dir, x);
        }

        else
        {
            BuscaNaArvore(arvore-> esq, x);
        }
    }
}

void PercursoPreOrdem(TipoArvore arvore)
{
    if(arvore != NULL)
    {
        cout<<arvore->elemento<<" ";
        PercursoPreOrdem(arvore->esq);
        PercursoPreOrdem(arvore->dir);
    }
}

void PercursoEmOrdem(TipoArvore arvore)
{
    if(arvore != NULL)
    {
        PercursoEmOrdem(arvore->esq);
        cout<<arvore->elemento<<" ";
        PercursoEmOrdem(arvore->dir);
    }
}

void PercursoPosOrdem(TipoArvore arvore)
{
    if(arvore != NULL)
    {
        PercursoPosOrdem(arvore->esq);
        PercursoPosOrdem(arvore->dir);
        cout<<arvore->elemento<<" ";
    }
}

void contaElementosAvore(TipoArvore arvore, int &cont)
{
	if (arvore != NULL)
	{
		cont++;
		contaElementosAvore(arvore-> esq, cont);
		contaElementosAvore(arvore->dir, cont);
	}
}

int FuncaoContaElementosArvore(TipoArvore arvore)
{
    if (arvore == NULL)
    {
        return 0;
    }

    else
    {
        return 1 + FuncaoContaElementosArvore(arvore-> esq) + FuncaoContaElementosArvore(arvore-> dir);
    }
}

void percursoEmLargura(TipoArvore arvore) 
{
    //Criando a fila auxilidar do tipo arvore
    queue<TipoArvore> fila;
    no *aux = arvore;

    if(aux != NULL) 
    {
        fila.push(aux);
        while(!fila.empty()) 
        {
            aux = fila.front();
            fila.pop();
            cout << aux-> elemento << " ";
            
            if(aux->esq != NULL)
            {
                fila.push(aux->esq);
            }
            
            if(aux->dir != NULL)
            {
                fila.push(aux->dir);
            }
        }
        cout << endl;
    }
}

void contaParesImpares(TipoArvore arvore, int &contPares , int &contImpares)
{
	if (arvore != NULL)
	{
		if (arvore-> elemento % 2 == 0)
		{
			contPares++;
		}

		else
		{
			contImpares++;
		}
		contaParesImpares(arvore-> esq, contPares, contImpares);
		contaParesImpares(arvore-> dir, contPares, contImpares);
	}
}

void divideParImpar(TipoArvore arvore, TipoArvore &arvorePar, TipoArvore &arvoreImpar)
{
    if (arvore != NULL)
    {
        if (arvore-> elemento % 2 == 0)
        {
            InsereNaArvore(arvorePar, arvore-> elemento);
        }

        else
        {
            InsereNaArvore(arvoreImpar, arvore-> elemento);
        }
        divideParImpar(arvore-> esq, arvorePar, arvoreImpar);
        divideParImpar(arvore-> dir, arvorePar, arvoreImpar);
    }
    
}

//Exercicio 5 questão 1 letra a
void MenorElementoArvore(TipoArvore arvore, int &menor)
{
    if (arvore != NULL)
    {
        menor = arvore-> elemento;
        if (arvore-> esq != NULL)
        {
            if(arvore-> esq-> elemento < menor)
            {
                MenorElementoArvore(arvore-> esq, menor);
            }
        }

        if (arvore-> dir != NULL)
        {
            if(arvore-> dir-> elemento < menor)
            {
                MenorElementoArvore(arvore-> dir , menor);
            }
        }
    }   
}

//Exercicio 5 questão 1 letra b
void MaiorElementoArvore(TipoArvore arvore, int &maior)
{
    if (arvore != NULL)
    {
        maior = arvore-> elemento;
        if (arvore-> esq != NULL)
        {
            if(arvore-> esq-> elemento > maior)
            {
                MaiorElementoArvore(arvore-> esq, maior);
            }
        }

        if (arvore-> dir != NULL)
        {
            if(arvore-> dir-> elemento > maior)
            {
                MaiorElementoArvore(arvore-> dir , maior);
            }
        }
    }      
}

//Exercicio 5 questão 1 leta c
void ImprimeNoFolha(TipoArvore arvore)
{
    if (arvore != NULL)
    {
        if((arvore-> esq == NULL) && (arvore-> dir == NULL))
        {
            cout<<arvore->elemento<<" ";
        }
        
        else
        {
            ImprimeNoFolha(arvore->esq);
            ImprimeNoFolha(arvore->dir);
        }
    }
}

//EXERCICIO EXTRA Nº 1
bool verificaArvoresIguais(TipoArvore arvore1, TipoArvore arvore2)
{   //se as duas arvores forem nulas, elas são iguais
    if (arvore1 == NULL && arvore2 == NULL)
		return true;
    //se uma arvore for nula e a outra não; são diferentes    
	else if(arvore1 == NULL && arvore2 != NULL)
		return false;
    //se uma arvore for nula e a outra não; são diferentes    
	else if(arvore1 != NULL && arvore2 == NULL)
		return false;
    //verifico se as duas são diferentes de nulo
	else if(arvore1 != NULL && arvore2 != NULL) 
	{	//verifico se os elementos são diferentes
		if(arvore1->elemento != arvore2->elemento)	
			return false;
		else
			return verificaArvoresIguais(arvore1->esq, arvore2->esq) && verificaArvoresIguais(arvore1->dir,arvore2->dir);
	}
}

main()
{
    TipoArvore Arvore1,Arvore2, arvorePar, arvoreImpar;
    int num, opcao, cont, contPares = 0, contImpares = 0, menor, maior;
    bool retorno= false;

    CriaArvoreVazia(Arvore1);
    CriaArvoreVazia(arvorePar);
    CriaArvoreVazia(arvoreImpar);
    cout<<"Arvore inicializada  "<<endl;
    do{
        cout<<endl;
        cout<<" 1  -  Insere na arvore "<<endl;
        cout<<" 2  -  Busca na arvore "<<endl;
        cout<<" 3  -  Percurso Profundidade Pré - Ordem "<<endl;
        cout<<" 4  -  Percurso Profundidade Em - Ordem "<<endl;
        cout<<" 5  -  Percurso Profundidade Pos - Ordem "<<endl;
        cout<<" 6  -  Percurso em Largura "<<endl;
        cout<<" 7  -  Conta elementos na Arvore (Procedimento) "<<endl;
        cout<<" 8  -  Conta elementos na Arvore (Função) "<<endl;
        cout<<" 9  -  Retorna quantos número são pares e quantos são impares "<<endl;
        cout<<" 10 -  Cria um arvore para os pares e impares "<<endl;
        cout<<" 11 -  Acha o menor elemento da arvore "<<endl;
        cout<<" 12 -  Acha o maior elemento da arvore "<<endl;
        cout<<" 13 -  Imprime elementos dos nós folhas "<<endl;
        cout<<" 14 -  Verifica se duas arvores são iguais "<<endl;
        cout<<" 15 -  Reinicia a arvore!"<<endl;
        cout<<" 0  -  Sair "<<endl;
        cout<<"Digite sua opção ";
        cin>>opcao;

        switch (opcao)
        {    
        case 1:
            cout<<endl;
            cout<<"Digite um número ou zero para finalizar ";
            cin>>num;
            
            while (num != 0)
            {
                InsereNaArvore(Arvore1, num);
                cout<<"Digite um número ou zero para finalizar ";
                cin>>num;
            }
            cout<<"Arvore preenchida!"<<endl;
            break;
        ///////////////////////////////////////////////    
        case 2:
            cout<<"Qual número deseja procurar nesta Arvore ";
            cin>>num;
            BuscaNaArvore(Arvore1, num);
            break;
        //////////////////////////////////////////
        case 3:
        cout<<endl;
        cout<<"Percurso em Profundidade Pré Ordem"<<endl;
        PercursoPreOrdem(Arvore1);
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 4:
        cout<<endl;
        cout<<"Percurso em Profundidade em Ordem"<<endl;
        PercursoEmOrdem(Arvore1);
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 5:
        cout<<endl;
        cout<<"Percurso em Profundidade Pos Ordem"<<endl;
        PercursoPosOrdem(Arvore1);
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 6:
        cout<<endl;
        cout<<"Percurso em largura"<<endl;
        percursoEmLargura(Arvore1);
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 7:
        cout<<endl;
        cont = 0;
        contaElementosAvore(Arvore1,cont);
        cout<<"Total de elementos nesta arvore é "<<cont<<endl;
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 8:
        cout<<endl;
        cont = 0;
        cout<<"Total de elementos nesta arvore é "<<FuncaoContaElementosArvore(Arvore1)<<endl;
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 9:
        cout<<endl;
        contaParesImpares(Arvore1, contPares, contImpares);
        cout<<"Nesta arvore tem "<<contPares<<" elementos pares e "<<contImpares<<" elementos impares";
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 10:
        cout<<endl;
        divideParImpar(Arvore1, arvorePar, arvoreImpar);
        cout<<"Imprimindo a arvore par"<<endl;
        PercursoEmOrdem(arvorePar);
        cout<<endl;
        cout<<"Imprimindo a arvore impar"<<endl;
        PercursoEmOrdem(arvoreImpar);
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 11:
        cout<<endl;
        menor = 0;
        MenorElementoArvore(Arvore1,menor);
        cout<<"O menor elemento desta arvore é "<<menor<<endl;
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 12:
        cout<<endl;
        maior = 0;
        MaiorElementoArvore(Arvore1,maior);
        cout<<"O maior elemento desta arvore é "<<maior<<endl;
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 13:
        cout<<endl;
        cout<<"Imprimindo somente os elementos dos nós folhas ";
        ImprimeNoFolha(Arvore1);
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 14:
        cout<<endl;
        cout<<"Arvore2 iniciada";
        CriaArvoreVazia(Arvore2);
        cout<<endl;

        cout<<"Digite um número ou zero para finalizar ";
        cin>>num;    
        while (num != 0)
        {
            InsereNaArvore(Arvore2, num);
            cout<<"Digite um número ou zero para finalizar ";
            cin>>num;
        }
            cout<<"Arvore preenchida!"<<endl;
        cout<<endl;
        retorno= verificaArvoresIguais(Arvore1, Arvore2);
        
        if (retorno == false)
        {
            cout<<"As arovres não são iguais!"<<endl;
        }

        else
        {
            cout<<"As arvores são iguais"<<endl;
        }
        break;
        ///////////////////////////////////////////////////
        case 15:
        cout<<endl;
        cout<<"Arvore Reiniciada ";
        CriaArvoreVazia(Arvore1);
        cout<<endl;
        break;
        ///////////////////////////////////////////////////
        case 0:
        cout<<"Programa Encerrado!"<<endl;
        break;
        ///////////////////////////////////////////////
        default:
            cout<<"Opção inválida!!"<<endl;
        }
    }while (opcao != 0);
}