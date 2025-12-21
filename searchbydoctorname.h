#ifndef SEARCHBYDOCTORNAME_H
#define SEARCHBYDOCTORNAME_H
#include "linkedlist.h"

#include <QDialog>

namespace Ui {
class SearchByDoctorName;
}

class SearchByDoctorName : public QDialog
{
    Q_OBJECT

public:
    explicit SearchByDoctorName(QWidget *parent = nullptr);
    ~SearchByDoctorName();
    Node* data;
    QString name;

private slots:
    void on_search_btn_clicked();

    void on_back_btn_clicked();

private:
    Ui::SearchByDoctorName *ui;
    void search_doctor();
};

#endif // SEARCHBYDOCTORNAME_H
