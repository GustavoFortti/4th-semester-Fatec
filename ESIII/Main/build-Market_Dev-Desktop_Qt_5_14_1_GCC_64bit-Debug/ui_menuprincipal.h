/********************************************************************************
** Form generated from reading UI file 'menuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MenuPrincipal
{
public:
    QLabel *line_blue;
    QLabel *grid_white;
    QLabel *background;
    QLabel *backgorundWide;
    QLabel *grid_white_2;
    QLabel *grid_white_3;
    QPushButton *btn_menu;
    QPushButton *btn_registro;
    QPushButton *btn_vendas;
    QPushButton *btn_estoque;
    QPushButton *btn_relatorios;

    void setupUi(QDialog *MenuPrincipal)
    {
        if (MenuPrincipal->objectName().isEmpty())
            MenuPrincipal->setObjectName(QString::fromUtf8("MenuPrincipal"));
        MenuPrincipal->resize(1200, 700);
        line_blue = new QLabel(MenuPrincipal);
        line_blue->setObjectName(QString::fromUtf8("line_blue"));
        line_blue->setEnabled(true);
        line_blue->setGeometry(QRect(10, 90, 5, 600));
        line_blue->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(31, 216, 218, 255));"));
        grid_white = new QLabel(MenuPrincipal);
        grid_white->setObjectName(QString::fromUtf8("grid_white"));
        grid_white->setEnabled(true);
        grid_white->setGeometry(QRect(10, 90, 1180, 600));
        grid_white->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 70));"));
        background = new QLabel(MenuPrincipal);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-240, -140, 1600, 950));
        background->setPixmap(QPixmap(QString::fromUtf8("../../images/d6cd4e57ce4e931e6cb2d30a8cf9e860.jpg")));
        background->setScaledContents(true);
        background->setWordWrap(false);
        backgorundWide = new QLabel(MenuPrincipal);
        backgorundWide->setObjectName(QString::fromUtf8("backgorundWide"));
        backgorundWide->setEnabled(true);
        backgorundWide->setGeometry(QRect(0, 0, 1200, 700));
        backgorundWide->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 170));"));
        grid_white_2 = new QLabel(MenuPrincipal);
        grid_white_2->setObjectName(QString::fromUtf8("grid_white_2"));
        grid_white_2->setEnabled(true);
        grid_white_2->setGeometry(QRect(0, 0, 1200, 80));
        grid_white_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        grid_white_3 = new QLabel(MenuPrincipal);
        grid_white_3->setObjectName(QString::fromUtf8("grid_white_3"));
        grid_white_3->setEnabled(true);
        grid_white_3->setGeometry(QRect(10, 10, 351, 60));
        grid_white_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        grid_white_3->setPixmap(QPixmap(QString::fromUtf8("../../images/logo (c\303\263pia).png")));
        btn_menu = new QPushButton(MenuPrincipal);
        btn_menu->setObjectName(QString::fromUtf8("btn_menu"));
        btn_menu->setGeometry(QRect(500, 25, 61, 30));
        QFont font;
        font.setPointSize(15);
        btn_menu->setFont(font);
        btn_menu->setCursor(QCursor(Qt::PointingHandCursor));
        btn_menu->setStyleSheet(QString::fromUtf8("#btn_menu{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"	border: 0px;\n"
"}\n"
"#btn_menu:pressed{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"}\n"
""));
        btn_menu->setAutoDefault(false);
        btn_registro = new QPushButton(MenuPrincipal);
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
"		color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"}\n"
""));
        btn_registro->setAutoDefault(false);
        btn_vendas = new QPushButton(MenuPrincipal);
        btn_vendas->setObjectName(QString::fromUtf8("btn_vendas"));
        btn_vendas->setGeometry(QRect(760, 25, 71, 30));
        btn_vendas->setFont(font);
        btn_vendas->setCursor(QCursor(Qt::PointingHandCursor));
        btn_vendas->setStyleSheet(QString::fromUtf8("#btn_vendas{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));\n"
"	\n"
"	color: black;\n"
"	border: 0px;\n"
"}\n"
"#btn_vendas:pressed{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"	\n"
"}\n"
""));
        btn_vendas->setAutoDefault(false);
        btn_estoque = new QPushButton(MenuPrincipal);
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
        btn_relatorios = new QPushButton(MenuPrincipal);
        btn_relatorios->setObjectName(QString::fromUtf8("btn_relatorios"));
        btn_relatorios->setGeometry(QRect(1010, 25, 101, 30));
        btn_relatorios->setFont(font);
        btn_relatorios->setCursor(QCursor(Qt::PointingHandCursor));
        btn_relatorios->setStyleSheet(QString::fromUtf8("#btn_relatorios{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));\n"
"	\n"
"	color: black;\n"
"	border: 0px;\n"
"}\n"
"#btn_relatorios:pressed{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 215, 215, 255));\n"
"	\n"
"}\n"
""));
        btn_relatorios->setAutoDefault(false);
        background->raise();
        backgorundWide->raise();
        grid_white->raise();
        grid_white_2->raise();
        grid_white_3->raise();
        btn_menu->raise();
        btn_registro->raise();
        btn_vendas->raise();
        btn_estoque->raise();
        btn_relatorios->raise();
        line_blue->raise();

        retranslateUi(MenuPrincipal);

        QMetaObject::connectSlotsByName(MenuPrincipal);
    } // setupUi

    void retranslateUi(QDialog *MenuPrincipal)
    {
        MenuPrincipal->setWindowTitle(QCoreApplication::translate("MenuPrincipal", "Dialog", nullptr));
        line_blue->setText(QString());
        grid_white->setText(QString());
        background->setText(QString());
        backgorundWide->setText(QString());
        grid_white_2->setText(QString());
        grid_white_3->setText(QString());
        btn_menu->setText(QCoreApplication::translate("MenuPrincipal", "Menu", nullptr));
        btn_registro->setText(QCoreApplication::translate("MenuPrincipal", "Registro", nullptr));
        btn_vendas->setText(QCoreApplication::translate("MenuPrincipal", "Vendas", nullptr));
        btn_estoque->setText(QCoreApplication::translate("MenuPrincipal", "Estoque", nullptr));
        btn_relatorios->setText(QCoreApplication::translate("MenuPrincipal", "Relatorios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPrincipal: public Ui_MenuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
