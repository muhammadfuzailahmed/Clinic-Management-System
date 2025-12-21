#ifndef DISCHARGEPATIENT_H
#define DISCHARGEPATIENT_H

#include <QDialog>

namespace Ui {
class DischargePatient;
}

class DischargePatient : public QDialog
{
    Q_OBJECT

public:
    explicit DischargePatient(QWidget *parent = nullptr);
    ~DischargePatient();
    bool found;

private slots:
    void on_search_btn_clicked();

    void on_back_btn_clicked();

private:
    Ui::DischargePatient *ui;
    void dischargePatient();
};

#endif // DISCHARGEPATIENT_H
