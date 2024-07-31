/********************************************************************************
** Form generated from reading UI file 'patientdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTDASHBOARD_H
#define UI_PATIENTDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PatientDashboard
{
public:
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *PatientNametextEdit;
    QTextEdit *PatientIDtextEdit;
    QPushButton *PatientEditPshButton;
    QLabel *label_5;
    QListView *MedReclistView;
    QLabel *label_6;
    QListView *TestslistView;
    QLabel *label_7;
    QListView *PlanslistView;
    QLabel *label_8;
    QTextEdit *AppInfotextEdit;
    QPushButton *manageAppPshButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *PatientDashboard)
    {
        if (PatientDashboard->objectName().isEmpty())
            PatientDashboard->setObjectName("PatientDashboard");
        PatientDashboard->resize(910, 793);
        label_1 = new QLabel(PatientDashboard);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(370, 30, 131, 20));
        label_2 = new QLabel(PatientDashboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 90, 161, 20));
        label_3 = new QLabel(PatientDashboard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 140, 81, 20));
        label_4 = new QLabel(PatientDashboard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(460, 140, 63, 20));
        PatientNametextEdit = new QTextEdit(PatientDashboard);
        PatientNametextEdit->setObjectName("PatientNametextEdit");
        PatientNametextEdit->setGeometry(QRect(130, 140, 221, 31));
        PatientIDtextEdit = new QTextEdit(PatientDashboard);
        PatientIDtextEdit->setObjectName("PatientIDtextEdit");
        PatientIDtextEdit->setGeometry(QRect(500, 140, 121, 31));
        PatientEditPshButton = new QPushButton(PatientDashboard);
        PatientEditPshButton->setObjectName("PatientEditPshButton");
        PatientEditPshButton->setGeometry(QRect(50, 210, 231, 29));
        label_5 = new QLabel(PatientDashboard);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 290, 121, 20));
        MedReclistView = new QListView(PatientDashboard);
        MedReclistView->setObjectName("MedReclistView");
        MedReclistView->setGeometry(QRect(50, 320, 761, 101));
        label_6 = new QLabel(PatientDashboard);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 450, 351, 20));
        TestslistView = new QListView(PatientDashboard);
        TestslistView->setObjectName("TestslistView");
        TestslistView->setGeometry(QRect(50, 480, 341, 111));
        label_7 = new QLabel(PatientDashboard);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(480, 450, 171, 20));
        PlanslistView = new QListView(PatientDashboard);
        PlanslistView->setObjectName("PlanslistView");
        PlanslistView->setGeometry(QRect(480, 480, 351, 111));
        label_8 = new QLabel(PatientDashboard);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 670, 181, 20));
        AppInfotextEdit = new QTextEdit(PatientDashboard);
        AppInfotextEdit->setObjectName("AppInfotextEdit");
        AppInfotextEdit->setGeometry(QRect(240, 640, 241, 81));
        manageAppPshButton = new QPushButton(PatientDashboard);
        manageAppPshButton->setObjectName("manageAppPshButton");
        manageAppPshButton->setGeometry(QRect(560, 660, 211, 29));
        label = new QLabel(PatientDashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 210, 81, 31));
        lineEdit = new QLineEdit(PatientDashboard);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(490, 210, 111, 31));
        pushButton = new QPushButton(PatientDashboard);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(620, 210, 93, 29));

        retranslateUi(PatientDashboard);

        QMetaObject::connectSlotsByName(PatientDashboard);
    } // setupUi

    void retranslateUi(QDialog *PatientDashboard)
    {
        PatientDashboard->setWindowTitle(QCoreApplication::translate("PatientDashboard", "Dialog", nullptr));
        label_1->setText(QCoreApplication::translate("PatientDashboard", "Patient Dashboard", nullptr));
        label_2->setText(QCoreApplication::translate("PatientDashboard", "Patient Information:", nullptr));
        label_3->setText(QCoreApplication::translate("PatientDashboard", "Username:", nullptr));
        label_4->setText(QCoreApplication::translate("PatientDashboard", "ID: ", nullptr));
        PatientNametextEdit->setHtml(QCoreApplication::translate("PatientDashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        PatientEditPshButton->setText(QCoreApplication::translate("PatientDashboard", "Edit you information", nullptr));
        label_5->setText(QCoreApplication::translate("PatientDashboard", "Medical Records:", nullptr));
        label_6->setText(QCoreApplication::translate("PatientDashboard", "Results of any tests conducted:", nullptr));
        label_7->setText(QCoreApplication::translate("PatientDashboard", "treatment plans:", nullptr));
        label_8->setText(QCoreApplication::translate("PatientDashboard", "Appointment Information:", nullptr));
        manageAppPshButton->setText(QCoreApplication::translate("PatientDashboard", "Manage your appointments", nullptr));
        label->setText(QCoreApplication::translate("PatientDashboard", "New Name:", nullptr));
        pushButton->setText(QCoreApplication::translate("PatientDashboard", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientDashboard: public Ui_PatientDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTDASHBOARD_H
