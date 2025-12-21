#include "showallpatients.h"
#include "ui_showallpatients.h"
#include "linkedlist.h"
#include <QTableWidgetItem>
#include <QLabel>
#include<QTimer>
#include <QHeaderView>


ShowAllPatients::ShowAllPatients(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShowAllPatients)
{
    ui->setupUi(this);
    auto header = ui->patientsTable_->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setSectionResizeMode(
        ui->patientsTable_->columnCount() - 1,
        QHeaderView::ResizeToContents
        );
    loadPatientsTable();
}

ShowAllPatients::~ShowAllPatients()
{
    delete ui;
}

void ShowAllPatients::loadPatientsTable()
{
    ui->patientsTable_->setRowCount(0);
    ui->patientsTable_->verticalHeader()->setDefaultSectionSize(40);
    ui->patientsTable_->verticalHeader()->setMinimumWidth(30);
    Node* curr = hospitalQueue.getHead();
    int row = 0;

    if(curr == nullptr) {
        QLabel* toast = new QLabel("The queue is empty!", this);
        toast->setStyleSheet("background-color:red; color:white; padding:10px; border-radius:8px; z-index: 9;");
        toast->setAlignment(Qt::AlignCenter);
        toast->setFixedSize(250, 50);
        toast->move(width()/2, 20);
        toast->raise();
        toast->show();
        QTimer::singleShot(2000, toast, &QLabel::close);
        return;
    }

    while (curr != nullptr)
    {
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

        curr = curr->next;
        row++;
    }
}

void ShowAllPatients::on_back_btn_clicked()
{
    this->parentWidget()->show();
    this->close();
}

