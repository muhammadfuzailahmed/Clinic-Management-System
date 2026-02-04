#include "addemergencypatient.h"
#include "ui_addemergencypatient.h"
#include "linkedlist.h"
#include <QTimer>
#include <QLabel>

AddEmergencyPatient::AddEmergencyPatient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddEmergencyPatient)
{
    ui->setupUi(this);
    ui->doctors_combo->addItem("Select a Doctor");
    ui->doctors_combo->addItem("Dr. Masroor");
    ui->doctors_combo->addItem("Dr. Shahzad");
    ui->doctors_combo->addItem("Dr. Amna");

    ui->doctors_combo->setItemData(0, 0, Qt::UserRole - 1);

    ui->gender_picker->addItem("Select Gender");
    ui->gender_picker->addItem("Male");
    ui->gender_picker->addItem("Female");
    ui->gender_picker->addItem("Other");
    ui->gender_picker->setItemData(0, 0, Qt::UserRole - 1);
}

AddEmergencyPatient::~AddEmergencyPatient()
{
    delete ui;
}

void AddEmergencyPatient::on_add_patient_btn_clicked()
{
    QString name = ui->patient_name->text();
    QString doctorsName = ui->doctors_combo->currentText();
    QString age = ui->patient_age->text();
    QString gender = ui->gender_picker->currentText();
    QString disease = ui->patient_disease->text();
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

    hospitalQueue.addEmergencyPatient(name.toStdString(), doctorsName.toStdString(), gender.toStdString(), age.toInt(), disease.toStdString());
    QLabel *toast = new QLabel("Patient added successfully!", this);
    toast->setStyleSheet("background-color:#2ecc71; color:white; padding:10px; border-radius:8px; z-index: 9;");
    toast->setAlignment(Qt::AlignCenter);
    toast->setFixedSize(250, 50);
    toast->move(width()/2 - 125, 20);
    toast->raise();
    toast->show();
    QTimer::singleShot(2000, toast, &QLabel::close);
    ui->patient_name->setText("");
    ui->doctors_combo->setCurrentIndex(0);
    ui->patient_age->setText("");
    ui->gender_picker->setCurrentIndex(0);
    ui->patient_disease->setText("");
}


void AddEmergencyPatient::on_back_btn_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

