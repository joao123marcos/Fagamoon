#include<iostream>
using namespace std;

struct pacientes{

    string nome,sexo;
    double altura=0.0, peso=0.0;
};
main()
{
    pacientes vetor_pacientes[1000];
    int qtdPessoas=0;
    string NomePessoaMaisPesada;
    double maiorPeso=0.0,imc=0.0;

    cout<<"Digite a quantidade de pacientes que serao inseridos no vertor: ";
    cin>>qtdPessoas;
    
    cout<<endl;
    cout<<endl;

    for (int i = 0; i < qtdPessoas; i++)
    {
        cout<<"Digite o nome do paciente: ";
        cin>>vetor_pacientes[i].nome;

        cout<<"Digite o sexo do paciente: ";
        cin>>vetor_pacientes[i].sexo;

        cout<<"Digite o altura do paciente: ";
        cin>>vetor_pacientes[i].altura;

        cout<<"Digite o peso do paciente: ";
        cin>>vetor_pacientes[i].peso;

        cout<<endl;
        cout<<endl;
    }

    for (int i = 0; i < qtdPessoas; i++)
    {
        if (vetor_pacientes[i].peso > maiorPeso)
        {
            maiorPeso= vetor_pacientes[i].peso;
            NomePessoaMaisPesada= vetor_pacientes[i].nome;
        }
        
    }

    for (int i = 0; i < qtdPessoas; i++)
    {
        if (vetor_pacientes[i].sexo == "masculino")
        {
            imc=(72.7 * vetor_pacientes[i].altura) -58;

            if (imc > vetor_pacientes[i].peso)
            {
                cout<<vetor_pacientes[i].nome<<" Voce esta abaixo do peso!!!! "<<endl;
                cout<<"voce deve ganhar "<< imc - vetor_pacientes[i].peso <<" para ficar no peso ideal!!";
                cout<<endl;
                cout<<endl;
            }
            else
            {
               cout<<vetor_pacientes[i].nome<<" voce esta acima do peso!!!! "<<endl;
               cout<<" voce deve perder "<< imc - vetor_pacientes[i].peso <<" quilos para ficar no peso ideal!!";
               cout<<endl;
               cout<<endl;
            }
            
            
        }
        else if (vetor_pacientes[i].sexo == "feminino")
        {
            imc=(62.1 * vetor_pacientes[i].altura)- 44.7;

             if (imc > vetor_pacientes[i].peso)
            {
               cout<<vetor_pacientes[i].nome<<" Voce esta abaixo do peso!!!! "<<endl;
               cout<<"voce deve ganhar "<<imc -vetor_pacientes[i].peso<<" para ficar no peso ideal!!";
               cout<<endl;
               cout<<endl;
            }
            else
            {
                cout<<vetor_pacientes[i].nome<<" voce esta acima do peso!!!! "<<endl;
                cout<<" voce deve perder "<<imc - vetor_pacientes[i].peso <<" quilos para ficar no peso ideal!!";
                cout<<endl;
                cout<<endl;
            }
        }
        
        
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"O paciente mais pesado e "<<NomePessoaMaisPesada<<endl;
}