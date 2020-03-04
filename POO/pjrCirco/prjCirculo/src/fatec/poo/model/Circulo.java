/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fatec.poo.model;

/**
 *
 * @author aluno
 */
public class Circulo {
    private double raio;
    public void setRaio(double r){
        raio = r;
    }
    public double getRaio(){
        return raio;
    }
    public double calcArea(){
        return (3.1416 * Math.pow(raio,2));
    }
    public double calcPerimetro(){
        return ((3.1416 * 2) * raio);
    }
    public double calcDiametro(){
        return (raio * 2);
    }
    
}
