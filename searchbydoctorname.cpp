#include "searchbydoctorname.h"
#include "ui_searchbydoctorname.h"
#include <QMessageBox>
#include "linkedlist.h"
#include <QLabel>
#include <QTimer>
#include <QHeaderView>

SearchByDoctorName::SearchByDoctorName(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchByDoctorName)
{
    ui->setupUi(this);
    auto header = ui->patientsTable_->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setSectionResizeMode(
        ui->patientsTable_->columnCount() - 1,
        QHeaderView::ResizeToContents
        );
}

SearchByDoctorName::~SearchByDoctorName()
{
    delete ui;
}

void SearchByDoctorName::on_search_btn_clicked()
{
    name = ui->search_patient_input->text().trimmed();
    if(name.isEmpty()) {
        QLabel* toast = new QLabel("Dr name is required!", this);
        toast->setStyleSheet("background-color:red; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
        return;
    }
    search_doctor();
}

void SearchByDoctorName::search_doctor() {
    ui->patientsTable_->setRowCount(0);
    Node* head = hospitalQueue.getHead();
    Node* curr = head;
    if(head == nullptr) {
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
    int row = 0;
    bool found = false;
    while(curr != nullptr) {
        if(curr->doctorName == name.toStdString()) {
            found = true;
            ui->search_patient_input->setText("");
            ui->patientsTable_->insertRow(row);
            ui->patientsTable_->setItem(
                row, 0,
                new QTableWidgetItem(QString::fromStdString(curr->name))
            );

            ui->patientsTable_->setItem(
                row, 1,
                new QTableWidgetItem(QString::fromStdString(curr->doctorName))
                );

            ui->patientsTable_->setItem(
                row, 2,
                new QTableWidgetItem(QString::number(curr->age))
            );

            ui->patientsTable_->setItem(
                row, 3,
                new QTableWidgetItem(QString::fromStdString(curr->gender))
            );

            ui->patientsTable_->setItem(
                row, 4,
                new QTableWidgetItem(QString::fromStdString(curr->disease))
            );

            ui->patientsTable_->setItem(
                row, 5,
                new QTableWidgetItem(QString::number(curr->tokenNumber))
            );
            ui->patientsTable_->setItem(
                row, 6,
                new QTableWidgetItem(QString::fromStdString(curr->isEmergency ? "Yes" : "No"))
                );
            row++;
        }
        curr = curr->next;
    }
    if(!found) {
        QLabel* toast = new QLabel("No Patient found for searched Dr!", this);
        toast->setStyleSheet("background-color:red; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
        return;
    }
}


void SearchByDoctorName::on_back_btn_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

