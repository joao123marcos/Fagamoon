/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
class funcionario{
    //atributos
    private String nomeFunc;
    private String departamentoFunc;
    private double salarioFunc;
    private String dataAdmissaoFunc;
    private String RGFunc;
    private boolean estaPresenteFun = true;
    
    
    public void setNomeFuncionario(String novoNomeFuncionario){
        this.nomeFunc = novoNomeFuncionario;
    }
    
    public String getNomeFuncionario(){
        return this.nomeFunc;
    }
    //XXXXXXXXXXXXXXXXXXX Nome Funcionario XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    public void setDepFuncionario(String novoDepFuncionario){
        this.departamentoFunc = novoDepFuncionario;
    }
    
    public String getDepFuncionario(){
        return this.departamentoFunc;
    }
    //XXXXXXXXXXXXXXXXXX Salario Funcionario XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    public void setSalarioFunc(float novoSalarioFunc){
        this.salarioFunc = novoSalarioFunc;
    }
    
    public double getSalarioFunc(){
        return this.salarioFunc;
    }
    //XXXXXXXXXXXXXXXXXXXXX DATA ADMISSAO XXXXXXXXXXXXXXXXXXXXXXXXXX
    public void setDataAdmissao(String dataContratacao){
        this.dataAdmissaoFunc = dataContratacao;
    }
    
    public String getDataAdmissao(){
        return this.dataAdmissaoFunc;
    }
    //XXXXXXXXXXXXXXXXXXXXX RG funcionario XXXXXXXXXXXXXXXXXXXXXXXXXX
    public void setRGFuncionario(String rgFuncionario){
        this.RGFunc = rgFuncionario;
    }
    
    public String getRGFuncionario(){
        return this.RGFunc;
    }
    //XXXXXXXXXXXXXXXXXXXXX Status do funcionario no momento da contratação XXXXXXXXXXXXXXXXXXXXXXXXXX
    public boolean getFuncionarioPresente(){
        return this.estaPresenteFun;
    }
    public void setEstaPresenteFun(boolean TaNaEmpresa){
        this.estaPresenteFun = TaNaEmpresa;
    }
    
    //Construtor da Classe 
    funcionario(){
        System.out.println("Criando um funcionario sem paramentros de inicialização!");
    }
    
    funcionario(String nome_Func, String dpto_Func, float salario_Func, String dataAdm_Func, String RG_Func){
        this.nomeFunc = nome_Func;
        this.departamentoFunc = dpto_Func;
        this.salarioFunc = salario_Func;
        this.dataAdmissaoFunc = dataAdm_Func;
        this.RGFunc = RG_Func;
    }
    
    void BonificaSalarioFunionario(double Vlr_Bonificação){
        this.salarioFunc += Vlr_Bonificação;
    }
}

public class Main
{
	public static void main(String[] args) {
	    
	    funcionario joao = new funcionario("João Marcos", "Financeiro", 100, "14/09/2020", "5916533");
	    
	    System.out.println("Nome do funcionario: " + joao.getNomeFuncionario());
	    System.out.println("Departamento do funcionario: " + joao.getDepFuncionario());
	    System.out.println("Salario do funcionario: " + joao.getSalarioFunc());
	    System.out.println("Data de Admissao: " + joao.getDataAdmissao());
	    System.out.println("RG do funcionario: " + joao.getRGFuncionario());
	    System.out.println("Funcionario está presente na empresa? " + joao.getFuncionarioPresente());
	    
	    System.out.println(" ");
	    
	    joao.setEstaPresenteFun(false);
	    System.out.println("Funcionario está presente na empresa?  " + joao.getFuncionarioPresente());
	    
	    System.out.println(" ");
	    
	    joao.BonificaSalarioFunionario(14.6);
	    System.out.println("Salario do funcionario: " + joao.getSalarioFunc());
	    
	   
	}
}