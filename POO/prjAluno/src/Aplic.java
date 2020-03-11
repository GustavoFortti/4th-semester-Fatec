import java.util.Scanner;
import fatec.poo.model.Aluno;

/**
 *
 * @author ds_magico
 */
public class Aplic {


    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Aluno objAl = new Aluno();
        
        System.out.println("Informe:\n");
        
        System.out.println("Codigo de matricula: ");
        int RA = input.nextInt();
        objAl.setRA(RA);
        
        System.out.println("Nota da prova 1: ");
        double NtPrv1 = input.nextInt();
        objAl.setNtPrv1(NtPrv1);
        
        System.out.println("Nota da prova 2: ");
        double NtPrv2 = input.nextInt();
        objAl.setNtPrv2(NtPrv2);
        
        System.out.println("Nota da trabalho 1: ");
        double NtTrab1 = input.nextInt();
        objAl.setNtTrab1(NtTrab1);
        
        System.out.println("Nota da trabalho 2: ");
        double NtTrab2 = input.nextInt();
        objAl.setNtTrab2(NtTrab2);
        
        int choice;
        do {
            System.out.println("1 - RA: ");
            System.out.println("2 - nota da prova 1: ");
            System.out.println("3 - nota da prova 2: ");
            System.out.println("4 - nota da trabalho 1: ");
            System.out.println("5 - nota da trabalho 2: ");
            System.out.println("6 - media das provas: ");
            System.out.println("7 - media dos trabalhos: ");
            System.out.println("8 - media final: ");
            System.out.println("9 - sair: ");
            System.out.println("Informe: ");
            
            choice = input.nextInt();
            switch(choice){
                case 1 : System.out.println("RA " + objAl.getRA());
                        break;
                case 2 : System.out.println("nota da prova 1 " + objAl.getNtPrv1());
                        break;
                case 3 : System.out.println("nota da prova 2 " + objAl.getNtPrv2());
                        break;
                case 4 : System.out.println("nota da trabalho 1 " + objAl.getNtTrab1());
                        break;
                case 5 : System.out.println("nota da trabalho 2 " + objAl.getNtTrab2());
                        break;
                case 6 : System.out.println("Calcular a media das provas " + objAl.CalcMediaProva());
                        break;
                case 7 : System.out.println("Calcular a media dos trabalhos " + objAl.CalcMediaTrab());
                        break;
                case 8 : System.out.println("Calcular a media final " + objAl.CalcMediaFinal());
                        break;
            }
        }while(choice < 9);
    }
}

