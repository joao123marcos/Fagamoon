package EmpregadoFaculdade;

public class Professor extends EmpregadoFaculdade {
	
	//atributas da subclasse
	private int quatidade_aulas_ministradas;

	
	//metodos da subclasse
	public int getQuatidade_aulas_ministradas() {
		return quatidade_aulas_ministradas;
	}

	public void setQuatidade_aulas_ministradas(int quatidade_aulas_ministradas) {
		this.quatidade_aulas_ministradas = quatidade_aulas_ministradas;
	}
	
	//sobrescrita do metodo
	public double getGastos() {
		return (super.getGastos() + (this.quatidade_aulas_ministradas * 10));
	}
	
	public String getInfo() {
		return (super.getInfo() + " horas aulas "+(quatidade_aulas_ministradas * 10));
	}
   
}
