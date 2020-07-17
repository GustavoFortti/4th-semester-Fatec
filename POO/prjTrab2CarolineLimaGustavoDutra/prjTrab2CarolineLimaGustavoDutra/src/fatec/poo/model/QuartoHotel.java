package fatec.poo.model;

/**
 *
 * @author Caroline Lima
 */
public class QuartoHotel {
    private int numQuarto;
    private double valorDiaria;
    private boolean situacao;
    private String dataEntrada;
    private double totalFaturado;
    private Hospede hospede;
    private Atendente atendente;

    public QuartoHotel(int numQuarto, double valorDiaria) {
        this.numQuarto = numQuarto;
        this.valorDiaria = valorDiaria;
    }
    
    public void reservar(Hospede h, Atendente a) {
        situacao = true;
        hospede = h;
        atendente = a;
        hospede.setQuartoHotel(this);
        atendente.addQuartoHotel(this);
    }
    
    public double liberar(int qtdeDias, double txDesconto){
        situacao = false;
        dataEntrada = null;
        hospede = null;
        atendente = null;
        totalFaturado = (valorDiaria * qtdeDias) - ((valorDiaria * qtdeDias) * (txDesconto / 100));
        return totalFaturado;
    }

    public void setDataEntrada(String dataEntrada) {
        this.dataEntrada = dataEntrada;
    }

    public int getNumQuarto() {
        return numQuarto;
    }

    public double getValorDiaria() {
        return valorDiaria;
    }

    public boolean getSituacao() {
        return situacao;
    }

    public String getDataEntrada() {
        return dataEntrada;
    }

    public double getTotalFaturado() {
        return totalFaturado;
    }

    public Hospede getHospede() {
        return hospede;
    }

    public Atendente getAtendente() {
        return atendente;
    }
    
}
