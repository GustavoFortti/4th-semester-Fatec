
package fatec.poo.view;

import fatec.poo.model.Atendente;
import fatec.poo.model.Hospede;
import fatec.poo.model.Pessoa;
import fatec.poo.model.QuartoHotel;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.text.DecimalFormat;

/**
 *
 * @author Caroline Lima
 */
public class GuiReservarLiberar extends javax.swing.JFrame {

    /**
     * Creates new form GuiReservarLiberar
     */
    public GuiReservarLiberar(ArrayList<Pessoa> p, ArrayList<QuartoHotel> qh) {
        initComponents();
        cadastro = p;
        hotel = qh;
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        txtNumQuarto = new javax.swing.JTextField();
        txtDataEntrada = new javax.swing.JTextField();
        txtDataSaida = new javax.swing.JTextField();
        btnSair = new javax.swing.JButton();
        btnLiberar = new javax.swing.JButton();
        lblValorPagar = new javax.swing.JLabel();
        btnReservar = new javax.swing.JButton();
        lblSituacao = new javax.swing.JLabel();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        btnNumQuarto = new javax.swing.JButton();
        txtCPF = new javax.swing.JTextField();
        txtRegFunc = new javax.swing.JTextField();
        btnRegFunc = new javax.swing.JButton();
        btnCPF = new javax.swing.JButton();
        lblRegFunc = new javax.swing.JLabel();
        lblCPF = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Reserva/Liberação Quarto");

        txtNumQuarto.setEnabled(false);

        txtDataEntrada.setEnabled(false);

        txtDataSaida.setEnabled(false);

        btnSair.setText("Sair");
        btnSair.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnSairActionPerformed(evt);
            }
        });

        btnLiberar.setText("Liberar");
        btnLiberar.setEnabled(false);
        btnLiberar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnLiberarActionPerformed(evt);
            }
        });

        lblValorPagar.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.LOWERED));

        btnReservar.setText("Reservar");
        btnReservar.setEnabled(false);
        btnReservar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnReservarActionPerformed(evt);
            }
        });

        lblSituacao.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.LOWERED));

        jLabel1.setText("No. Quarto");

        jLabel2.setText("Data Entrada");

        jLabel3.setText("Data Saída");

        jLabel4.setText("Valor a Pagar");

        jLabel5.setText("Situação");

        jLabel6.setText("Reg. Func.");

        jLabel7.setText("CPF Hospede");

        btnNumQuarto.setEnabled(false);
        btnNumQuarto.setLabel("No. Quarto");
        btnNumQuarto.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnNumQuartoActionPerformed(evt);
            }
        });

        txtCPF.setEnabled(false);

        btnRegFunc.setText("Reg. Func.");
        btnRegFunc.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnRegFuncActionPerformed(evt);
            }
        });

        btnCPF.setText("CPF Hospede");
        btnCPF.setEnabled(false);
        btnCPF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnCPFActionPerformed(evt);
            }
        });

        lblRegFunc.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.LOWERED));

        lblCPF.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.LOWERED));

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(btnReservar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(btnLiberar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(btnSair))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(23, 23, 23)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addGroup(layout.createSequentialGroup()
                                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addComponent(jLabel2)
                                            .addComponent(jLabel1)
                                            .addComponent(jLabel6))
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                            .addGroup(layout.createSequentialGroup()
                                                .addComponent(txtNumQuarto, javax.swing.GroupLayout.PREFERRED_SIZE, 41, javax.swing.GroupLayout.PREFERRED_SIZE)
                                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                                .addComponent(btnNumQuarto, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE))
                                            .addGroup(layout.createSequentialGroup()
                                                .addComponent(txtRegFunc, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
                                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                                .addComponent(btnRegFunc, javax.swing.GroupLayout.PREFERRED_SIZE, 27, javax.swing.GroupLayout.PREFERRED_SIZE))
                                            .addComponent(txtDataEntrada))
                                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addGroup(layout.createSequentialGroup()
                                                .addGap(26, 26, 26)
                                                .addComponent(lblRegFunc, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                                            .addGroup(layout.createSequentialGroup()
                                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                                .addComponent(jLabel5)
                                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                                .addComponent(lblSituacao, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(jLabel7)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(txtCPF, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btnCPF, javax.swing.GroupLayout.PREFERRED_SIZE, 27, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(26, 26, 26)
                                        .addComponent(lblCPF, javax.swing.GroupLayout.DEFAULT_SIZE, 161, Short.MAX_VALUE)))
                                .addGap(39, 39, 39))
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(jLabel4)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(lblValorPagar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(jLabel3)
                                        .addGap(18, 18, 18)
                                        .addComponent(txtDataSaida, javax.swing.GroupLayout.PREFERRED_SIZE, 113, javax.swing.GroupLayout.PREFERRED_SIZE)))
                                .addGap(48, 48, 48)))))
                .addContainerGap())
        );

        layout.linkSize(javax.swing.SwingConstants.HORIZONTAL, new java.awt.Component[] {btnLiberar, btnReservar, btnSair});

        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addGap(40, 40, 40)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(lblRegFunc, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(jLabel6)
                        .addComponent(txtRegFunc, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btnRegFunc)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(lblCPF, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(jLabel7)
                        .addComponent(txtCPF, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btnCPF)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 38, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel1)
                    .addComponent(txtNumQuarto, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btnNumQuarto)
                    .addComponent(jLabel5)
                    .addComponent(lblSituacao, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(txtDataEntrada, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(txtDataSaida, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(lblValorPagar, javax.swing.GroupLayout.PREFERRED_SIZE, 14, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(46, 46, 46)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btnSair)
                    .addComponent(btnLiberar)
                    .addComponent(btnReservar))
                .addGap(19, 19, 19))
        );

        layout.linkSize(javax.swing.SwingConstants.VERTICAL, new java.awt.Component[] {lblValorPagar, txtDataSaida});

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btnSairActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnSairActionPerformed
        dispose();
    }//GEN-LAST:event_btnSairActionPerformed

    private void btnRegFuncActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnRegFuncActionPerformed
        int x;
        for (x = 0; x < cadastro.size(); x++){ 
            if (cadastro.get(x) instanceof Atendente)
               if (((Atendente)cadastro.get(x)).getRegFunc().equals(txtRegFunc.getText())){
                   break;
               }
        }
        
        if (x < cadastro.size()){
           posAte = x; //localizou o objeto no ArrayList
        }else{
           posAte = -1;//não localizou o objeto no ArrayList
        }            
        
        if (posAte >= 0){
            lblRegFunc.setText(((Atendente)cadastro.get(posAte)).getNome());
            txtRegFunc.setEnabled(false);
            btnRegFunc.setEnabled(false);
            txtCPF.setEnabled(true);
            btnCPF.setEnabled(true);
            txtCPF.setText(null);
            lblCPF.setText(null);
            txtNumQuarto.setText(null);
            lblSituacao.setText(null);
            txtDataEntrada.setText(null);
            txtDataSaida.setText(null);
            lblValorPagar.setText(null);
            txtDataSaida.setEnabled(false);
            txtCPF.requestFocus();
        }else{
            lblRegFunc.setText("Atendente não cadastrado");
            txtCPF.setText(null);
            lblCPF.setText(null);
            txtNumQuarto.setText(null);
            lblSituacao.setText(null);
            txtDataEntrada.setText(null);
            txtDataSaida.setText(null);
            lblValorPagar.setText(null);
            txtDataSaida.setEnabled(false);
            txtRegFunc.requestFocus();
        }        
    }//GEN-LAST:event_btnRegFuncActionPerformed

    private void btnCPFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnCPFActionPerformed
        int x;
        for (x = 0; x < cadastro.size(); x++){ 
            System.out.println(cadastro.get(x).getNome());
            if (cadastro.get(x) instanceof Hospede)
               if (((Hospede)cadastro.get(x)).getCpf().equals(txtCPF.getText())){
                   break;
               }
        }
        
        if (x < cadastro.size()){
           posHos = x; //localizou o objeto no ArrayList
        }else{
           posHos = -1;//não localizou o objeto no ArrayList
        }            
        
        if (posHos >= 0){
            lblCPF.setText(((Hospede)cadastro.get(posHos)).getNome());
            txtCPF.setEnabled(false);
            btnCPF.setEnabled(false);
            txtNumQuarto.requestFocus();
            
            if (((QuartoHotel)hotel.get(posNumQua)).getHospede() == ((Hospede)cadastro.get(posHos))) {
                txtNumQuarto.setText(String.valueOf(((QuartoHotel)hotel.get(posNumQua)).getNumQuarto()));
                txtDataEntrada.setText(((QuartoHotel)hotel.get(posNumQua)).getDataEntrada());
                lblSituacao.setText("Quarto Ocupado");
                txtDataSaida.setEnabled(true);
                btnLiberar.setEnabled(true);
                txtDataSaida.requestFocus();
            } else{
                btnNumQuarto.setEnabled(true);
                txtNumQuarto.setEnabled(true);
            }

        }else{
            lblCPF.setText("Hóspede não cadastrado");
            txtCPF.requestFocus();
        }

    }//GEN-LAST:event_btnCPFActionPerformed

    private void btnNumQuartoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnNumQuartoActionPerformed
        int x;
        for (x = 0; x < hotel.size(); x++){ 
            if (hotel.get(x) instanceof QuartoHotel)
               if (((QuartoHotel)hotel.get(x)).getNumQuarto() == Integer.parseInt(txtNumQuarto.getText())){
                   break;
               }
        }
        
        if (x < hotel.size()){
           posNumQua = x; //localizou o objeto no ArrayList
        }else{
           posNumQua = -1;//não localizou o objeto no ArrayList
        }            
        
        if (posNumQua >= 0){
            if (((QuartoHotel)hotel.get(x)).getSituacao() == false) {
                txtDataEntrada.setEnabled(true);
                txtNumQuarto.setEnabled(true);
                btnReservar.setEnabled(true);
                lblSituacao.setText("Livre");
                txtDataEntrada.requestFocus();
            } else{ 
                lblSituacao.setText("Quarto ocupado");
                txtNumQuarto.requestFocus();
            }
        }else{ 
            lblSituacao.setText("Quarto Não Cadastrado"); 
            txtNumQuarto.requestFocus();
        }
    }//GEN-LAST:event_btnNumQuartoActionPerformed

    private void btnReservarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnReservarActionPerformed
       ((QuartoHotel)hotel.get(posNumQua)).setDataEntrada(txtDataEntrada.getText());
       ((QuartoHotel)hotel.get(posNumQua)).reservar(((Hospede)cadastro.get(posHos)), ((Atendente)cadastro.get(posAte)));
       
       btnReservar.setEnabled(false);
       txtRegFunc.setEnabled(true);
       btnRegFunc.setEnabled(true);
       txtNumQuarto.setEnabled(false);
       btnNumQuarto.setEnabled(false);
       txtDataEntrada.setEnabled(false);
       lblRegFunc.setText(null);
       lblCPF.setText(null);
       lblSituacao.setText(null);
       txtRegFunc.setText(null);
       txtCPF.setText(null);
       txtNumQuarto.setText(null);
       txtDataEntrada.setText(null);
       txtRegFunc.requestFocus();
    }//GEN-LAST:event_btnReservarActionPerformed

    private void btnLiberarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnLiberarActionPerformed
       DecimalFormat df = new DecimalFormat("#,##0.00");
       
       SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
       Calendar data1 = Calendar.getInstance();
       Calendar data2 = Calendar.getInstance();
       int dias;
       try {                //converte uma string no dd/mm/aaaa para 
                            //um objeto da classe Date
             data1.setTime(sdf.parse(txtDataEntrada.getText()));
             data2.setTime(sdf.parse(txtDataSaida.getText()));
       } catch (java.text.ParseException e ) { }
       dias = data2.get(Calendar.DAY_OF_YEAR) - data1.get(Calendar.DAY_OF_YEAR);
       
       lblValorPagar.setText(String.valueOf(df.format(((QuartoHotel)hotel.get(posNumQua)).liberar(dias, ((Hospede)cadastro.get(posHos)).getTxDesconto()))));
       btnLiberar.setEnabled(false);
       txtRegFunc.setEnabled(true);
       btnRegFunc.setEnabled(true);
       txtRegFunc.setText(null);
       lblRegFunc.setText(null);
       txtRegFunc.requestFocus();
    }//GEN-LAST:event_btnLiberarActionPerformed


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnCPF;
    private javax.swing.JButton btnLiberar;
    private javax.swing.JButton btnNumQuarto;
    private javax.swing.JButton btnRegFunc;
    private javax.swing.JButton btnReservar;
    private javax.swing.JButton btnSair;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel lblCPF;
    private javax.swing.JLabel lblRegFunc;
    private javax.swing.JLabel lblSituacao;
    private javax.swing.JLabel lblValorPagar;
    private javax.swing.JTextField txtCPF;
    private javax.swing.JTextField txtDataEntrada;
    private javax.swing.JTextField txtDataSaida;
    private javax.swing.JTextField txtNumQuarto;
    private javax.swing.JTextField txtRegFunc;
    // End of variables declaration//GEN-END:variables
    private ArrayList<Pessoa> cadastro;
    private ArrayList<QuartoHotel> hotel;
    private int posAte;
    private int posHos;
    private int posNumQua;
}