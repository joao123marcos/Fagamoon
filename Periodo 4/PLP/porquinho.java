/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
class cofrinho{
    //atributos da Class
    private double saldo;
    
    //construtor da Class
    cofrinho(double saldoInicial){
        this.saldo = saldoInicial;
    }
    
    //metodos da Class
    
    public double getSaldoCofrio(){
        return this.saldo;
    }
    
    public void depositaCofrio(double valorDeposito){
        this.saldo = saldo + valorDeposito;
    }
    
    public void arrobaCofrinho(double valorRetirada){
        this.saldo = saldo - valorRetirada;
    }
    
    
}

public class Main
{
	public static void main(String[] args) {
		
		cofrinho porquinho = new cofrinho(10);
		
		porquinho.depositaCofrio(10);
		System.out.println("Saldo no porquinho é "+ porquinho.getSaldoCofrio());
		
		porquinho.arrobaCofrinho(9.50);
		System.out.println("Saldo no porquinho é "+ porquinho.getSaldoCofrio());
	}
}
		
