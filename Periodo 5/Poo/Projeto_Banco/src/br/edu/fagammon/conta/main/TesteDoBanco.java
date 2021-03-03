package br.edu.fagammon.conta.main;
import br.edu.fagammon.conta.*;

class TesteDoBanco {
	public static void main(String[] args) {
		/*
		br.edu.fagammon.conta.Banco meubanco = new br.edu.fagammon.conta.Banco();
		meubanco.setNome("banco do brasil");
		System.out.println("Nome do banco"+ meubanco.getNome());*/
		
		Banco meubanco = new Banco();
		meubanco.setNome("Banco Bradesco");
		System.out.println("Nome do banco é "+meubanco.getNome());
	}
   
}
