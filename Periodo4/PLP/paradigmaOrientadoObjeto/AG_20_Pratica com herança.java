/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
class Funcionario{
    
    //atributos da classe
    protected String nomeFuncionario;
    protected String CPF_Funcionario;
    protected double salarioFuncionario;
    
    
    //metodos da classe
    public String getNomeFuncionario(){
        return this.nomeFuncionario;
    }
    
    public void setNomeFuncionario(String nome){
        this.nomeFuncionario = nome;
    }
    
    //Bonificação de 20% para o funcionario
    public double getBonificacao(){
        return this.salarioFuncionario * 0.20;
    }
    
    public void setSalario(double Salario){
        this.salarioFuncionario = Salario;
    }
}

class Gerente extends Funcionario{
    
    //atributos dessa classe
    private int numFuncionariosGerenciados;
    
    
    Gerente(String nomeFunc, int numFuncGer){
        //acessando diretamente o atributo da superclasse
        this.nomeFuncionario = nomeFunc;
        this.numFuncionariosGerenciados = numFuncGer;
    }
    
    //metodos dessa classe
    public void setnumFuncionariosGerenciados(int num){
        this.numFuncionariosGerenciados = num;
    }
    
    public int getNunFuncionariosGerenciados(){
        return this.numFuncionariosGerenciados;
    }
    /*Bonificação de 15% para o funcionario, porém o metodo que esta escrito em funcionario foi sobreescrevida
    public double getBonificacao(){
        return this.salarioFuncionario * 0.15;
    }*/
    
    //Bonificação de 15% para o funcionario, porém o metodo que esta escrito em funcionario não foi sobreescrevida
    public double getBonificacao(){
        return super.getBonificacao() + 1000;
    }
}


public class Main
{
	public static void main(String[] args) {
	    
	    Gerente funcionariogerente = new Gerente("João Marcos dos Santos Pires", 10);
	    System.out.println(funcionariogerente.getNomeFuncionario());
	    System.out.println(funcionariogerente.getNunFuncionariosGerenciados());
	    
	    //Inserindo no atributo nomeFuncionario um valor mas usando a subclasse e um método public da superClasse para realizar tal ação!
	      funcionariogerente.setNomeFuncionario("João Pedro");
	    
	   //Acessando agora o método da subclasse gerente!
	     funcionariogerente.setnumFuncionariosGerenciados(8);
	     
	    System.out.println(" ");
	    System.out.println(funcionariogerente.getNomeFuncionario());
	    System.out.println(funcionariogerente.getNunFuncionariosGerenciados());
	    
	    
	    funcionariogerente.setSalario(5000);
	    
	    System.out.println(" ");
	    
	    double bonus = funcionariogerente.getBonificacao();
	    System.out.println("Bonificação "+ bonus);
	    
	}
	
}