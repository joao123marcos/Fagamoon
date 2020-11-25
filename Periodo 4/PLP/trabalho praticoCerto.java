/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.Scanner;

class Conta{
    //atributos da classe
    protected int numero;
    protected String dono;
    protected double saldo;
    protected double limite;
  
  
    //Construtor da classe
    Conta(int numero){
        this.numero = numero;
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
    
    public void setNomeCliente(String nomeCliente){
        this.dono = nomeCliente;
    }
    
    public String getNomeCliente(){
        return this.dono;
    }
    
}

class Poupanca extends Conta{
    
    //atributos da classe poupanca
    private double rendimento;
    private String data = "22-10-2020";
    
    //construtor da classe Poupanca
    Poupanca(int numero){
    /*Na subclasse eu preciso usar o super pra ele usar o construtor da superclasse, então preciso 
      os mesmos parametros que o construtor da superclasse usa */
        super(numero);
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
    ContaEspecial(int numero){
        super(numero);
    }
    
    //Metodos da classe
    public void setCalculaJuros(int meses){
        
        emprestimo = this.saldo * (Math.pow((1 + 0.10), meses));
    }
    
    public double getTotalContaEspecial(){
        return this.emprestimo;
    }
}


class Agencia{
    //atributos dessa classe
    private int numeroAgencia;
    private String nomeAgencia;
    
    public String getNomeAgencia(){
        return this.nomeAgencia;
    }
    
    public int getNumeroAgencia(){
        return this.numeroAgencia;
    }
    
    //construtor da classe
    public Agencia(String nome, int numeroAgencia){
        this.numeroAgencia = numeroAgencia;
        this.nomeAgencia = nome;
    }
}

public class Main
{
	public static void main(String[] args) {
	    
	    Scanner ler = new Scanner(System.in);
	    
	    int opcao = 0;
	    
	    do{
	        System.out.println("1- Criar uma agencia.");
	        System.out.println("2- Criar um conta.");
	        System.out.println("3- Saldo em conta.");
	        System.out.println("4- Informa o dono da conta.");
	        System.out.println("5- Depositar.");
	        System.out.println("6- sacar.");
	        System.out.println("7- tranferir.");
	        System.out.println("0- Encerar.");
	        System.out.println("Digite sua opção: ");
	        opcao= ler.nextInt();
	        switch(opcao){
	            case 1:
	                String nomeAgencia;
	                int numeroAgencia;
	 
	                System.out.println("Informe o nome da agencia bancaria:");
	                nomeAgencia = ler.next();
	                System.out.println(" ");
	                System.out.println("Informe o numero da agencia");
	                numeroAgencia = ler.nextInt();
	                System.out.println(" ");
	                Agencia agLavras = new Agencia(nomeAgencia, numeroAgencia);
	                System.out.println("Agencia criada com sucesso!");
	                System.out.println(" ");
	                break;
	            //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx    
	            case 2:
	                int numeroDeConta;
	                double saldoInicial;
	                String nomeCliente;
	                
	                System.out.println("Informe seu nome: ");
	                nomeCliente = ler.next();
	                System.out.println(" ");
	                System.out.println("Informe saldo inicial: ");
	                saldoInicial = ler.nextDouble();
	                System.out.println(" ");
	                System.out.println("Informe um número: ");
	                numeroDeConta = ler.nextInt();
	                System.out.println(" ");
	                
	                Conta C1 = new Conta(numeroDeConta);
	                
	                C1.depositar(saldoInicial);
	                C1.setNomeCliente(nomeCliente);
	                
	                System.out.println(" ");
	                System.out.println("Conta Criada com sucesso!");
	                break;
	            //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	            case 3:
	                System.out.println("Seu saldo em conta é: "+ C1.getSaldo());
	                System.out.println(" ");
	                break;
	            //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	            case 4:
	                System.out.println("O dono da conta é: "+ C1.getNomeCliente());
	                System.out.println(" ");
	                break;
	            //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	            case 5:
	                double vlrDeposito;
	                
	                System.out.println("Quanto vai querer depositar: ");
	                vlrDeposito = ler.nextDouble();
	                
	                C1.depositar(vlrDeposito);
	                break;
	            //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	            case 6:
	                double vlrSaque;
	                
	                System.out.println("Quanto vai querer Sacar: ");
	                vlrSaque = ler.nextDouble();
	                
	                C1.Sacar(vlrSaque);
	                break;
	            //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	            case 7:
	                double vlrTransferencia;
	                Conta destino;
	                
	                System.out.println("Quanto vai querer Transferir: ");
	                vlrTransferencia = ler.nextDouble();
	                System.out.println(" ");
	                
	                C1.transferePara(1,vlrTransferencia);
	                break;
	            //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	            case 0:
	                System.out.println("Tchaul!");
	                break;
	            //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	            default:
	                System.out.println("opção inválida!");
	            //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	    }
	    
	}while(opcao != 0);
  
  }

}
