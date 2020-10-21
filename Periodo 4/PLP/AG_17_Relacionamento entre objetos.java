/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
class conta{
    //atributos da classe
    private int numero;
    private String dono;
    private double saldo;
    private double limite;
    private static int contContas = 0;
    
    public double getSaldo(){
        return this.saldo;
    }
    
    public void setDono(String novoDono){
        this.dono = novoDono;
    }
    
    public static int totalDeContas(){
        return conta.contContas;
    }
    
    //Construtor da classe
    conta(int numero){
        saldo = 0;
        this.numero = numero;
        System.out.println("Construindo uma conta.........");
    }
    
    conta(int numero, double saldoInicial){
        this.numero = numero;
        this.saldo = saldoInicial;
        System.out.println("Construindo uma conta com inicialização de parametros");
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
    
    /*conta clone(conta a){
        conta novo = new conta();
        novo.saldo = a.saldo;
        novo.numero = a.numero;
        novo.dono = a.dono;
        novo.limite = a.limite;
        
        return novo;
    }*/
    
    public void transferePara(conta destino, double valor){
        
        //O this aqui é referente ao saldo da variável que faz referência a um objeto, que chamou este metodo
        this.saldo = this.saldo - valor;
        destino.saldo = destino.saldo + valor;
    }
}

/*Observação: O que relaciona a classe conta com a classe agência são 
as contas pertencentes a esta Agencia, por isso de alguma forma essas duas
classes precisam conversar... Relacionamento de composição: Uma agência 
possui várias contas........*/

class Agencia{
    //atributos dessa classe
    private String nomeAgencia;
    //aqui eu estou criando uma variável que faz referencia a um objeto que é um vetor
    private conta[] contasDestaAgencia;
    //Me retorna o número de contas ativas e me ajudar a a incrementar o proximo número de conta 
    private int contasAtivas;
    
    public String getNomeAgencia(){
        return this.nomeAgencia;
    }
    
    public int getContasAtivas(){
        return this.contasAtivas;
    }
    
    //construtor da classe
   /*Este construtor deve ser public para que a minha classe conta consiga conversara classe conta*/
                                /*No momento em que eu estiver criando a  agencia eu passo no parametro nroContas que repesenta o tamanho do vetor*/
    public Agencia(String nome, int nroContas){
        this.nomeAgencia = nome;
        contasDestaAgencia = new conta[nroContas];
        //recebe zero porque quando inicio uma agencia de imediato não tem contasAtivas
        contasAtivas = 0;
    }
    
    //metodo que vai me retornar o número de contas ativas dentro de minha agencia
    public int criarContasNaAgencia(){
        int proxNroCont = contasAtivas +1;
                                            //chamando o construtor da classe conta 
        contasDestaAgencia [contasAtivas] = new conta(proxNroCont);
        contasAtivas++;
        return proxNroCont;
    }
}

public class Main
{
	public static void main(String[] args) {
	    
	    Agencia agLavras = new Agencia("Agencia de lavras banco do brasil", 100000);
	    
	    System.out.println("Nome da a agencia bancaria: "+ agLavras.getNomeAgencia());
	    System.out.println("Contas ativas até agora: "+ agLavras.getContasAtivas());
	    System.out.println(" ");
	    
	    
	    //criando contas em minha agencia
	    int numeroDeconta = agLavras.criarContasNaAgencia();
	    System.out.println("Contas ativas até agora: "+ agLavras.getContasAtivas());
	}
	
}