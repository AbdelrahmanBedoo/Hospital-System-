/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *SignNamelineEdit;
    QLineEdit *SignPasslineEdit;
    QLineEdit *lineEdit_3;
    QPushButton *SignUpPshButton;
    QComboBox *RolecomboBox;
    QLabel *label_5;

    void setupUi(QDialog *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName("SignUpWindow");
        SignUpWindow->resize(782, 561);
        label = new QLabel(SignUpWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 60, 151, 20));
        label_2 = new QLabel(SignUpWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 130, 111, 20));
        label_3 = new QLabel(SignUpWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 170, 111, 20));
        label_4 = new QLabel(SignUpWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 210, 131, 20));
        SignNamelineEdit = new QLineEdit(SignUpWindow);
        SignNamelineEdit->setObjectName("SignNamelineEdit");
        SignNamelineEdit->setGeometry(QRect(270, 120, 351, 31));
        SignPasslineEdit = new QLineEdit(SignUpWindow);
        SignPasslineEdit->setObjectName("SignPasslineEdit");
        SignPasslineEdit->setGeometry(QRect(270, 170, 351, 31));
        lineEdit_3 = new QLineEdit(SignUpWindow);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(270, 210, 351, 31));
        SignUpPshButton = new QPushButton(SignUpWindow);
        SignUpPshButton->setObjectName("SignUpPshButton");
        SignUpPshButton->setGeometry(QRect(380, 310, 121, 29));
        RolecomboBox = new QComboBox(SignUpWindow);
        RolecomboBox->addItem(QString());
        RolecomboBox->addItem(QString());
        RolecomboBox->addItem(QString());
        RolecomboBox->setObjectName("RolecomboBox");
        RolecomboBox->setGeometry(QRect(190, 270, 80, 26));
        label_5 = new QLabel(SignUpWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 270, 63, 20));

        retranslateUi(SignUpWindow);

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QDialog *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QCoreApplication::translate("SignUpWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignUpWindow", "Create your account", nullptr));
        label_2->setText(QCoreApplication::translate("SignUpWindow", "Enter username: ", nullptr));
        label_3->setText(QCoreApplication::translate("SignUpWindow", "Enter password:", nullptr));
        label_4->setText(QCoreApplication::translate("SignUpWindow", "Confirm password: ", nullptr));
        SignUpPshButton->setText(QCoreApplication::translate("SignUpWindow", "Create Account", nullptr));
        RolecomboBox->setItemText(0, QCoreApplication::translate("SignUpWindow", "Admin", nullptr));
        RolecomboBox->setItemText(1, QCoreApplication::translate("SignUpWindow", "Healthcare provider", nullptr));
        RolecomboBox->setItemText(2, QCoreApplication::translate("SignUpWindow", "Patient", nullptr));

        label_5->setText(QCoreApplication::translate("SignUpWindow", "Role:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
