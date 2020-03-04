
import fatec.poo.model.Circulo;
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author aluno
 */
public class Aplic {
    public static void main(String[] args) {
           Scanner entrada = new Scanner(System.in);
           Circulo objCirculo = new Circulo();
           
           System.out.println("Digite a medida do Raio: ");
           double medRaio = entrada.nextDouble();
           
           objCirculo.setRaio(medRaio);
                   
        int choice;
        do {
            System.out.println("1 - consulta area");
            System.out.println("2 - consultar perimetro");
            System.out.println("3 - consultar a diagonal");
            System.out.println("4 - sair");
            System.out.println("Informe a opcao: ");
            
            choice = entrada.nextInt();
            
            System.out.println("\n\n Medida da altura: " +
                                objCirculo.getRaio());
            switch(choice){
                case 1 : System.out.println("Area: " +
                                    objCirculo.calcArea());
                         break;
                case 2 : System.out.println("Perimetro: " +
                                    objCirculo.calcPerimetro());
                         break;
                case 3 : System.out.println("Diagonal: " +
                                    objCirculo.calcDiametro());
                         break;
            }
        } while ( choice < 4);
    
    }
}
