/********************************************************************************
** Form generated from reading UI file 'admindashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AdminDashboard
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *AdminToPatientlineEdit;
    QPushButton *AdminViewPatientPshButton;
    QLabel *label_3;
    QLineEdit *AdminToStafflineEdit;
    QPushButton *AdminViewStaffPshButton;
    QLabel *label_4;
    QTextEdit *AdminNametextEdit;
    QTextEdit *AdminIDtextEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QPushButton *pushButton;

    void setupUi(QDialog *AdminDashboard)
    {
        if (AdminDashboard->objectName().isEmpty())
            AdminDashboard->setObjectName("AdminDashboard");
        AdminDashboard->resize(921, 586);
        label = new QLabel(AdminDashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 50, 121, 20));
        label_2 = new QLabel(AdminDashboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 260, 231, 31));
        AdminToPatientlineEdit = new QLineEdit(AdminDashboard);
        AdminToPatientlineEdit->setObjectName("AdminToPatientlineEdit");
        AdminToPatientlineEdit->setGeometry(QRect(310, 260, 271, 31));
        AdminViewPatientPshButton = new QPushButton(AdminDashboard);
        AdminViewPatientPshButton->setObjectName("AdminViewPatientPshButton");
        AdminViewPatientPshButton->setGeometry(QRect(70, 300, 181, 29));
        label_3 = new QLabel(AdminDashboard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 430, 271, 31));
        AdminToStafflineEdit = new QLineEdit(AdminDashboard);
        AdminToStafflineEdit->setObjectName("AdminToStafflineEdit");
        AdminToStafflineEdit->setGeometry(QRect(350, 430, 321, 31));
        AdminViewStaffPshButton = new QPushButton(AdminDashboard);
        AdminViewStaffPshButton->setObjectName("AdminViewStaffPshButton");
        AdminViewStaffPshButton->setGeometry(QRect(70, 470, 181, 31));
        label_4 = new QLabel(AdminDashboard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 100, 151, 20));
        AdminNametextEdit = new QTextEdit(AdminDashboard);
        AdminNametextEdit->setObjectName("AdminNametextEdit");
        AdminNametextEdit->setGeometry(QRect(150, 140, 181, 31));
        AdminIDtextEdit = new QTextEdit(AdminDashboard);
        AdminIDtextEdit->setObjectName("AdminIDtextEdit");
        AdminIDtextEdit->setGeometry(QRect(490, 140, 91, 31));
        label_5 = new QLabel(AdminDashboard);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 140, 81, 21));
        label_6 = new QLabel(AdminDashboard);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(460, 140, 31, 31));
        lineEdit = new QLineEdit(AdminDashboard);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 200, 111, 31));
        label_7 = new QLabel(AdminDashboard);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 200, 81, 31));
        pushButton = new QPushButton(AdminDashboard);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 200, 93, 29));

        retranslateUi(AdminDashboard);

        QMetaObject::connectSlotsByName(AdminDashboard);
    } // setupUi

    void retranslateUi(QDialog *AdminDashboard)
    {
        AdminDashboard->setWindowTitle(QCoreApplication::translate("AdminDashboard", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AdminDashboard", "Admin Dashboard", nullptr));
        label_2->setText(QCoreApplication::translate("AdminDashboard", "Enter the username of the patient:", nullptr));
        AdminViewPatientPshButton->setText(QCoreApplication::translate("AdminDashboard", "View/Edit patient Info.", nullptr));
        label_3->setText(QCoreApplication::translate("AdminDashboard", "Enter the username of the staff member:", nullptr));
        AdminViewStaffPshButton->setText(QCoreApplication::translate("AdminDashboard", "View/Edit staff Info.", nullptr));
        label_4->setText(QCoreApplication::translate("AdminDashboard", "Admin Information:", nullptr));
        label_5->setText(QCoreApplication::translate("AdminDashboard", "Username:", nullptr));
        label_6->setText(QCoreApplication::translate("AdminDashboard", "ID:", nullptr));
        label_7->setText(QCoreApplication::translate("AdminDashboard", "New Name:", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminDashboard", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDashboard: public Ui_AdminDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
