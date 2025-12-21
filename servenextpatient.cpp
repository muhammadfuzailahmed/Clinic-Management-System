#include "servenextpatient.h"
#include "ui_servenextpatient.h"
#include "linkedlist.h"
#include <QTimer>

ServeNextPatient::ServeNextPatient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ServeNextPatient)
{
    ui->setupUi(this);
    data = hospitalQueue.serveNextPatient();
    if(data){
    nextPatient();
    }
}

ServeNextPatient::~ServeNextPatient()
{
    delete ui;
}

void ServeNextPatient::on_back_btn_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

void ServeNextPatient::showEvent(QShowEvent *event) {
    QDialog::showEvent(event);

    if(!data) {
        QLabel* toast = new QLabel("No patient in queue!", this);
        toast->setStyleSheet("background-color:red; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
    }
}

void ServeNextPatient::nextPatient() {
    ui->patient_name->setText(QString::fromStdString(data->name));
    ui->doctors_name->setText(QString::fromStdString(data->doctorName));
    ui->patient_age->setText(QString::number(data->age));
    ui->patient_gender->setText(QString::fromStdString(data->gender));
    ui->patient_disease->setText(QString::fromStdString(data->disease));
    ui->patient_token_number->setText(QString::number(data->tokenNumber));
}
