#include<iostream>
using namespace std;

struct TipoPessoa
{
    int idade;
    string nome;
};

struct NO_pessoa
{
    TipoPessoa pessoa;
    NO_pessoa *esq, *dir;
};

typedef NO_pessoa *TipoArvore;
//Questao a
void CriaArvoreVazia(TipoArvore &pessoa)
{
    pessoa= NULL;
}
//Questao b
void InsereNaArvore(TipoArvore &pessoa, int idade, string nome)
{
    if (pessoa == NULL)
    {
        //criando o novo nó
        pessoa = new NO_pessoa();
        pessoa-> pessoa.idade = idade;
        pessoa-> pessoa.nome = nome;
        pessoa-> esq = NULL;
        pessoa-> dir = NULL;
    }
    
    else
    {
        if (nome > pessoa-> pessoa.nome)
        {
            InsereNaArvore(pessoa-> dir, idade, nome);
        }

        else if (nome < pessoa-> pessoa.nome)
        {
            InsereNaArvore(pessoa-> esq, idade, nome);
        }

        else
        {
            cout<<"Esse nome já foi inserido na arvore"<<endl;
        }
    }
}
//Questao c
void PercursoPreOrdem(TipoArvore pessoa)
{
    if (pessoa != NULL)
    {
        cout<<" Nome: "<<pessoa->pessoa.nome<<" ";
        cout<<" Idadade: "<<pessoa->pessoa.idade<<" ";
        PercursoPreOrdem(pessoa-> esq);
        PercursoPreOrdem(pessoa-> dir);
    }
}
//Questao d
void BuscaNaArvore(TipoArvore pessoa, string nome)
{
    if (pessoa == NULL)
    {
        cout<<"Nome não encontrado! "<<endl;
    }

    else
    {
        if (nome == pessoa-> pessoa.nome)
        {
            cout<<"Nome encontrado na arvore! "<<endl;
        }

        else if(nome > pessoa-> pessoa.nome)
        {
            BuscaNaArvore(pessoa->dir, nome);
        }

        else
        {
            BuscaNaArvore(pessoa->esq, nome);
        }
    }
}
//Questao e
void MenorIdadeArvore(TipoArvore pessoa, int &menor)
{
    if(pessoa != NULL)
    {
        menor = pessoa-> pessoa.idade;
        if (pessoa ->esq != NULL)
        {
            if (pessoa-> esq-> pessoa.idade < menor)
            {
                MenorIdadeArvore(pessoa->esq, menor);
            }
        }
    }
}

main()
{
    TipoArvore arvorePessoa;
    int opcao, idade = 0, menor = 0;
    string nome;

    CriaArvoreVazia(arvorePessoa);
    cout<<"Arvore inicializada"<<endl;

    do
    {
        cout<<endl;
        cout<<" 1  -  Insere na arvore "<<endl;
        cout<<" 2  -  Busca na arvore "<<endl;
        cout<<" 3  -  Percurso Profundidade Pré - Ordem "<<endl;
        cout<<" 4 -   Retorna a menor idade da arvore"<<endl;
        cout<<" 5 -   Reinicia a arvore"<<endl;
        cout<<" 0  -  Sair "<<endl;
        cout<<"Digite sua opção ";
        cin>>opcao;

        switch (opcao)
        {
        case 1:
            cout<<endl;
            cout<<"Digite seu nome  ou zero para finalizar: ";
            cin>>nome;
            while (nome != "0")
            {
                cout<<"Digite sua idade: ";
                cin>>idade;
                InsereNaArvore(arvorePessoa,idade,nome);
                cout<<"Digite seu nome  ou zero para finalizar: ";
                cin>>nome;
            }
            cout<<"Arvore Preenchida! "<<endl;
            break;
        ////////////////////////////////////////////////////////////
        case 2:
            cout<<endl;
            cout<<"Qual nome deseja procurar na arvore: ";
            cin>>nome;
            BuscaNaArvore(arvorePessoa, nome);
            break;
        ////////////////////////////////////////////////////////////
         case 3:
            cout<<endl;
            cout<<"Percurso em profundidade Pré Ordem";
            PercursoPreOrdem(arvorePessoa);
            cout<<endl;
            break;
        ////////////////////////////////////////////////////////////
        case 4:
            menor = 0;
            cout<<endl;
            MenorIdadeArvore(arvorePessoa, menor);
            cout<<"A menor idade encontrada na arvore é "<<menor<<endl;
            cout<<endl;
            break;
        ////////////////////////////////////////////////////////////
        case 5:
            cout<<endl;
            cout<<"Arvore reiniciada! "<<endl;
            CriaArvoreVazia(arvorePessoa);
            break;
        ////////////////////////////////////////////////////////////
        case 0:
            cout<<endl;
            cout<<"Programa encerrado! "<<endl;
            break;
        ////////////////////////////////////////////////////////////
        default:
            cout<<"Opção inválida!"<<endl;
        }
    } while (opcao != 0);
}
