// patientdashboard.cpp
#include "patientdashboard.h"
#include "ui_patientdashboard.h"
#include "schedulepage.h"
#include <QStringListModel>

PatientDashboard::PatientDashboard(const QString& username, const QMap<int, Patient>& patients, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PatientDashboard),
    m_username(username),
    m_patients(patients)
{
    ui->setupUi(this);

    // Display the username in the window
    ui->label_9->setText(m_username);

    // Find the patient with the username
    int patientId = -1;
    for (auto it = m_patients.begin(); it != m_patients.end(); ++it) {
        if (it.value().getUsername() == username) {
            patientId = it.key();
            break;
        }
    }

    // Check if patient with the username exists
    if (patientId != -1) {
        const Patient& patient = m_patients.value(patientId);

        // Display patient data in the window
        ui->IDLabel->setText(QString::number(patient.getId()));

        // Display medical record using a QListView
        QStringList medicalRecords;
        medicalRecords << patient.viewMedicalRecords();
        QStringListModel *model = new QStringListModel(medicalRecords, this);
        ui->MedReclistView->setModel(model);

        // Display appointments
        QString appointments;
        for (const QString& appointment : patient.getAppointments()) {
            appointments += appointment + "\n";
        }
        ui->textBrowser_3->setText(appointments);

        // Display treatment plans
        ui->textBrowser_2->setText(patient.getTreatmentPlans());

        // Display test results
        ui->textBrowser->setText(patient.getTestResults());
    }
}

void PatientDashboard::on_pushButton_2_clicked()
{
    SchedulePage* schedulepage = new SchedulePage(m_patients, m_username, this);
    schedulepage->show();
}

void PatientDashboard::on_manageAppPshButton_clicked()
{
    // Create an instance of the SchedulePage dialog
    SchedulePage* schedulePage = new SchedulePage(m_patients, m_username, this);

    // Find the patient with the current username
    int patientId = -1;
    for (auto it = m_patients.begin(); it != m_patients.end(); ++it) {
        if (it.value().getUsername() == m_username) {
            patientId = it.key();
            break;
        }
    }

    // Check if patient with the username exists
    if (patientId != -1) {
        // Get the appointments for the current patient
        const Patient& patient = m_patients.value(patientId);
        QStringList appointments = patient.getAppointments();

        // Display the appointments in the ApptextEdit widget
        QString appointmentsText;
        for (const QString& appointment : appointments) {
            appointmentsText += appointment + "\n";
        }
        schedulePage->setAppointmentsText(appointmentsText);
    }

    hide();
    // Show the SchedulePage dialog
    schedulePage->exec();
}

PatientDashboard::~PatientDashboard()
{
    delete ui;
}
