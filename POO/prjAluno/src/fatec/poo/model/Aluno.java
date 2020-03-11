/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fatec.poo.model;

/**
 *
 * @author ds_magico
 */
public class Aluno {
    private int RA;
    private double NtPrv1;
    private double NtPrv2;
    private double NtTrab1;
    private double NtTrab2;
    
    public void setRA(int r) {
        RA = r;
    }

    public void setNtPrv1(double n1) {
        NtPrv1 = n1;
    }    
    
    public void setNtPrv2(double n2) {
        NtPrv2 = n2;
    }    
    
    public void setNtTrab1(double t1) {
        NtTrab1 = t1;
    }
    
    public void setNtTrab2(double t2) {
        NtTrab2 = t2;
    }
    
    public int getRA() {
        return RA;
    }
    
    public double getNtPrv1() {
        return NtPrv1;
    }

    public double getNtPrv2() {
        return NtPrv2;
    }
    
    public double getNtTrab1() {
        return NtTrab1;
    }
    
    public double getNtTrab2() {
        return NtTrab2;
    }
    
    public double CalcMediaProva() {
        return ((NtPrv1 * 0.75) + (NtPrv2 * 0.35));
    }
    
    public double CalcMediaTrab() {
        return ((NtTrab1 * 0.25) + (NtTrab2 * 0.75));
    }
    
    public double CalcMediaFinal() {
        return ((CalcMediaProva() * 0.50) + (CalcMediaTrab() * 0.50));
    }
}
