/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

class conta{
    //atributos da classe
    int numero;
    String dono;
    double saldo;
    double limite;
    
    //Construtor da classe
    conta(){
        System.out.println("Construindo uma conta.........");
    }
    
    conta(String titular, double saldoInicial){
        this.dono = titular;
        this.saldo = saldoInicial;
        System.out.println("Construindo uma conta com inicialização de parametros");
    }
    
    
    //Metodos da classe 
    boolean sacar(double valorDoSaque){
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
    
    void depositar(double valorDeposito){
        //incorporei o valor de deposito no meu saldo
        this.saldo += valorDeposito;
    }
}

public class Main
{
	public static void main(String[] args) {
	    
	    // declaração da variável do tipo conta
	    conta contaQueEstouCriando;
	    //instaciei o objeto contaQueEstouCriando atraves do NEW 
	    contaQueEstouCriando = new conta(); //neste momento além de instanciar um objeto para classe estou chamando o construtor da classe
	    //atribuição de valores
	    contaQueEstouCriando.numero = 123456;
	    contaQueEstouCriando.dono = "João Marcos";
	    contaQueEstouCriando.saldo = 1000;
	    
	    System.out.println("Dono da conta é: "+contaQueEstouCriando.dono);
	    System.out.println("Número  da conta é: "+contaQueEstouCriando.numero);
	    System.out.println("saldo  da conta é: "+contaQueEstouCriando.saldo);
	    System.out.println(" ");
	    
	    //ação de sacar
	   /* Verifiquei se o saldo em conta disponivel era maior que o meu valor de saque usando  o metodo SACAR
	   e Verifiquei o valor do retorno atraves desta variável retornoDoSaque*/
	    boolean retornoDoSaque = contaQueEstouCriando.sacar(200);// usando o objeto da classe
	    if(retornoDoSaque){
	        System.out.println("Saque realizado com sucesso, novo saldo da conta é: "+contaQueEstouCriando.saldo);
	    }
	    
	    else{
	        System.out.println("Saldo não realizado!");
	    }
	    
	    System.out.println("Dono da conta é: "+contaQueEstouCriando.dono);
	    System.out.println("Número  da conta é: "+contaQueEstouCriando.numero);
	    System.out.println(" ");
	    
	    //ação de depositar
	    contaQueEstouCriando.depositar(600);// usando o objeto da classe
	    System.out.println("Deposito em conta!");
	    System.out.println("Dono da conta é: "+contaQueEstouCriando.dono);
	    System.out.println("Número  da conta é: "+contaQueEstouCriando.numero);
	    System.out.println("saldo  da conta é: "+contaQueEstouCriando.saldo);
	    System.out.println("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
	    //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	    
	    /*Note que é possível ter dois construtores para uma classe, porém não tem muito sentido eu ter 
	    um construtor que não receba parametros para que os objetos da classe seja iniciados.Dessa maneira 
	    o mais interessante é que os objetos já sejam instaciados com valores padrões para que logo após 
	    sua criaçãojá seja possível trabalhar com eles*/
	      System.out.println(" ");
	    conta contaJoaoMarcos;
	    contaJoaoMarcos = new conta("João Marcos", 10);
	    
	    System.out.println("Dono da conta é: "+contaJoaoMarcos.dono);
	    System.out.println("saldo  da conta é: "+contaJoaoMarcos.saldo);
	    System.out.println(" ");
	    
	    retornoDoSaque = contaJoaoMarcos.sacar(200);// usando o objeto da classe
	    if(retornoDoSaque){
	        System.out.println("Saque realizado com sucesso, novo saldo da conta é: "+contaQueEstouCriando.saldo);
	    }
	    
	    else{
	        System.out.println("Saldo não realizado!");
	    }
	    
	    
		System.out.println("Hello World");
		
		System.out.println(contaQueEstouCriando);
		System.out.println(contaJoaoMarcos);
	}
}
