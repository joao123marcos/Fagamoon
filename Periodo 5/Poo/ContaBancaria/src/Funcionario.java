public class Funcionario {
	protected String nome_funcionario;
	protected String cpf_funcionario;
	protected float salario_funcionario;
	protected String endereco;
	
	//Construtor da classe
	Funcionario(String nomefuncionario, String cpfFunc, float salarioFunc, String endereco){
		this.nome_funcionario = nomefuncionario;
		this.cpf_funcionario = cpfFunc;
		this.salario_funcionario = salarioFunc;
		this.endereco = endereco;
	}
	
	//Metodos da classe
	public String getNomeFuncionario() {
		return this.nome_funcionario;
	}
	
	public String getCPFfuncionario() {
		return this.cpf_funcionario;
	}
	
	public float getSalarioFuncionario() {
		return this.salario_funcionario;
	}
	
	public String getEnderecoFuncionario() {
		return this.endereco;
	}
	
	public double bonificacao() {
		return this.salario_funcionario * 0.1;
	}

}

class gerente extends Funcionario{
    private int qtd_funcionarios_gerencia = 0;
	
	
	//construtor da subclasse gerente
	gerente(String nomefuncionario, String cpfFunc, float salarioFunc, String endereco) {
		super(nomefuncionario, cpfFunc, salarioFunc, endereco);
		// TODO Auto-generated constructor stub
	}
	
	
	//Metodos da subclasse gerente
	public double bonificacaoGerente() {
		return super.
	}
	
}












