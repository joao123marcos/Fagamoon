package ContaBancaria;

public class ContaCorrente extends Conta {
	//atributos da subclasse
	private double LimiteChequeEspecial;

	//metodos da subclasse
	public double getLimiteChequeEspecial() {
		return LimiteChequeEspecial;
	}

	public void setLimiteChequeEspecial(double limiteChequeEspecial) {
		LimiteChequeEspecial = limiteChequeEspecial;
	}
	
	public void saca(double valor) {
		if(valor <= (super.saldo+LimiteChequeEspecial))
			super.saca(valor);
	}

}
