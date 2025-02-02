#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include <vector>
#include <QList>
class Patient
{
    friend class EditPatientWindow;
public:
    explicit Patient(const QString& username, const QString& password, int id, const QString& medicalRecords, const QString& gender, int age);
    Patient();
    ~Patient();

    // Patient functionalities
    void requestAppointment(const QString& date);
    void cancelAppointment(const QString& date);
    QString viewMedicalRecords() const;


    // Getters
    QString getUsername() const;
    QString getPassword() const;
    int getId() const;
    QList<QString> getAppointments() const;
    QString getGender() const; // Getter for gender
    int getAge() const; // Getter for age

    // Setters
    void setGender(const QString& newGender); // Setter for gender
    void setAge(int newAge); // Setter for age
    void setUsername(const QString& newUsername);
    void setAppointments(const QList<QString>& newAppointments);

private:
    QString username;
    QString password;
    int id;
    QString medicalRecords;
    std::vector<QString> appointments;
    QString gender;
    int age;

    // Other private member variables
    QString m_testResults;
    QString m_treatmentPlans;

public:
    // Constructor and other member functions

    // Getters and setters for test results and treatment plans
    QString getTestResults() const { return m_testResults; }
    void setTestResults(const QString& testResults) { m_testResults = testResults; }

    QString getTreatmentPlans() const { return m_treatmentPlans; }
    void setTreatmentPlans(const QString& treatmentPlans) { m_treatmentPlans = treatmentPlans; }
};

#endif // PATIENT_H
