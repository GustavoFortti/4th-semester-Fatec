package fatec.poo.model;

import java.util.ArrayList;

/**
 *
 * @author Caroline Lima
 */
public class Atendente extends Pessoa{
    private String regFunc;
    private String turno;
    private ArrayList<QuartoHotel> quartoHotel;

    public Atendente(String regFunc, String nome) {
        super(nome);
        this.regFunc = regFunc;
        quartoHotel = new ArrayList<QuartoHotel>();
    }

    public void setTurno(String turno) {
        this.turno = turno;
    }

    public String getRegFunc() {
        return regFunc;
    }

    public String getTurno() {
        return turno;
    }
    
    public void addQuartoHotel(QuartoHotel quartoHotel){
        this.quartoHotel.add(quartoHotel);
    }
}
