#ifndef ADDEMERGENCYPATIENT_H
#define ADDEMERGENCYPATIENT_H
#include <QLabel>
#include <QDialog>

namespace Ui {
class AddEmergencyPatient;
}

class AddEmergencyPatient : public QDialog
{
    Q_OBJECT

public:
    explicit AddEmergencyPatient(QWidget *parent = nullptr);
    ~AddEmergencyPatient();
    bool validAge;

private slots:
    void on_add_patient_btn_clicked();

    void on_back_btn_clicked();

private:
    Ui::AddEmergencyPatient *ui;
};

#endif // ADDEMERGENCYPATIENT_H
