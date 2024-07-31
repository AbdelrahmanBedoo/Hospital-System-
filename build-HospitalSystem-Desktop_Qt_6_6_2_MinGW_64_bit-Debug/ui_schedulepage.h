/********************************************************************************
** Form generated from reading UI file 'schedulepage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULEPAGE_H
#define UI_SCHEDULEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SchedulePage
{
public:
    QTextEdit *ApptextEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *AppDatelineEdit;
    QComboBox *AppDateComboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *SchedulePage)
    {
        if (SchedulePage->objectName().isEmpty())
            SchedulePage->setObjectName("SchedulePage");
        SchedulePage->resize(842, 643);
        ApptextEdit = new QTextEdit(SchedulePage);
        ApptextEdit->setObjectName("ApptextEdit");
        ApptextEdit->setGeometry(QRect(90, 180, 301, 101));
        label_2 = new QLabel(SchedulePage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 409, 371, 31));
        label_3 = new QLabel(SchedulePage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 100, 191, 20));
        label_5 = new QLabel(SchedulePage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 320, 361, 31));
        label_4 = new QLabel(SchedulePage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 140, 151, 20));
        label = new QLabel(SchedulePage);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 50, 211, 20));
        AppDatelineEdit = new QLineEdit(SchedulePage);
        AppDatelineEdit->setObjectName("AppDatelineEdit");
        AppDatelineEdit->setGeometry(QRect(460, 320, 71, 31));
        AppDateComboBox = new QComboBox(SchedulePage);
        AppDateComboBox->setObjectName("AppDateComboBox");
        AppDateComboBox->setGeometry(QRect(460, 410, 101, 31));
        pushButton = new QPushButton(SchedulePage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 490, 211, 29));

        retranslateUi(SchedulePage);

        QMetaObject::connectSlotsByName(SchedulePage);
    } // setupUi

    void retranslateUi(QDialog *SchedulePage)
    {
        SchedulePage->setWindowTitle(QCoreApplication::translate("SchedulePage", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SchedulePage", "Choose the new appointment date that suits you:", nullptr));
        label_3->setText(QCoreApplication::translate("SchedulePage", "Manage your appointments:", nullptr));
        label_5->setText(QCoreApplication::translate("SchedulePage", "Enter the date of the appointment you want to cancel:", nullptr));
        label_4->setText(QCoreApplication::translate("SchedulePage", "Current appointments:", nullptr));
        label->setText(QCoreApplication::translate("SchedulePage", "Appointment Scheduling Page", nullptr));
        pushButton->setText(QCoreApplication::translate("SchedulePage", "Update your schedule", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SchedulePage: public Ui_SchedulePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULEPAGE_H
