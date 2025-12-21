#ifndef SEARCHPATIENTBYTOKEN_H
#define SEARCHPATIENTBYTOKEN_H
#include "linkedlist.h"

#include <QDialog>

namespace Ui {
class SearchPatientByToken;
}

class SearchPatientByToken : public QDialog
{
    Q_OBJECT

public:
    explicit SearchPatientByToken(QWidget *parent = nullptr);
    ~SearchPatientByToken();
    Node* data;
    bool validAge;

private slots:
    void on_search_btn_clicked();

    void on_back_btn_clicked();

private:
    Ui::SearchPatientByToken *ui;
    void search_patient();
};

#endif // SEARCHPATIENTBYTOKEN_H
