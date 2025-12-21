#ifndef UPDATEPATIENTINFO_H
#define UPDATEPATIENTINFO_H
#include "linkedlist.h"
#include <QDialog>

namespace Ui {
class UpdatePatientInfo;
}

class UpdatePatientInfo : public QDialog
{
    Q_OBJECT

public:
    explicit UpdatePatientInfo(QWidget *parent = nullptr);
    ~UpdatePatientInfo();
    void foundPatient();
    void showResult();
    void updateFinalInfo();
    Node* data;
    QString updatedName;
    QString updatedDoctorsName;
    int updatedAge;
    QString updatedGender;
    QString updatedDisease;

private slots:
    void on_search_btn_clicked();

    void on_add_patient_btn_clicked();

    void on_back_btn_clicked();

private:
    Ui::UpdatePatientInfo *ui;
};

#endif // UPDATEPATIENTINFO_H
