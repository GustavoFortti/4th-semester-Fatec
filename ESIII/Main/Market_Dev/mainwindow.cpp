#include <stdlib.h>
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model/Usuario.h"

Usuario User;
int cont = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::verification()
{
    QString login = ui->login->text();
    QString senha = ui->pass->text();
    QByteArray ll = login.toLocal8Bit();
    QByteArray ss = senha.toLocal8Bit();
    const char *l = ll.data();
    const char *s = ss.data();
    User.setLogin(l);
    User.setSenha(s);
    if(User.verificar() == 1)
    {
        return 1;
    }
    return 0;
}

void MainWindow::on_btn_login_clicked()
{
    int v = 1;
    if( cont == 0)
    {
        v = verification();
        cont = 1;
    }
    if( v == 1)
    {
        MenuPrincipal *w2 = new MenuPrincipal;
        w2->show();
        this->hide();
    }


}
