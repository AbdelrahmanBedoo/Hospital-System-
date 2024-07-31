/********************************************************************************
** Form generated from reading UI file 'staffdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFDASHBOARD_H
#define UI_STAFFDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_StaffDashboard
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *StaffNametextEdit;
    QLabel *label_4;
    QTextEdit *StaffIDtextEdit;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QPushButton *StaffToPatientPshButton;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *StaffDashboard)
    {
        if (StaffDashboard->objectName().isEmpty())
            StaffDashboard->setObjectName("StaffDashboard");
        StaffDashboard->resize(917, 592);
        label = new QLabel(StaffDashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(420, 50, 121, 20));
        label_2 = new QLabel(StaffDashboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 110, 121, 20));
        label_3 = new QLabel(StaffDashboard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 150, 71, 20));
        StaffNametextEdit = new QTextEdit(StaffDashboard);
        StaffNametextEdit->setObjectName("StaffNametextEdit");
        StaffNametextEdit->setGeometry(QRect(150, 150, 181, 31));
        label_4 = new QLabel(StaffDashboard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(490, 150, 63, 20));
        StaffIDtextEdit = new QTextEdit(StaffDashboard);
        StaffIDtextEdit->setObjectName("StaffIDtextEdit");
        StaffIDtextEdit->setGeometry(QRect(530, 150, 121, 31));
        label_5 = new QLabel(StaffDashboard);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 280, 231, 20));
        lineEdit = new QLineEdit(StaffDashboard);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(310, 280, 191, 31));
        StaffToPatientPshButton = new QPushButton(StaffDashboard);
        StaffToPatientPshButton->setObjectName("StaffToPatientPshButton");
        StaffToPatientPshButton->setGeometry(QRect(70, 330, 171, 29));
        label_7 = new QLabel(StaffDashboard);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 210, 81, 31));
        lineEdit_2 = new QLineEdit(StaffDashboard);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(160, 210, 111, 31));
        pushButton = new QPushButton(StaffDashboard);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 210, 93, 29));

        retranslateUi(StaffDashboard);

        QMetaObject::connectSlotsByName(StaffDashboard);
    } // setupUi

    void retranslateUi(QDialog *StaffDashboard)
    {
        StaffDashboard->setWindowTitle(QCoreApplication::translate("StaffDashboard", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("StaffDashboard", "Staff Dashboard", nullptr));
        label_2->setText(QCoreApplication::translate("StaffDashboard", "Staff Information:", nullptr));
        label_3->setText(QCoreApplication::translate("StaffDashboard", "Username:", nullptr));
        label_4->setText(QCoreApplication::translate("StaffDashboard", "ID:", nullptr));
        label_5->setText(QCoreApplication::translate("StaffDashboard", "Enter the username of the patient:", nullptr));
        StaffToPatientPshButton->setText(QCoreApplication::translate("StaffDashboard", "View/Edit patient Info.", nullptr));
        label_7->setText(QCoreApplication::translate("StaffDashboard", "New Name:", nullptr));
        pushButton->setText(QCoreApplication::translate("StaffDashboard", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaffDashboard: public Ui_StaffDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFDASHBOARD_H
