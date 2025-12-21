#include "dischargepatient.h"
#include "ui_dischargepatient.h"
#include"linkedlist.h"
#include <QMessageBox>
#include <QLabel>
#include <QTimer>

DischargePatient::DischargePatient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DischargePatient)
{
    ui->setupUi(this);
}

DischargePatient::~DischargePatient()
{
    delete ui;
}

void DischargePatient::on_search_btn_clicked()
{
    QString tokenStr = ui->search_patient_input->text().trimmed();
    int token = tokenStr.toInt();
    if(tokenStr.isEmpty()) {
        QLabel* toast = new QLabel("Enter token number!", this);
        toast->setStyleSheet("background-color:red; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2 - 25, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
        return;
    }
    found = hospitalQueue.deleteByToken(token);
    dischargePatient();
}

void DischargePatient::dischargePatient() {
    if(found == false) {
        QLabel* toast = new QLabel("Patient not found!", this);
        toast->setStyleSheet("background-color:red; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2 - 25, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
        return;
    }
    else{
        QLabel* toast = new QLabel("Patient Discharged!", this);
        toast->setStyleSheet("background-color:green; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2 -25, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
        ui->search_patient_input->setText("");
        return;
    }
}

void DischargePatient::on_back_btn_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

