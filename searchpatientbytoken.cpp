#include "searchpatientbytoken.h"
#include "ui_searchpatientbytoken.h"
#include <QMessageBox>
#include <QLabel>
#include <QTimer>

SearchPatientByToken::SearchPatientByToken(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchPatientByToken)
{
    ui->setupUi(this);
}

SearchPatientByToken::~SearchPatientByToken()
{
    delete ui;
}

void SearchPatientByToken::on_search_btn_clicked()
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
    data = hospitalQueue.searchByToken(token);
    search_patient();
}

void SearchPatientByToken::search_patient(){
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
    ui->patient_token_number->setText(QString::number(data->tokenNumber));
    ui->search_patient_input->setText("");
}


void SearchPatientByToken::on_back_btn_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

