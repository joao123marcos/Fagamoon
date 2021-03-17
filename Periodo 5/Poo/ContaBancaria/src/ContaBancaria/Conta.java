package ContaBancaria;

public class Conta {
	//atributos da classe
	protected double saldo;
	protected String nome;
	protected int numero;

	//metodos da classe
	public void deposita(double valor) {
		this.saldo +=valor;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int getNumero() {
		return numero;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}

	public double getSaldo() {
		return this.saldo;
	}
	
	public void saca(double valor) {
			this.saldo -= valor;	
	}

}
