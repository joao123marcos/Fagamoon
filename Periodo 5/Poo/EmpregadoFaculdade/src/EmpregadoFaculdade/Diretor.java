package EmpregadoFaculdade;

public class Diretor extends EmpregadoFaculdade {
	
	//atributos da subclasse
	private int coordenacursos;
	private int qtd_aulas_ministradas;

	//metodos da subclasse
	public int getQtd_aulas_ministradas() {
		return this.qtd_aulas_ministradas;
	}
	
	public void setQtd_aulas_ministradas(int qtd_aulas_ministradas) {
		this.qtd_aulas_ministradas = qtd_aulas_ministradas;
		
	}
	
	public int getCoordenacursos() {
		return coordenacursos;
	}

	public void setCoordenacursos(int coordenacursos) {
		this.coordenacursos = coordenacursos;
	}
    
	//@overrite
	public double getGastos() {
		return (super.getGastos()+ (this.qtd_aulas_ministradas*20));
	}
	
	public String getInfo() {
		return (super.getInfo()+",\n"+qtd_aulas_ministradas+" * 20 por aulas ministradas, "
	            +"totalizando "+qtd_aulas_ministradas *20+ ",\ne administra "
				+coordenacursos+" curso(s)");
	}
}
