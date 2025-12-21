#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addnormalpatient.h"
#include "addemergencypatient.h"
#include "linkedlist.h"
#include "searchbydoctorname.h"
#include "showallpatients.h"
#include "nextpatientinfo.h"
#include "servenextpatient.h"
#include "searchpatientbyname.h"
#include "searchpatientbytoken.h"
#include "updatepatientinfo.h"
#include "dischargepatient.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_search_by_doctors_name_btn_2_clicked();

    void on_next_patient_info_btn_clicked();

    void on_serve_next_patient_btn_clicked();

    void on_search_by_name_btn_clicked();

    void on_search_by_token_num_btn_clicked();

    void on_search_by_doctors_name_btn_clicked();

    void on_update_patient_info_btn_clicked();

    void on_discharge_patient_btn_clicked();

    void on_exit_btn_clicked();

private:
    Ui::MainWindow *ui;
    AddNormalPatient *add_normal_patient;
    AddEmergencyPatient *add_emergency_patient;
    ShowAllPatients *showallpatients;
    MainWindow *mainwindow;
    LinkedList *hospitalQueue;
    NextPatientInfo *nextpatientinfo;
    ServeNextPatient *servenextpatient;
    SerachPatientByName *searchpatientbyname;
    SearchPatientByToken *searchpatientbytoken;
    SearchByDoctorName *searchbydoctorname;
    UpdatePatientInfo *updatepatientinfo;
    DischargePatient *dichargePatient;
};
#endif // MAINWINDOW_H
