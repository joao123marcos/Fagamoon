package br.edu.fagammon.banco;

public class Gerente extends Funcionario{
    private int qtd_funcionarios_gerencia = 0;
	
	
	//construtor da subclasse gerente
	public Gerente(String nomefuncionario, String cpfFunc, float salarioFunc, String endereco) {
		super(nomefuncionario, cpfFunc, salarioFunc, endereco);
		// TODO Auto-generated constructor stub
	}
	
	
	//Metodos da subclasse gerente
	public double getBonificacao() {
		return (super.getBonificacao())*0.05; 
	}
}
	