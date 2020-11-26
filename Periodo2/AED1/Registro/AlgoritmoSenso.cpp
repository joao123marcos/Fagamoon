#include<iostream>
using namespace std;


struct aniversario{

    int dia=0,ano=0;
    string mes;
};
struct DadosHabitantes{

    string nome, sexo;
    aniversario idade;
    int qtd_num_filhos=0;
    float salario;

};
main()
{
    const int tam=10;
    DadosHabitantes vetor[tam];
    int i,contSalario=0,contEntrevistados=0,e_menino=0,e_menina=0;
    float somaSalario=0,somaFilhos=0,mediaSalario=0,mediaFilhos=0;
    string temFilhos="nao";

    //leitura de dados no registro

    for (int i = 0; i < 10; i++)
    {
        cout<<endl;
        cout<<"Por favor informe seu nome: ";
        cin>>vetor[i].nome;

        cout<<"Por favor informe seu sexo: ";
        cin>>vetor[i].sexo;

        cout<<"Qual o dia do seu aniversario? ";
        cin>>vetor[i].idade.dia;


        cout<<"Qual o mes do seu aniversario? (Digite por extenso) ";
        cin>>vetor[i].idade.mes;


        cout<<"Qual o ano do seu aniversario? ";
        cin>>vetor[i].idade.ano;

        cout<<"Tem Filhos?  (True para Sim e False para Nao) ";
        cin>>temFilhos;
        if (temFilhos == "sim")
        {
            cout<<"Quantos sao? ";
            cin>>vetor[i].qtd_num_filhos;
        }
        cout<<"Qual eh o seu salario? ";
        cin>>vetor[i].salario;
        contEntrevistados++;
        cout<<endl;
    }
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i].qtd_num_filhos > 0)
        {
            somaFilhos=somaFilhos + vetor[i].qtd_num_filhos;
        }
        somaSalario=somaSalario + vetor[i].salario;    
    }
    mediaFilhos= somaFilhos /contEntrevistados;
    mediaSalario= somaSalario /contEntrevistados;
    cout<<endl;
    cout<<"O total de entrevistados foi "<<contEntrevistados<<endl;
    cout<<"A media de filhos entre os entrevistados e "<<mediaFilhos<<endl;
    cout<<"A media de salarios entre os entrevistados e "<<mediaSalario<<endl;
}