#include "vendas.h"
#include "ui_vendas.h"

Vendas::Vendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Vendas)
{
    ui->setupUi(this);
}

Vendas::~Vendas()
{
    delete ui;
}
