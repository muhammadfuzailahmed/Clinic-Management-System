#ifndef NEXTPATIENTINFO_H
#define NEXTPATIENTINFO_H
#include "linkedlist.h"
#include <QDialog>

namespace Ui {
class NextPatientInfo;
}

class NextPatientInfo : public QDialog
{
    Q_OBJECT

public:
    explicit NextPatientInfo(QWidget *parent = nullptr);
    ~NextPatientInfo();
    Node* data;

protected:
    void showEvent(QShowEvent *event) override;

private slots:
    void on_back_btn_clicked();
    void showInfo();

private:
    Ui::NextPatientInfo *ui;
};

#endif // NEXTPATIENTINFO_H
