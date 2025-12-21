#include "updatepatientinfo.h"
#include "ui_updatepatientinfo.h"
#include "linkedlist.h"
#include <QMessageBox>
#include <QLabel>
#include <QTimer>

UpdatePatientInfo::UpdatePatientInfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdatePatientInfo)
{
    ui->setupUi(this);
}

UpdatePatientInfo::~UpdatePatientInfo()
{
    delete ui;
}

void foundPatient() {

}
void UpdatePatientInfo::on_search_btn_clicked()
{
    QString tokenStr = ui->search_patient_input->text().trimmed();
    int token = tokenStr.toInt();
    if(tokenStr.isEmpty()) {
        QLabel* toast = new QLabel("Enter token number!", this);
        toast->setStyleSheet("background-color:red; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
        return;
    }
    data = hospitalQueue.updatePatientInfo(token);
    showResult();
}

void UpdatePatientInfo::showResult() {
    if(!data) {
        QLabel* toast = new QLabel("Patient not found!", this);
        toast->setStyleSheet("background-color:red; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
        return;
    }
    ui->patient_name->setText(QString::fromStdString(data->name));
    ui->doctors_name->setText(QString::fromStdString(data->doctorName));
    ui->patient_age->setText(QString::number(data->age));
    ui->patient_gender->setText(QString::fromStdString(data->gender));
    ui->patient_disease->setText(QString::fromStdString(data->disease));
    ui->search_patient_input->setText("");
    QLabel* toast = new QLabel("Update patient info!", this);
    toast->setStyleSheet("background-color:#FDFD96; color:black; padding:10px; border-radius:8px; z-index: 9;");
    toast->setAlignment(Qt::AlignCenter);
    toast->setFixedSize(250, 50);
    toast->move(width()/2 - 25, 20);
    toast->raise();
    toast->show();
    QTimer::singleShot(2000, toast, &QLabel::close);
    return;
}


void UpdatePatientInfo::on_add_patient_btn_clicked()
{
    updatedName = ui->patient_name->text();
    updatedDoctorsName = ui->doctors_name->text();
    updatedAge = ui->patient_age->text().toInt();
    updatedGender = ui->patient_gender->text();
    updatedDisease = ui->patient_disease->text();
    updateFinalInfo();
}

void UpdatePatientInfo::updateFinalInfo(){
    data->name = updatedName.toStdString();
    data->doctorName= updatedDoctorsName.toStdString();
    data->age = updatedAge;
    data->gender = updatedGender.toStdString();
    data->disease = updatedDisease.toStdString();
    QLabel* toast = new QLabel("Patient info updated successfully!", this);
    toast->setStyleSheet("background-color:green; color:white; padding:10px; border-radius:8px; z-index: 9;");
    toast->setAlignment(Qt::AlignCenter);
    toast->setFixedSize(250, 50);
    toast->move(width()/2 - 25, 20);
    toast->raise();
    toast->show();
    QTimer::singleShot(2000, toast, &QLabel::close);
    return;
}


void UpdatePatientInfo::on_back_btn_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

