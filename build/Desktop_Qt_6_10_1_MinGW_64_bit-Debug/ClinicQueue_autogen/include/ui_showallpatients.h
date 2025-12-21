/********************************************************************************
** Form generated from reading UI file 'showallpatients.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWALLPATIENTS_H
#define UI_SHOWALLPATIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowAllPatients
{
public:
    QTableWidget *patientsTable_;
    QPushButton *back_btn;
    QLabel *label_2;

    void setupUi(QDialog *ShowAllPatients)
    {
        if (ShowAllPatients->objectName().isEmpty())
            ShowAllPatients->setObjectName("ShowAllPatients");
        ShowAllPatients->resize(1390, 824);
        ShowAllPatients->setStyleSheet(QString::fromUtf8("background-color: \"#111111\";"));
        patientsTable_ = new QTableWidget(ShowAllPatients);
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
        patientsTable_->setGeometry(QRect(330, 200, 911, 531));
        patientsTable_->setStyleSheet(QString::fromUtf8("/* The Main Table Area */\n"
"QTableWidget, QTableView {\n"
"    background-color: #1c1c1c;      /* Surface color slightly lighter than #111111 */\n"
"    alternate-background-color: #222222; /* Subtle stripes for better readability */\n"
"    border: 1px solid #333333;       /* Clean edge */\n"
"    gridline-color: #333333;        /* Subdued grid lines */\n"
"    color: #e0e0e0;                 /* Off-white text */\n"
"    font-size: 13px;\n"
"    selection-background-color: #00d2ff; /* Your cyan accent for selected rows */\n"
"    selection-color: #000000;\n"
"}\n"
"\n"
"/* Header Styling (Top Row) */\n"
"QHeaderView::section {\n"
"    background-color: #252525;      /* Darkest header color */\n"
"    color: #00d2ff;                 /* Medical blue titles */\n"
"    padding: 10px;\n"
"    border: none;\n"
"    border-bottom: 2px solid #333333; /* Thick line separating header from data */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* Corner Widget (small square where headers meet) */\n"
""
                        "QTableCornerButton::section {\n"
"    background-color: #252525;\n"
"    border: none;\n"
"}\n"
"\n"
"/* Vertical Header (Row Numbers) - Hide if not needed */\n"
"QHeaderView::vertical {\n"
"    background-color: #1c1c1c;\n"
"    color: #666666;\n"
"}\n"
"\n"
"/* Custom Scrollbar to match the dark theme */\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: #111111;\n"
"    width: 10px;\n"
"    margin: 0px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: #444444;\n"
"    min-height: 20px;\n"
"    border-radius: 5px;\n"
"}"));
        patientsTable_->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        patientsTable_->setColumnCount(7);
        back_btn = new QPushButton(ShowAllPatients);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(40, 30, 211, 51));
        QFont font;
        font.setBold(true);
        back_btn->setFont(font);
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
        label_2 = new QLabel(ShowAllPatients);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 30, 571, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("border:2px solid #00d2ff;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(ShowAllPatients);

        QMetaObject::connectSlotsByName(ShowAllPatients);
    } // setupUi

    void retranslateUi(QDialog *ShowAllPatients)
    {
        ShowAllPatients->setWindowTitle(QCoreApplication::translate("ShowAllPatients", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = patientsTable_->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ShowAllPatients", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = patientsTable_->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ShowAllPatients", "Dr Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = patientsTable_->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ShowAllPatients", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = patientsTable_->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ShowAllPatients", "Gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = patientsTable_->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ShowAllPatients", "Disease", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = patientsTable_->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ShowAllPatients", "Token Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = patientsTable_->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ShowAllPatients", "Emergency Patient", nullptr));
        back_btn->setText(QCoreApplication::translate("ShowAllPatients", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("ShowAllPatients", "Clinic Managemnet System - All Patients Queue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowAllPatients: public Ui_ShowAllPatients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWALLPATIENTS_H
