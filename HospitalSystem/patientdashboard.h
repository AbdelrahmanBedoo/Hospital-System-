// patientdashboard.h
#ifndef PATIENTDASHBOARD_H
#define PATIENTDASHBOARD_H

#include <QDialog>
#include <QString>
#include "patient.h"
#include <QMap>

namespace Ui {
class PatientDashboard;
}

class PatientDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit   PatientDashboard(const QString& username, const QMap<int, Patient>& patients, QWidget *parent = nullptr);

    ~PatientDashboard();

signals:
    void patientDataChanged(QMap<int, Patient>& patients);

private slots:
    void on_pushButton_2_clicked();
    void on_manageAppPshButton_clicked();

private:
    Ui::PatientDashboard *ui;
    QString m_username;
    QMap<int, Patient> m_patients;
};

#endif // PATIENTDASHBOARD_H
