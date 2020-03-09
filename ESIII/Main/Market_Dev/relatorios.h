#ifndef RELATORIOS_H
#define RELATORIOS_H

#include <QDialog>

namespace Ui {
class Relatorios;
}

class Relatorios : public QDialog
{
    Q_OBJECT

public:
    explicit Relatorios(QWidget *parent = nullptr);
    ~Relatorios();

private:
    Ui::Relatorios *ui;
};

#endif // RELATORIOS_H
