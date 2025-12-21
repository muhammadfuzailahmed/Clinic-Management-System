/********************************************************************************
** Form generated from reading UI file 'updatepatientinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEPATIENTINFO_H
#define UI_UPDATEPATIENTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UpdatePatientInfo
{
public:
    QLabel *label_2;
    QPushButton *back_btn;
    QPushButton *add_patient_btn;
    QLabel *label_9;
    QLineEdit *search_patient_input;
    QPushButton *search_btn;
    QLineEdit *patient_name;
    QLineEdit *patient_age;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *doctors_name;
    QLineEdit *patient_gender;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *patient_disease;
    QLabel *label_3;
    QLabel *label_10;
    QFrame *frame;

    void setupUi(QDialog *UpdatePatientInfo)
    {
        if (UpdatePatientInfo->objectName().isEmpty())
            UpdatePatientInfo->setObjectName("UpdatePatientInfo");
        UpdatePatientInfo->resize(1361, 816);
        UpdatePatientInfo->setStyleSheet(QString::fromUtf8("background-color:\"#111111\";"));
        label_2 = new QLabel(UpdatePatientInfo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(540, 30, 571, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid #00d2ff;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back_btn = new QPushButton(UpdatePatientInfo);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(60, 30, 211, 51));
        QFont font1;
        font1.setBold(true);
        back_btn->setFont(font1);
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
        add_patient_btn = new QPushButton(UpdatePatientInfo);
        add_patient_btn->setObjectName("add_patient_btn");
        add_patient_btn->setGeometry(QRect(730, 640, 211, 51));
        add_patient_btn->setFont(font1);
        add_patient_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_9 = new QLabel(UpdatePatientInfo);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(470, 140, 221, 21));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        search_patient_input = new QLineEdit(UpdatePatientInfo);
        search_patient_input->setObjectName("search_patient_input");
        search_patient_input->setGeometry(QRect(700, 140, 311, 31));
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
        search_btn = new QPushButton(UpdatePatientInfo);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(1020, 140, 91, 31));
        search_btn->setFont(font1);
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
        patient_name = new QLineEdit(UpdatePatientInfo);
        patient_name->setObjectName("patient_name");
        patient_name->setGeometry(QRect(720, 330, 311, 31));
        patient_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        patient_age = new QLineEdit(UpdatePatientInfo);
        patient_age->setObjectName("patient_age");
        patient_age->setGeometry(QRect(720, 430, 311, 31));
        patient_age->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_4 = new QLabel(UpdatePatientInfo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(490, 430, 221, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_5 = new QLabel(UpdatePatientInfo);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(490, 480, 221, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        doctors_name = new QLineEdit(UpdatePatientInfo);
        doctors_name->setObjectName("doctors_name");
        doctors_name->setGeometry(QRect(720, 380, 311, 31));
        doctors_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        patient_gender = new QLineEdit(UpdatePatientInfo);
        patient_gender->setObjectName("patient_gender");
        patient_gender->setGeometry(QRect(720, 480, 311, 31));
        patient_gender->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_6 = new QLabel(UpdatePatientInfo);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(490, 530, 221, 31));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label = new QLabel(UpdatePatientInfo);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 330, 221, 31));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patient_disease = new QLineEdit(UpdatePatientInfo);
        patient_disease->setObjectName("patient_disease");
        patient_disease->setGeometry(QRect(720, 530, 311, 31));
        patient_disease->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_3 = new QLabel(UpdatePatientInfo);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(490, 380, 221, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_10 = new QLabel(UpdatePatientInfo);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(750, 230, 211, 51));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-size: 28px"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame = new QFrame(UpdatePatientInfo);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(510, 310, 611, 291));
        frame->setStyleSheet(QString::fromUtf8("background-color: #1c1c1c;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->raise();
        label_2->raise();
        back_btn->raise();
        add_patient_btn->raise();
        label_9->raise();
        search_patient_input->raise();
        search_btn->raise();
        patient_name->raise();
        patient_age->raise();
        label_4->raise();
        label_5->raise();
        doctors_name->raise();
        patient_gender->raise();
        label_6->raise();
        label->raise();
        patient_disease->raise();
        label_3->raise();
        label_10->raise();

        retranslateUi(UpdatePatientInfo);

        QMetaObject::connectSlotsByName(UpdatePatientInfo);
    } // setupUi

    void retranslateUi(QDialog *UpdatePatientInfo)
    {
        UpdatePatientInfo->setWindowTitle(QCoreApplication::translate("UpdatePatientInfo", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("UpdatePatientInfo", "Clinic Managemnet System - Update Patient", nullptr));
        back_btn->setText(QCoreApplication::translate("UpdatePatientInfo", "Back", nullptr));
        add_patient_btn->setText(QCoreApplication::translate("UpdatePatientInfo", "Update Patient Info", nullptr));
        label_9->setText(QCoreApplication::translate("UpdatePatientInfo", "Enter Token Nmber", nullptr));
        search_btn->setText(QCoreApplication::translate("UpdatePatientInfo", "\360\237\224\216", nullptr));
        label_4->setText(QCoreApplication::translate("UpdatePatientInfo", "Age", nullptr));
        label_5->setText(QCoreApplication::translate("UpdatePatientInfo", "Gender", nullptr));
        label_6->setText(QCoreApplication::translate("UpdatePatientInfo", "Disease", nullptr));
        label->setText(QCoreApplication::translate("UpdatePatientInfo", "Patient Name", nullptr));
        label_3->setText(QCoreApplication::translate("UpdatePatientInfo", "Doctor's Name", nullptr));
        label_10->setText(QCoreApplication::translate("UpdatePatientInfo", "Patient Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdatePatientInfo: public Ui_UpdatePatientInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEPATIENTINFO_H
