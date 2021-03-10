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
	
	public double getGastos() {
		return (super.getGastos()) + (quatidade_aulas_ministradas * 10);
	}
   
}
