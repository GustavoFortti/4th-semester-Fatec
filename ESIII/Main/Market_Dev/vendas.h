#ifndef VENDAS_H
#define VENDAS_H

#include <QDialog>

namespace Ui {
class Vendas;
}

class Vendas : public QDialog
{
    Q_OBJECT

public:
    explicit Vendas(QWidget *parent = nullptr);
    ~Vendas();

private:
    Ui::Vendas *ui;
};

#endif // VENDAS_H
