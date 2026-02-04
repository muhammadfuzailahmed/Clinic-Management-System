#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    add_normal_patient = new AddNormalPatient(this);
    add_normal_patient->showMaximized();
    this->hide();
}


void MainWindow::on_pushButton_2_clicked()
{
    add_emergency_patient = new AddEmergencyPatient(this);
    add_emergency_patient->showMaximized();
    this->hide();
}

void MainWindow::on_search_by_doctors_name_btn_2_clicked()
{
    showallpatients = new ShowAllPatients(this);
    showallpatients->showMaximized();
    this->hide();
}


void MainWindow::on_next_patient_info_btn_clicked()
{
    nextpatientinfo = new NextPatientInfo(this);
    nextpatientinfo ->showMaximized();
    this->hide();
}


void MainWindow::on_serve_next_patient_btn_clicked()
{
    servenextpatient = new ServeNextPatient(this);
    servenextpatient->showMaximized();
    this->hide();
}


void MainWindow::on_search_by_name_btn_clicked()
{
    searchpatientbyname = new SerachPatientByName(this);
    searchpatientbyname->showMaximized();
    this->hide();
}


void MainWindow::on_search_by_token_num_btn_clicked()
{
    searchpatientbytoken = new SearchPatientByToken(this);
    searchpatientbytoken->showMaximized();
    this->hide();
}


void MainWindow::on_search_by_doctors_name_btn_clicked()
{
    searchbydoctorname = new SearchByDoctorName(this);
    searchbydoctorname->showMaximized();
    this->hide();
}


void MainWindow::on_update_patient_info_btn_clicked()
{
    updatepatientinfo = new UpdatePatientInfo(this);
    updatepatientinfo->showMaximized();
    this->hide();
}


void MainWindow::on_discharge_patient_btn_clicked()
{
    dichargePatient = new DischargePatient(this);
    dichargePatient->showMaximized();
    this->hide();
}


void MainWindow::on_exit_btn_clicked()
{
    this->hide();
}

