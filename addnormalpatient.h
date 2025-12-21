#ifndef ADDNORMALPATIENT_H
#define ADDNORMALPATIENT_H
#include <QLabel>
#include <QDialog>

namespace Ui {
class AddNormalPatient;
}

class AddNormalPatient : public QDialog
{
    Q_OBJECT

public:
    explicit AddNormalPatient(QWidget *parent = nullptr);
    ~AddNormalPatient();
    bool validAge;

private slots:
    void on_add_patient_btn_clicked();

    void on_back_btn_clicked();

private:
    Ui::AddNormalPatient *ui;
};

#endif // ADDNORMALPATIENT_H
