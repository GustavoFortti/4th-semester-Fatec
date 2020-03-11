
import fatec.poo.model.Retangulo;
import java.util.Scanner;
/**
 *
 * @author Gustavo
 */
public class Aplic {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        //Retangulo objRet = new Retangulo();
        double medBase, medAlt;
        
        String unidade;
        System.out.println("Digite a unidade: ");
        unidade = entrada.next();
        Retangulo objRet = new Retangulo(unidade);
        
        System.out.println("Digite a medida da altura: ");
        medAlt = entrada.nextDouble();
        System.out.println("Digite a medida da base: ");
        medBase = entrada.nextDouble();
    
        objRet.setAltura(medAlt);
        objRet.setBase(medBase);
        
        int choice;
        do {
            System.out.println("1 - consulta area");
            System.out.println("2 - consultar perimetro");
            System.out.println("3 - consultar a diagonal");
            System.out.println("4 - sair");
            System.out.println("Informe a opcao: ");
            
            choice = entrada.nextInt();
            
            System.out.println("\n\n Medida da altura: " + objRet.getAltura() + " " + objRet.getUnidadeMedida());
            System.out.println("\n\n Medida da Base: " + objRet.getBase() + " " + objRet.getUnidadeMedida());
            switch(choice){
                case 1 : System.out.println("Area: " + objRet.calcArea() + " " + objRet.getUnidadeMedida() + "²");
                         break;
                case 2 : System.out.println("Perimetro: " + objRet.calcPerimetro() + " " + objRet.getUnidadeMedida());
                         break;
                case 3 : System.out.println("Diagonal: " + objRet.calcDiagonal() + " " + objRet.getUnidadeMedida());
                         break;
            }
        } while ( choice < 4);
    }
}