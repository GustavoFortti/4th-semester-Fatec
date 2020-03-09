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
        int mat = input.nextInt();
        objAl.setMatricula(mat);
        
        System.out.println("nome: ");
        String nome = input.next();
        objAl.setNome(nome);
        
        System.out.println("CPF: ");
        int cod_al = input.nextInt();
        objAl.setCpf(cod_al);
        
        System.out.println("nascimento: ");
        String nascimento = input.next();
        objAl.setNacimento(nascimento);
        
        System.out.println("RG: ");
        int rg = input.nextInt();
        objAl.setRg(rg);
        
        int choice;
        do {
            System.out.println("1 - Nome: ");
            System.out.println("2 - Codigo de matricula: ");
            System.out.println("3 - CPF: ");
            System.out.println("4 - RG: ");
            System.out.println("5 - nascimento: ");
            System.out.println("6 - sair: ");
            System.out.println("Informe: ");
            
            choice = input.nextInt();
            switch(choice){
                case 1 : System.out.println("Nome " + objAl.getNome());
                        break;
                case 2 : System.out.println("codigo da matricula " + objAl.getMatricula());
                        break;
                case 3 : System.out.println("CPF " + objAl.getCpf());
                        break;
                case 4 : System.out.println("RG " + objAl.getRg());
                        break;
                case 5 : System.out.println("Nascimento " + objAl.getNacimento());
                        break;
            }
        }while(choice < 6);
    }
}