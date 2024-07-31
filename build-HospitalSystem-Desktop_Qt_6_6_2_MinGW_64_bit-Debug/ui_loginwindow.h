/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *LoginPageLabel;
    QLabel *LoginNameLabel;
    QLineEdit *LoginNameLEdit;
    QLabel *LoginPassLabel;
    QLineEdit *LoginPassLEdit;
    QPushButton *LoginPshButtom;
    QLabel *label_4;
    QPushButton *SignUpPshButton;
    QLabel *LoginErrorLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        LoginPageLabel = new QLabel(centralwidget);
        LoginPageLabel->setObjectName("LoginPageLabel");
        LoginPageLabel->setGeometry(QRect(320, 70, 81, 41));
        LoginPageLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"}"));
        LoginNameLabel = new QLabel(centralwidget);
        LoginNameLabel->setObjectName("LoginNameLabel");
        LoginNameLabel->setGeometry(QRect(120, 150, 121, 20));
        LoginNameLEdit = new QLineEdit(centralwidget);
        LoginNameLEdit->setObjectName("LoginNameLEdit");
        LoginNameLEdit->setGeometry(QRect(250, 140, 341, 31));
        LoginPassLabel = new QLabel(centralwidget);
        LoginPassLabel->setObjectName("LoginPassLabel");
        LoginPassLabel->setGeometry(QRect(120, 200, 111, 20));
        LoginPassLEdit = new QLineEdit(centralwidget);
        LoginPassLEdit->setObjectName("LoginPassLEdit");
        LoginPassLEdit->setGeometry(QRect(250, 200, 341, 31));
        LoginPshButtom = new QPushButton(centralwidget);
        LoginPshButtom->setObjectName("LoginPshButtom");
        LoginPshButtom->setGeometry(QRect(120, 290, 91, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 350, 161, 31));
        SignUpPshButton = new QPushButton(centralwidget);
        SignUpPshButton->setObjectName("SignUpPshButton");
        SignUpPshButton->setGeometry(QRect(280, 350, 93, 29));
        LoginErrorLabel = new QLabel(centralwidget);
        LoginErrorLabel->setObjectName("LoginErrorLabel");
        LoginErrorLabel->setGeometry(QRect(120, 250, 241, 16));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        LoginPageLabel->setText(QCoreApplication::translate("LoginWindow", "Login Page", nullptr));
        LoginNameLabel->setText(QCoreApplication::translate("LoginWindow", "Enter username: ", nullptr));
        LoginPassLabel->setText(QCoreApplication::translate("LoginWindow", "Enter password:", nullptr));
        LoginPshButtom->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "Don't have an account? ", nullptr));
        SignUpPshButton->setText(QCoreApplication::translate("LoginWindow", "Sign Up", nullptr));
        LoginErrorLabel->setText(QCoreApplication::translate("LoginWindow", "Error: wrong username or password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
