/********************************************************************************
** Form generated from reading UI file 'dischargepatient.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCHARGEPATIENT_H
#define UI_DISCHARGEPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DischargePatient
{
public:
    QPushButton *back_btn;
    QLabel *label_2;
    QLineEdit *search_patient_input;
    QPushButton *search_btn;
    QFrame *frame;
    QLabel *label_9;

    void setupUi(QDialog *DischargePatient)
    {
        if (DischargePatient->objectName().isEmpty())
            DischargePatient->setObjectName("DischargePatient");
        DischargePatient->resize(1396, 775);
        DischargePatient->setStyleSheet(QString::fromUtf8("background-color:\"#111111\";"));
        back_btn = new QPushButton(DischargePatient);
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
        label_2 = new QLabel(DischargePatient);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(520, 30, 571, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid #00d2ff;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        search_patient_input = new QLineEdit(DischargePatient);
        search_patient_input->setObjectName("search_patient_input");
        search_patient_input->setGeometry(QRect(730, 220, 311, 31));
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
        search_btn = new QPushButton(DischargePatient);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(780, 270, 221, 51));
        search_btn->setFont(font);
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
        frame = new QFrame(DischargePatient);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(520, 190, 561, 151));
        frame->setStyleSheet(QString::fromUtf8("z-index: -1;\n"
"background-color: #1c1c1c;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(-20, 30, 221, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        frame->raise();
        back_btn->raise();
        label_2->raise();
        search_patient_input->raise();
        search_btn->raise();

        retranslateUi(DischargePatient);

        QMetaObject::connectSlotsByName(DischargePatient);
    } // setupUi

    void retranslateUi(QDialog *DischargePatient)
    {
        DischargePatient->setWindowTitle(QCoreApplication::translate("DischargePatient", "Dialog", nullptr));
        back_btn->setText(QCoreApplication::translate("DischargePatient", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("DischargePatient", "Clinic Managemnet System - Discharge Patient ", nullptr));
        search_btn->setText(QCoreApplication::translate("DischargePatient", "Discharge Patient", nullptr));
        label_9->setText(QCoreApplication::translate("DischargePatient", "Enter Token Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DischargePatient: public Ui_DischargePatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCHARGEPATIENT_H
