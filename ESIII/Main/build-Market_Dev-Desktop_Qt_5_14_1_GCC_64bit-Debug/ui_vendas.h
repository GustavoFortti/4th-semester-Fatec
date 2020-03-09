/********************************************************************************
** Form generated from reading UI file 'vendas.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENDAS_H
#define UI_VENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Vendas
{
public:
    QLabel *backgorundWide;
    QPushButton *btn_relatorios;
    QPushButton *btn_vendas;
    QLabel *background;
    QPushButton *btn_menu;
    QLabel *faixa_branca;
    QLabel *line_blue;
    QPushButton *btn_registro;
    QLabel *wide_white;
    QPushButton *btn_estoque;
    QLabel *logo;

    void setupUi(QDialog *Vendas)
    {
        if (Vendas->objectName().isEmpty())
            Vendas->setObjectName(QString::fromUtf8("Vendas"));
        Vendas->resize(1200, 700);
        backgorundWide = new QLabel(Vendas);
        backgorundWide->setObjectName(QString::fromUtf8("backgorundWide"));
        backgorundWide->setEnabled(true);
        backgorundWide->setGeometry(QRect(0, 0, 1200, 700));
        backgorundWide->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 170));"));
        btn_relatorios = new QPushButton(Vendas);
        btn_relatorios->setObjectName(QString::fromUtf8("btn_relatorios"));
        btn_relatorios->setGeometry(QRect(1010, 25, 101, 30));
        QFont font;
        font.setPointSize(15);
        btn_relatorios->setFont(font);
        btn_relatorios->setCursor(QCursor(Qt::PointingHandCursor));
        btn_relatorios->setStyleSheet(QString::fromUtf8("#btn_relatorios{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));\n"
"	color: black;\n"
"\n"
"	border: 0px;\n"
"}\n"
"#btn_relatorios:pressed{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"	\n"
"}\n"
""));
        btn_relatorios->setAutoDefault(false);
        btn_vendas = new QPushButton(Vendas);
        btn_vendas->setObjectName(QString::fromUtf8("btn_vendas"));
        btn_vendas->setGeometry(QRect(760, 25, 71, 30));
        btn_vendas->setFont(font);
        btn_vendas->setCursor(QCursor(Qt::PointingHandCursor));
        btn_vendas->setStyleSheet(QString::fromUtf8("#btn_vendas{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"	border: 0px;\n"
"}\n"
"#btn_vendas:pressed{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"	\n"
"}\n"
""));
        btn_vendas->setAutoDefault(false);
        background = new QLabel(Vendas);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-240, -140, 1600, 950));
        background->setPixmap(QPixmap(QString::fromUtf8("../../images/d6cd4e57ce4e931e6cb2d30a8cf9e860.jpg")));
        background->setScaledContents(true);
        background->setWordWrap(false);
        btn_menu = new QPushButton(Vendas);
        btn_menu->setObjectName(QString::fromUtf8("btn_menu"));
        btn_menu->setGeometry(QRect(500, 25, 61, 30));
        btn_menu->setFont(font);
        btn_menu->setCursor(QCursor(Qt::PointingHandCursor));
        btn_menu->setStyleSheet(QString::fromUtf8("#btn_menu{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));\n"
"	\n"
"	color: black;\n"
"	border: 0px;\n"
"}\n"
"#btn_menu:pressed{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"}\n"
""));
        btn_menu->setAutoDefault(false);
        faixa_branca = new QLabel(Vendas);
        faixa_branca->setObjectName(QString::fromUtf8("faixa_branca"));
        faixa_branca->setEnabled(true);
        faixa_branca->setGeometry(QRect(0, 0, 1200, 80));
        faixa_branca->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        line_blue = new QLabel(Vendas);
        line_blue->setObjectName(QString::fromUtf8("line_blue"));
        line_blue->setEnabled(true);
        line_blue->setGeometry(QRect(10, 90, 5, 600));
        line_blue->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(31, 216, 218, 255));"));
        btn_registro = new QPushButton(Vendas);
        btn_registro->setObjectName(QString::fromUtf8("btn_registro"));
        btn_registro->setGeometry(QRect(620, 25, 81, 30));
        btn_registro->setFont(font);
        btn_registro->setCursor(QCursor(Qt::PointingHandCursor));
        btn_registro->setStyleSheet(QString::fromUtf8("#btn_registro{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));\n"
"	color: black;\n"
"	border: 0px;\n"
"}\n"
"#btn_registro:pressed{;\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(56, 126, 128, 255));\n"
"}\n"
""));
        btn_registro->setAutoDefault(false);
        wide_white = new QLabel(Vendas);
        wide_white->setObjectName(QString::fromUtf8("wide_white"));
        wide_white->setEnabled(true);
        wide_white->setGeometry(QRect(10, 90, 1180, 600));
        wide_white->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 70));"));
        btn_estoque = new QPushButton(Vendas);
        btn_estoque->setObjectName(QString::fromUtf8("btn_estoque"));
        btn_estoque->setGeometry(QRect(890, 25, 81, 30));
        btn_estoque->setFont(font);
        btn_estoque->setCursor(QCursor(Qt::PointingHandCursor));
        btn_estoque->setStyleSheet(QString::fromUtf8("#btn_estoque{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));\n"
"	\n"
"	color: black;\n"
"	border: 0px;\n"
"}\n"
"#btn_estoque:pressed{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"	\n"
"}\n"
""));
        btn_estoque->setAutoDefault(false);
        logo = new QLabel(Vendas);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setEnabled(true);
        logo->setGeometry(QRect(10, 10, 351, 60));
        logo->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        logo->setPixmap(QPixmap(QString::fromUtf8("../../images/logo (c\303\263pia).png")));
        background->raise();
        backgorundWide->raise();
        faixa_branca->raise();
        btn_registro->raise();
        btn_estoque->raise();
        btn_relatorios->raise();
        btn_vendas->raise();
        btn_menu->raise();
        logo->raise();
        wide_white->raise();
        line_blue->raise();

        retranslateUi(Vendas);

        QMetaObject::connectSlotsByName(Vendas);
    } // setupUi

    void retranslateUi(QDialog *Vendas)
    {
        Vendas->setWindowTitle(QCoreApplication::translate("Vendas", "Dialog", nullptr));
        backgorundWide->setText(QString());
        btn_relatorios->setText(QCoreApplication::translate("Vendas", "Relatorios", nullptr));
        btn_vendas->setText(QCoreApplication::translate("Vendas", "Vendas", nullptr));
        background->setText(QString());
        btn_menu->setText(QCoreApplication::translate("Vendas", "Menu", nullptr));
        faixa_branca->setText(QString());
        line_blue->setText(QString());
        btn_registro->setText(QCoreApplication::translate("Vendas", "Registro", nullptr));
        wide_white->setText(QString());
        btn_estoque->setText(QCoreApplication::translate("Vendas", "Estoque", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Vendas: public Ui_Vendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENDAS_H
