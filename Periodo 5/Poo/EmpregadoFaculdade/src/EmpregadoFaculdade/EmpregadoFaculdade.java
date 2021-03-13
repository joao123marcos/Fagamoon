package EmpregadoFaculdade;

public class EmpregadoFaculdade {
    
	//atributos da classe
	private String nome;
    private double salario;
	
    //metodos da classe
    public String getNome() {
		return nome;
	}
    
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public void setSalario(double salario) {
		this.salario = salario;
	}
  
	public double getGastos() {
		return this.salario;
	}
	
	public String getInfo() {
		return "Nome: "+ this.nome + " com salario base "+this.salario;
	}
}
