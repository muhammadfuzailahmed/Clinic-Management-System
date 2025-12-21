/********************************************************************************
** Form generated from reading UI file 'searchbydoctorname.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBYDOCTORNAME_H
#define UI_SEARCHBYDOCTORNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchByDoctorName
{
public:
    QLineEdit *search_patient_input;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *search_btn;
    QPushButton *back_btn;
    QLabel *label_2;
    QTableWidget *patientsTable_;

    void setupUi(QDialog *SearchByDoctorName)
    {
        if (SearchByDoctorName->objectName().isEmpty())
            SearchByDoctorName->setObjectName("SearchByDoctorName");
        SearchByDoctorName->resize(1455, 873);
        SearchByDoctorName->setStyleSheet(QString::fromUtf8("background-color: \"#111111\";"));
        search_patient_input = new QLineEdit(SearchByDoctorName);
        search_patient_input->setObjectName("search_patient_input");
        search_patient_input->setGeometry(QRect(670, 130, 311, 31));
        search_patient_input->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1c1c1c;  \n"
"    border: 1px solid #333333;   \n"
"    border-radius: 4px;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1px solid #00d2ff;\n"
"    background-color: #222222;\n"
"}"));
        label_8 = new QLabel(SearchByDoctorName);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(440, 130, 221, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_9 = new QLabel(SearchByDoctorName);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(700, 190, 211, 51));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        search_btn = new QPushButton(SearchByDoctorName);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(990, 130, 91, 31));
        QFont font2;
        font2.setBold(true);
        search_btn->setFont(font2);
        search_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        search_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1c1c1c;  \n"
"border: 1px solid #333333;  \n"
"border-radius: 6px;\n"
"color: #ffffff;            \n"
"padding: 10px 15px;\n"
"font-size: 15px;\n"
"font-weight: bold;\n"
"transition: 0.45s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #111111; \n"
"border: 1px solid #00d2ff; \n"
"}"));
        back_btn = new QPushButton(SearchByDoctorName);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(30, 30, 211, 51));
        back_btn->setFont(font2);
        back_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1c1c1c;  \n"
"border: 1px solid #333333;  \n"
"border-radius: 6px;\n"
"color: #ffffff;            \n"
"padding: 10px 15px;\n"
"font-size: 15px;\n"
"font-weight: bold;\n"
"transition: 0.45s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #111111; \n"
"border: 1px solid #00d2ff; \n"
"}"));
        label_2 = new QLabel(SearchByDoctorName);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 30, 681, 51));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid #00d2ff;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        patientsTable_ = new QTableWidget(SearchByDoctorName);
        if (patientsTable_->columnCount() < 7)
            patientsTable_->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        patientsTable_->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        patientsTable_->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        patientsTable_->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        patientsTable_->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        patientsTable_->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        patientsTable_->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        patientsTable_->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        patientsTable_->setObjectName("patientsTable_");
        patientsTable_->setGeometry(QRect(350, 270, 911, 531));
        patientsTable_->setStyleSheet(QString::fromUtf8("QTableWidget, QTableView {\n"
"    background-color: #1c1c1c;      \n"
"    alternate-background-color: #222222;\n"
"    border: 1px solid #333333;       \n"
"    gridline-color: #333333;        \n"
"    color: #e0e0e0;                 \n"
"    font-size: 13px;\n"
"    selection-background-color: #00d2ff; \n"
"    selection-color: #000000;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #252525;      \n"
"    color: #00d2ff;                 \n"
"    padding: 10px;\n"
"    border: none;\n"
"    border-bottom: 2px solid #333333; \n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QTableCornerButton::section {\n"
"    background-color: #252525;\n"
"    border: none;\n"
"}\n"
"\n"
"QHeaderView::vertical {\n"
"    background-color: #1c1c1c;\n"
"    color: #666666;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: #111111;\n"
"    width: 10px;\n"
"    margin: 0px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: #444444;\n"
"    min-height: 20px"
                        ";\n"
"    border-radius: 5px;\n"
"}"));
        patientsTable_->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        patientsTable_->setColumnCount(7);

        retranslateUi(SearchByDoctorName);

        QMetaObject::connectSlotsByName(SearchByDoctorName);
    } // setupUi

    void retranslateUi(QDialog *SearchByDoctorName)
    {
        SearchByDoctorName->setWindowTitle(QCoreApplication::translate("SearchByDoctorName", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("SearchByDoctorName", "Enter Doctor's Name", nullptr));
        label_9->setText(QCoreApplication::translate("SearchByDoctorName", "Patients List", nullptr));
        search_btn->setText(QCoreApplication::translate("SearchByDoctorName", "\360\237\224\216", nullptr));
        back_btn->setText(QCoreApplication::translate("SearchByDoctorName", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("SearchByDoctorName", "Clinic Managemnet System - Search Patient by Doctor Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem = patientsTable_->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SearchByDoctorName", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = patientsTable_->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SearchByDoctorName", "Dr Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = patientsTable_->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SearchByDoctorName", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = patientsTable_->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SearchByDoctorName", "Gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = patientsTable_->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SearchByDoctorName", "Disease", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = patientsTable_->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SearchByDoctorName", "Token Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = patientsTable_->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("SearchByDoctorName", "Emergency Patient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchByDoctorName: public Ui_SearchByDoctorName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBYDOCTORNAME_H
