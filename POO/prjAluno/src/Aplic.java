import java.util.Scanner;
import fatec.poo.model.Aluno;
import java.text.DecimalFormat;

/**
 *
 * @author ds_magico
 */
public class Aplic {


    public static void main(String[] args) {
        DecimalFormat df = new DecimalFormat("0.00");
        Scanner input = new Scanner(System.in);
        Aluno objAl = new Aluno();
        
        System.out.println("Informe:\n");
        
        System.out.println("O RA do aluno: ");
        objAl.setRa(input.nextInt());
        
        System.out.println("Nota da prova 1: ");
        objAl.setNtPrv1(input.nextDouble());
        
        System.out.println("Nota da prova 2: ");
        objAl.setNtPrv2(input.nextDouble());
        
        System.out.println("Nota da trabalho 1: ");
        objAl.setNtTrab1(input.nextDouble());
        
        System.out.println("Nota da trabalho 2: ");
        objAl.setNtTrab2(input.nextDouble());
        
        int choice;
        do {
            System.out.println("1 - Media das provas: ");
            System.out.println("2 - Media dos trabalhos: ");
            System.out.println("3 - Media final: ");
            System.out.println("4 - Situação do aluno: ");
            System.out.println("5 - sair: ");
            System.out.println("\n\nInforme: ");
            
            choice = input.nextInt();
            switch(choice){
                case 1 : System.out.println("RA               " + objAl.getRa());
                         System.out.println("nota da prova 1  " + df.format(objAl.getNtPrv1()));
                         System.out.println("nota da prova 2  " + df.format(objAl.getNtPrv2()));
                         System.out.println("Media das provas " + df.format(objAl.CalcMediaProva()));
                        break;
                case 2 : System.out.println("RA                  " + objAl.getRa()); 
                         System.out.println("nota da trabalho 1  " + df.format(objAl.getNtTrab1()));
                         System.out.println("nota da trabalho 2  " + df.format(objAl.getNtTrab2()));
                         System.out.println("Media dos trabalhos " + df.format(objAl.CalcMediaTrab()));
                        break;
                case 3 : System.out.println("RA                     " + objAl.getRa()); 
                         System.out.println("Calcular a media final " + df.format(objAl.CalcMediaFinal()));
                         break;
                case 4 : System.out.print("O aluno esta ");
                         if (objAl.estaAprovado() == true) {
                             System.out.println("aprovado\n");
                         }
                         else {
                             System.out.println("reprovado\n");
                         }
                        break;
            }
        }while(choice < 5);
    }
}