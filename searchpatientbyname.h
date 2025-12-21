#ifndef SEARCHPATIENTBYNAME_H
#define SEARCHPATIENTBYNAME_H
#include "linkedlist.h"
#include <QDialog>

namespace Ui {
class SerachPatientByName;
}

class SerachPatientByName : public QDialog
{
    Q_OBJECT

public:
    explicit SerachPatientByName(QWidget *parent = nullptr);
    ~SerachPatientByName();
    Node* data;

private slots:
    void on_search_btn_clicked();
    void search_patient();
    void on_back_btn_clicked();

private:
    Ui::SerachPatientByName *ui;
};

#endif // SEARCHPATIENTBYNAME_H
