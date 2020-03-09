#include "menuprincipal.h"
#include "ui_menuprincipal.h"

MenuPrincipal::MenuPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuPrincipal)
{
    ui->setupUi(this);
}

MenuPrincipal::~MenuPrincipal()
{
    delete ui;
}

void MenuPrincipal::on_btn_registro_clicked()
{
    Registro *w = new Registro;
    w->show();
    this->hide();
}

void MenuPrincipal::on_btn_vendas_clicked()
{
    Vendas *w = new Vendas;
    w->show();
    this->hide();
}

void MenuPrincipal::on_btn_estoque_clicked()
{
    Estoque *w = new Estoque;
    w->show();
    this->hide();
}

void MenuPrincipal::on_btn_relatorios_clicked()
{
    Relatorios *w = new Relatorios;
    w->show();
    this->hide();
}
