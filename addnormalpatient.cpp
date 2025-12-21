#include "addnormalpatient.h"
#include "mainwindow.h"
#include "ui_addnormalpatient.h"
#include "linkedlist.h"
#include <QMessageBox>
#include <QTimer>

AddNormalPatient::AddNormalPatient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddNormalPatient)
{
    ui->setupUi(this);
}

AddNormalPatient::~AddNormalPatient()
{
    delete ui;
}

void AddNormalPatient::on_add_patient_btn_clicked()
{
    QString name = ui->patient_name->text().trimmed();
    QString doctorsName = ui->doctors_name->text().trimmed();
    QString age = ui->patient_age->text().trimmed();
    QString gender = ui->patient_gender->text().trimmed();
    QString disease = ui->patient_disease->text().trimmed();
    int ageValue = ui->patient_age->text().toInt(&validAge);

    if(name.isEmpty() || doctorsName.isEmpty() || age.isEmpty() || gender.isEmpty() || disease.isEmpty()) {
        QLabel* toast = new QLabel("Fill all fields!", this);
        toast->setStyleSheet("background-color:red; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2 - 25, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
        return;
    }

    if (!validAge) {
        QLabel* toast = new QLabel("Age should be in number!", this);
        toast->setStyleSheet("background-color:red; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2 - 25, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
        return;
    }

    hospitalQueue.addPatient(name.toStdString(), doctorsName.toStdString(), gender.toStdString(), age.toInt(), disease.toStdString());
    QLabel *toast = new QLabel("Patient added successfully!", this);
    toast->setStyleSheet("background-color:#2ecc71; color:white; padding:10px; border-radius:8px; z-index: 9;");
    toast->setAlignment(Qt::AlignCenter);
    toast->setFixedSize(250, 50);
    toast->move(width()/2 - 125, 20);
    toast->raise();
    toast->show();
    QTimer::singleShot(2000, toast, &QLabel::close);
    ui->patient_name->setText("");
    ui->doctors_name->setText("");
    ui->patient_age->setText("");
    ui->patient_gender->setText("");
    ui->patient_disease->setText("");
}


void AddNormalPatient::on_back_btn_clicked()
{
    this->parentWidget()->show();
    this->close();
}

