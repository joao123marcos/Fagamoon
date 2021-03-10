package Principal;
import EmpregadoFaculdade.*;

import GeradorRelatorios.*;
import java.util.Scanner;

public class ProgramaPrincipal {
	public static void main(String[] args) {
		
		Scanner ler = new Scanner(System.in);
		
		String nome;
		double salario;
		int aulas_ministradas;
		
		System.out.println("Informe seu nome: ");
		nome = ler.next();
		System.out.println(" ");
		System.out.println("Informe seu salario: ");
		salario = ler.nextDouble();
		System.out.println(" ");
		System.out.println("Quantas aulas você ministrou? ");
		aulas_ministradas = ler.nextInt();
		System.out.println(" ");
		
		GeradorRelatorios relatorio = new GeradorRelatorios();
		Professor joao = new Professor();
		joao.setNome(nome);
		joao.setSalario(salario);
		joao.setQuatidade_aulas_ministradas(aulas_ministradas);
		
		relatorio.relatorio(joao);
		System.out.println(joao.getInfo());
		
		
		//System.out.println(" ");
		//System.out.println("Seu nome "+joao.getNome());
		//System.out.println("Seu salario "+joao.getGastos());
		//System.out.println(" ");
/////////////////////////////////////////////////////////////////////
		
		System.out.println("Informe seu nome: ");
		nome = ler.next();
		System.out.println(" ");
		System.out.println("Informe seu salario: ");
		salario = ler.nextDouble();
		System.out.println(" ");
		
		EmpregadoFaculdade maria = new EmpregadoFaculdade();
		maria.setNome(nome);
		maria.setSalario(salario);
		
		System.out.println(" ");
		
		relatorio.relatorio(maria);

		//System.out.println("Seu nome "+maria.getNome());
		//System.out.println("Seu salario "+maria.getGastos());
		//System.out.println(" ");
	  
		

	}

}
