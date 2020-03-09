/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *grid_white;
    QLabel *background;
    QLabel *line_pass;
    QLineEdit *login;
    QLabel *backgorundWide;
    QLineEdit *pass;
    QLabel *line_login;
    QPushButton *btn_login;
    QLabel *line_blue;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1150, 630);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        grid_white = new QLabel(centralwidget);
        grid_white->setObjectName(QString::fromUtf8("grid_white"));
        grid_white->setEnabled(true);
        grid_white->setGeometry(QRect(60, 40, 1021, 551));
        grid_white->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 70));"));
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-240, -140, 1600, 950));
        background->setPixmap(QPixmap(QString::fromUtf8("../../images/d6cd4e57ce4e931e6cb2d30a8cf9e860.jpg")));
        background->setScaledContents(true);
        background->setWordWrap(false);
        line_pass = new QLabel(centralwidget);
        line_pass->setObjectName(QString::fromUtf8("line_pass"));
        line_pass->setEnabled(true);
        line_pass->setGeometry(QRect(440, 340, 300, 2));
        line_pass->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        login = new QLineEdit(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(440, 250, 300, 31));
        login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 0));\n"
"\n"
"color: white;"));
        login->setFrame(false);
        backgorundWide = new QLabel(centralwidget);
        backgorundWide->setObjectName(QString::fromUtf8("backgorundWide"));
        backgorundWide->setEnabled(true);
        backgorundWide->setGeometry(QRect(0, 0, 1150, 630));
        backgorundWide->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 170));"));
        pass = new QLineEdit(centralwidget);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(440, 310, 300, 31));
        pass->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 0));\n"
"\n"
"color: white;"));
        pass->setFrame(false);
        pass->setEchoMode(QLineEdit::Password);
        line_login = new QLabel(centralwidget);
        line_login->setObjectName(QString::fromUtf8("line_login"));
        line_login->setEnabled(true);
        line_login->setGeometry(QRect(440, 280, 300, 2));
        line_login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        btn_login = new QPushButton(centralwidget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setGeometry(QRect(520, 470, 141, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0, 0, 1, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(31, 216, 218, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0, 0, 1, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(31, 216, 218, 255));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0, 0, 1, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(31, 216, 218, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0, 0, 1, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(31, 216, 218, 255));
        QBrush brush5(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0, 0, 1, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(31, 216, 218, 255));
        QBrush brush6(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        QLinearGradient gradient5(0, 0, 1, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(31, 216, 218, 255));
        QBrush brush7(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient6(0, 0, 1, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(31, 216, 218, 255));
        QBrush brush9(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient7(0, 0, 1, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(31, 216, 218, 255));
        QBrush brush10(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        QLinearGradient gradient8(0, 0, 1, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(31, 216, 218, 255));
        QBrush brush11(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush12(QColor(255, 255, 255, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        btn_login->setPalette(palette);
        QFont font;
        font.setPointSize(13);
        btn_login->setFont(font);
        btn_login->setCursor(QCursor(Qt::PointingHandCursor));
        btn_login->setStyleSheet(QString::fromUtf8("#btn_login{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(31, 216, 218, 255));\n"
"	color: white;\n"
"	border: 0px;\n"
"}\n"
"#btn_login:pressed{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(56, 126, 128, 255));\n"
"}\n"
"\n"
""));
        btn_login->setAutoDefault(false);
        btn_login->setFlat(false);
        line_blue = new QLabel(centralwidget);
        line_blue->setObjectName(QString::fromUtf8("line_blue"));
        line_blue->setEnabled(true);
        line_blue->setGeometry(QRect(60, 40, 5, 551));
        line_blue->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(31, 216, 218, 255));"));
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        backgorundWide->raise();
        grid_white->raise();
        login->raise();
        btn_login->raise();
        line_blue->raise();
        line_login->raise();
        line_pass->raise();
        pass->raise();

        retranslateUi(MainWindow);

        btn_login->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        grid_white->setText(QString());
        background->setText(QString());
        line_pass->setText(QString());
        backgorundWide->setText(QString());
        line_login->setText(QString());
        btn_login->setText(QCoreApplication::translate("MainWindow", "Entrar", nullptr));
        line_blue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
