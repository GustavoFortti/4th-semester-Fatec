#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menuprincipal.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_login_clicked();
    int verification();
private:
    Ui::MainWindow *ui;
    MenuPrincipal *w2;
    Registro *w3;
    Vendas *w4;
    Estoque *w5;
    Relatorios *w6;
};
#endif // MAINWINDOW_H
