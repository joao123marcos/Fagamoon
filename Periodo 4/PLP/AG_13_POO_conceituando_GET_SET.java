/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/


class conta{
    //atributos da classe
    int numero;
    private String dono;
    private double saldo;
    double limite;
    
    //crio este método porque agora meu saldo é um atributo privado
    public double getSaldo(){
        return this.saldo;
    }
    
    //crio este método porque agora meu dono é um atributo privado
    public void setDono(String novoDono){
        this.dono = novoDono;
    }
    
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
   /*Estou criando este método como publico porque agora o meu atributo saldo é privado.
     a partir de então todo objeto instanciado terá acesso ao método sacar*/
   
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
    
    conta clone(conta a){
        conta novo = new conta();  // instanciando um objeto e chamando o construtor da classe
        novo.saldo = a.saldo;
        novo.numero = a.numero;
        novo.dono = a.dono;
        novo.limite = a.limite;
        
        return novo;
    }
    
    public void transferePara(conta destino, double valor){
        
        //O this aqui é referente ao saldo da variável que faz referência a um objeto, que chamou este metodo
        this.saldo = this.saldo - valor;
        destino.saldo = destino.saldo + valor;
    }
}

public class Main
{
	public static void main(String[] args) {
	    
	    conta c1 = new conta();
	    
	    //acessando o dono da classe conta
	    c1.setDono("João Marcos");
	    c1.depositar(100);
	    
	    System.out.println("Saldo da c1: " + c1.getSaldo() );
	    
	    //conta c2 = c1; // linha importantissima (c1 e c2 apontam para o mesmo espaço de memoria)
	    
	    conta c2 = c1.clone(c1);
	    c1.setDono("João");
	    
	    c2.depositar(200); //c1 e c2 tem o mesmo valor porque eu copiei a 
	    //referência (o endereço para onde c1 aponta) para c2 e com isso como usei 
	   //o metodo depositar adicionei no espaço de memoria onde já tinha 100 reais 
	  //200 reais. Por tanto é correto afirmar que c1 e c2 tem agora o mesmo valor.
	    
	    System.out.println("Saldo da c1: " + c1.getSaldo() );
	    System.out.println("Saldo da c2: " + c2.getSaldo() );
	    
	    System.out.println(c1); //Note que c1 aponta para um espaço de memoria, tanto que ta ai o endereço da memoria
	    System.out.println(c2);
	    
	    c2.transferePara(c1, 50);
	    
	    System.out.println("Saldo da c1: " + c1.getSaldo());
	    System.out.println("Saldo da c2: " + c2.getSaldo());
	    
	}
}