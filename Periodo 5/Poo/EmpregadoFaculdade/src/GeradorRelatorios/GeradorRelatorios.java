package GeradorRelatorios;
import EmpregadoFaculdade.*;


public class GeradorRelatorios {
   public void relatorio(EmpregadoFaculdade a){
	   a.getGastos();
	   a.getInfo();
	   System.out.println("passou no gerador de relatorio");
   }
}
