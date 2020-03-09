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
    private int matricula;
    private String nome;
    private String nacimento;
    private int rg;
    private int cpf; 
    
    public void setMatricula(int m) {
        matricula = m;
    }
    public void setNome(String n) {
        nome = n;
    }
    public void setNacimento(String na) {
        nacimento = na;
    }
    public void setRg(int r) {
        rg = r;
    }
    public void setCpf(int c) {
        cpf = c;
    }
    
    public int getMatricula() {
        return matricula;
    }
    public String getNome() {
        return nome;
    }
    public String getNacimento() {
        return nacimento;
    }
    public int getRg() {
        return rg;
    }
    public int getCpf() {
        return cpf;
    }
}
