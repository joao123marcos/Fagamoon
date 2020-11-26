/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
class Conta{
    //atributos da classe
    protected int numero;
    protected double saldo;
  
  
    //Construtor da classe
    Conta(){
        System.out.println("Construindo uma conta.........");
    }
    
    //Metodos da classe
    public boolean sacar(double valorDoSaque){
          if (valorDoSaque > this.saldo){
              return false;
          }
        
        else{
            //realização do saque
            double saldoRestante = this.saldo - valorDoSaque;
            //atualização da variável saldo
            this.saldo = saldoRestante;
            return true;
        }
    }
    
    public void depositar(double valorDeposito){
        //incorporei o valor de deposito no meu saldo
        this.saldo += valorDeposito;
    }
    
    public void transferePara(Conta destino, double valor){
        
        //O this aqui é referente ao saldo da variável que faz referência a um objeto, que chamou este metodo
        this.saldo = this.saldo - valor;
        destino.saldo = destino.saldo + valor;
    }
    
    public double getSaldo(){
        return this.saldo; 
    }
    
}

class Poupanca extends Conta{
    
    //atributos da classe poupanca
    private double rendimento;
    private String data = "22-10-2020";
    
    //construtor da classe Poupanca
    Poupanca(double saldo){
        this.depositar(saldo);
    }

    //metodo da classe
    public void setRedimentoPoupanca(String data){
        if(this.data == data){
            this.rendimento = this.saldo + (this.saldo * 0.05);
        }
    }
    
    public double getRendimentoPoupanca(){
        return this.rendimento;
    }
}

class ContaEspecial extends Conta{
    
    //atributos da classe
    private double emprestimo;
    
    
    //construtor da classe
    ContaEspecial(double saldo){
        this.depositar(saldo);
    }
    
    //Metodos da classe
    public void setCalculaJuros(int meses){
        
        emprestimo = this.saldo * (Math.pow((1 + 0.10), meses));
    }
    
    public double getTotalContaEspecial(){
        return this.emprestimo;
    }
}


public class Main
{
	public static void main(String[] args) {
	    
	    /*Poupanca contapoupanca = new Poupanca(100);
	    
	    System.out.println("Saldo em sua poupança atualmente é: "+contapoupanca.getSaldo());
	    
	    contapoupanca.setRedimentoPoupanca("22-10-2020");
	    System.out.println("Saldo em sua poupança atualmente é: "+contapoupanca.getRendimentoPoupanca());*/
	    
	    ContaEspecial conta = new ContaEspecial(100);
	    System.out.println("Saldo em sua conta atualmente é: "+conta.getSaldo());
	    
	    conta.setCalculaJuros(2);
	    System.out.println("Saldo em sua conta atualmente é: "+conta.getTotalContaEspecial());
	    
	}
	
}