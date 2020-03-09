#include "relatorios.h"
#include "ui_relatorios.h"

Relatorios::Relatorios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Relatorios)
{
    ui->setupUi(this);
}

Relatorios::~Relatorios()
{
    delete ui;
}
