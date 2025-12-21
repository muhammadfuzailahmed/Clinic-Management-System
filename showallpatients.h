#ifndef SHOWALLPATIENTS_H
#define SHOWALLPATIENTS_H

#include <QDialog>

namespace Ui {
class ShowAllPatients;
}

class ShowAllPatients : public QDialog
{
    Q_OBJECT

public:
    explicit ShowAllPatients(QWidget *parent = nullptr);
    ~ShowAllPatients();

private slots:
    void on_back_btn_clicked();

private:
    Ui::ShowAllPatients *ui;
    void loadPatientsTable();
};

#endif // SHOWALLPATIENTS_H
