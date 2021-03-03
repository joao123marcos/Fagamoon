import java.util.Scanner;

public class Principal {
	public static void main(String[] args) {
		
		Scanner ler = new Scanner(System.in);
		
		String nome_funcionario;
		String cpf_funcionario;
		float salario_funcionario;
		String endereco;
		
		System.out.println("Informe seu nome");
        nome_funcionario = ler.next();
        System.out.println(" ");
        System.out.println("Informe o seu salario");
        salario_funcionario = ler.nextFloat();
        System.out.println(" ");
        System.out.println("Informe seu CPF");
        cpf_funcionario = ler.next();
        System.out.println(" ");
        System.out.println("Informe seu endereço");
        endereco = ler.next();
        
        Funcionario joao = new Funcionario(nome_funcionario,cpf_funcionario,salario_funcionario,endereco);
        
        System.out.println("O Nome do Funcionario é "+ joao.getNomeFuncionario());
        System.out.println(" ");
        System.out.println("O salario desse funcionairo é "+ joao.getSalarioFuncionario());
        System.out.println(" ");
        System.out.println("O endereço desse funcionario é "+ joao.getEnderecoFuncionario());
        
        System.out.println(" ");
        System.out.println("Criando um gerente............");
        
        System.out.println("Informe seu nome");
        nome_funcionario = ler.next();
        System.out.println(" ");
        System.out.println("Informe o seu salario");
        salario_funcionario = ler.nextFloat();
        System.out.println(" ");
        System.out.println("Informe seu CPF");
        cpf_funcionario = ler.next();
        System.out.println(" ");
        System.out.println("Informe seu endereço");
        endereco = ler.next();
        
        gerente maria = new gerente(nome_funcionario, cpf_funcionario, salario_funcionario, endereco);
        
        System.out.println("O Nome do Gerente é "+ maria.getNomeFuncionario());
        System.out.println(" ");
        System.out.println("O salario desse Gerente é "+ maria.getSalarioFuncionario());
        System.out.println(" ");
        System.out.println("O endereço desse Gerente é "+ maria.getEnderecoFuncionario());
		
	}

}
