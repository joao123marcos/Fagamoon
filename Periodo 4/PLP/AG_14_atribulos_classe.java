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
    /*O modificador STATIC é usando para quando eu preciso compartilhar variáveis
    entre os objetos instanciados para a classe*/
    private static int contContas = 0;
    
    public double getSaldo(){
        return this.saldo;
    }
    
    public void setDono(String novoDono){
        this.dono = novoDono;
    }
    
    /*Então para este método que agr faz uso de uma variável que é compartilhada
    por todos os objetos instanciados da classe, a sua chamada deve ser feita
    pela classe (já que agr ele é um atributo da classe é não do objeto) por isso 
    ele deve-se colocar static no método também e não mais colocar this e sim 
    colocar o nome da classe*/
    public static int totalDeContas(){
        return conta.contContas;
    }
    
    //Construtor da classe
    conta(){
        System.out.println("Construindo uma conta.........");
        contContas++;
    }
    
    conta(String titular, double saldoInicial){
        this.dono = titular;
        this.saldo = saldoInicial;
        System.out.println("Construindo uma conta com inicialização de parametros");
        contContas++; 
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
    
    conta clone(conta a){
        conta novo = new conta();
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
	    c1.setDono("João Marcos");
	    c1.depositar(100);
	    System.out.println("Saldo da c1: " + c1.getSaldo());
	    System.out.println(" ");
	    
	    conta c2 = c1.clone(c1);
	    c1.setDono("João");
	    c2.depositar(200);
	    
	    c2.transferePara(c1, 250);
	    
	    System.out.println("Saldo da c1: " + c1.getSaldo());
	    System.out.println("Saldo da c2: " + c2.getSaldo());
	    
	    /*Como este método agora faz uso de uma atributo da classe, é ela que
	    que tem que chamar o método e não um objeto*/
	    System.out.println("Quantidade de contas " + conta.totalDeContas());
	    
	    
	    if(c1 == c2){
	        System.out.println("Contas iguais!");
	    }
	    
	    //A comparação dos atributos são iguais
	    if(c1.getSaldo() == c2.getSaldo()){
	        System.out.println("Saldos iguais!");
	    }
	}
	
}