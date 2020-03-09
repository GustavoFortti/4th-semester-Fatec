/********************************************************************************
** Form generated from reading UI file 'estoque.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTOQUE_H
#define UI_ESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Estoque
{
public:
    QPushButton *btn_registro;
    QPushButton *btn_estoque;
    QPushButton *btn_relatorios;
    QPushButton *btn_vendas;
    QLabel *wide_white;
    QLabel *line_blue;
    QLabel *background;
    QPushButton *btn_menu;
    QLabel *faixa_branca;
    QLabel *logo;
    QLabel *backgorundWide;

    void setupUi(QDialog *Estoque)
    {
        if (Estoque->objectName().isEmpty())
            Estoque->setObjectName(QString::fromUtf8("Estoque"));
        Estoque->resize(1200, 700);
        btn_registro = new QPushButton(Estoque);
        btn_registro->setObjectName(QString::fromUtf8("btn_registro"));
        btn_registro->setGeometry(QRect(620, 25, 81, 30));
        QFont font;
        font.setPointSize(15);
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
        btn_estoque = new QPushButton(Estoque);
        btn_estoque->setObjectName(QString::fromUtf8("btn_estoque"));
        btn_estoque->setGeometry(QRect(890, 25, 81, 30));
        btn_estoque->setFont(font);
        btn_estoque->setCursor(QCursor(Qt::PointingHandCursor));
        btn_estoque->setStyleSheet(QString::fromUtf8("#btn_estoque{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));\n"
"	\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"	border: 0px;\n"
"}\n"
"#btn_estoque:pressed{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"	\n"
"}\n"
""));
        btn_estoque->setAutoDefault(false);
        btn_relatorios = new QPushButton(Estoque);
        btn_relatorios->setObjectName(QString::fromUtf8("btn_relatorios"));
        btn_relatorios->setGeometry(QRect(1010, 25, 101, 30));
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
        btn_vendas = new QPushButton(Estoque);
        btn_vendas->setObjectName(QString::fromUtf8("btn_vendas"));
        btn_vendas->setGeometry(QRect(760, 25, 71, 30));
        btn_vendas->setFont(font);
        btn_vendas->setCursor(QCursor(Qt::PointingHandCursor));
        btn_vendas->setStyleSheet(QString::fromUtf8("#btn_vendas{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));\n"
"	color: black;\n"
"	border: 0px;\n"
"}\n"
"#btn_vendas:pressed{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"	\n"
"}\n"
""));
        btn_vendas->setAutoDefault(false);
        wide_white = new QLabel(Estoque);
        wide_white->setObjectName(QString::fromUtf8("wide_white"));
        wide_white->setEnabled(true);
        wide_white->setGeometry(QRect(10, 90, 1180, 600));
        wide_white->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 70));"));
        line_blue = new QLabel(Estoque);
        line_blue->setObjectName(QString::fromUtf8("line_blue"));
        line_blue->setEnabled(true);
        line_blue->setGeometry(QRect(10, 90, 5, 600));
        line_blue->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(31, 216, 218, 255));"));
        background = new QLabel(Estoque);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-240, -140, 1600, 950));
        background->setPixmap(QPixmap(QString::fromUtf8("../../images/d6cd4e57ce4e931e6cb2d30a8cf9e860.jpg")));
        background->setScaledContents(true);
        background->setWordWrap(false);
        btn_menu = new QPushButton(Estoque);
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
        faixa_branca = new QLabel(Estoque);
        faixa_branca->setObjectName(QString::fromUtf8("faixa_branca"));
        faixa_branca->setEnabled(true);
        faixa_branca->setGeometry(QRect(0, 0, 1200, 80));
        faixa_branca->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        logo = new QLabel(Estoque);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setEnabled(true);
        logo->setGeometry(QRect(10, 10, 351, 60));
        logo->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        logo->setPixmap(QPixmap(QString::fromUtf8("../../images/logo (c\303\263pia).png")));
        backgorundWide = new QLabel(Estoque);
        backgorundWide->setObjectName(QString::fromUtf8("backgorundWide"));
        backgorundWide->setEnabled(true);
        backgorundWide->setGeometry(QRect(0, 0, 1200, 700));
        backgorundWide->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 170));"));
        background->raise();
        backgorundWide->raise();
        faixa_branca->raise();
        logo->raise();
        btn_vendas->raise();
        btn_registro->raise();
        btn_estoque->raise();
        btn_menu->raise();
        btn_relatorios->raise();
        wide_white->raise();
        line_blue->raise();

        retranslateUi(Estoque);

        QMetaObject::connectSlotsByName(Estoque);
    } // setupUi

    void retranslateUi(QDialog *Estoque)
    {
        Estoque->setWindowTitle(QCoreApplication::translate("Estoque", "Dialog", nullptr));
        btn_registro->setText(QCoreApplication::translate("Estoque", "Registro", nullptr));
        btn_estoque->setText(QCoreApplication::translate("Estoque", "Estoque", nullptr));
        btn_relatorios->setText(QCoreApplication::translate("Estoque", "Relatorios", nullptr));
        btn_vendas->setText(QCoreApplication::translate("Estoque", "Vendas", nullptr));
        wide_white->setText(QString());
        line_blue->setText(QString());
        background->setText(QString());
        btn_menu->setText(QCoreApplication::translate("Estoque", "Menu", nullptr));
        faixa_branca->setText(QString());
        logo->setText(QString());
        backgorundWide->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Estoque: public Ui_Estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTOQUE_H
