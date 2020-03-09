#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include <QDialog>
#include "registro.h"
#include "vendas.h"
#include "estoque.h"
#include "relatorios.h"

namespace Ui {
class MenuPrincipal;
}

class MenuPrincipal : public QDialog
{
    Q_OBJECT

public:
    explicit MenuPrincipal(QWidget *parent = nullptr);
    ~MenuPrincipal();

private slots:
    void on_btn_registro_clicked();

    void on_btn_vendas_clicked();

    void on_btn_estoque_clicked();

    void on_btn_relatorios_clicked();

private:
    Ui::MenuPrincipal *ui;
};



#endif // MENUPRINCIPAL_H
