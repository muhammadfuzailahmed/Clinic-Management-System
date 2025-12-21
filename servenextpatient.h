#ifndef SERVENEXTPATIENT_H
#define SERVENEXTPATIENT_H
#include "linkedlist.h"
#include <QDialog>

namespace Ui {
class ServeNextPatient;
}

class ServeNextPatient : public QDialog
{
    Q_OBJECT

public:
    explicit ServeNextPatient(QWidget *parent = nullptr);
    ~ServeNextPatient();
    Node* data;

protected:
    void showEvent(QShowEvent *event) override;

private slots:
    void on_back_btn_clicked();
    void nextPatient();

private:
    Ui::ServeNextPatient *ui;
};

#endif // SERVENEXTPATIENT_H
