package br.edu.fagammon.banco.main;
import ContaBancaria.*;

import java.util.Scanner;

public class principalProva {
	public static void main(String[] args) {
		
		Scanner ler = new Scanner(System.in);
		
		double saldo = 0;
		String nome = "";
		int numero = 0;
		double limite,valor = 0;
		
		System.out.println("Informe seu nome");
        nome = ler.next();
        System.out.println(" ");
        System.out.println("Infome um número > 0 e < 100");
        numero = ler.nextInt();
        
        ContaCorrente cc = new ContaCorrente();
        
        cc.setNome(nome);
        cc.setNumero(numero);
        System.out.println("Vamos depositar um saldo inicial");
        System.out.println("Informe um saldo inicial");
        saldo = ler.nextDouble();
        System.out.println(" ");
        cc.deposita(saldo);
        System.out.println("Qual o limite do seu cheque especial");
        limite = ler.nextDouble();
        System.out.println("Informe um valor para sacar");
        valor = ler.nextDouble();
        cc.saca(valor);
        System.out.println("Novo saldo de sua conta é: "+ cc.getSaldo());
	}
}
