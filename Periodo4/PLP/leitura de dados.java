/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
/*trabalhando com interação do usuário - para fazer a leitura de dados primeiro preciso seguir alguns passos
   
   1ª - Importar a classe Scanner - Scanner é a classe onde o cin estaria implementada
   2ª - Ter uma Variável que faça referência a classe Scanner  (System.in é entrada de dados)
   
*/
import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    
	    // Variável que faz referência a classe Scanner
	    Scanner ler = new Scanner(System.in);+
	    
	    int n;
	    System.out.println("Informe um núemero: ");
	    
	    n = ler.nextInt();   //ler.nextInt() representa o cin do C++
	    
	    System.out.println("Valor armazenado na variável "+n);
	    
		System.out.println("Hello World");
	}
}
