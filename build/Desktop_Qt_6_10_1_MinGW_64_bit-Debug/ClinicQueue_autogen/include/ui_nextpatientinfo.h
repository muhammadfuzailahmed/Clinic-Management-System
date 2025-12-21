/********************************************************************************
** Form generated from reading UI file 'nextpatientinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXTPATIENTINFO_H
#define UI_NEXTPATIENTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NextPatientInfo
{
public:
    QLabel *label_2;
    QPushButton *back_btn;
    QLineEdit *patient_name;
    QLineEdit *patient_disease;
    QLineEdit *patient_age;
    QLineEdit *patient_gender;
    QLineEdit *doctors_name;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *patient_token_number;
    QLabel *label_8;
    QFrame *frame;

    void setupUi(QDialog *NextPatientInfo)
    {
        if (NextPatientInfo->objectName().isEmpty())
            NextPatientInfo->setObjectName("NextPatientInfo");
        NextPatientInfo->resize(1369, 821);
        NextPatientInfo->setStyleSheet(QString::fromUtf8("background-color: #111111;"));
        label_2 = new QLabel(NextPatientInfo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(560, 20, 571, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid #00d2ff;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back_btn = new QPushButton(NextPatientInfo);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(10, 20, 211, 51));
        QFont font1;
        font1.setBold(true);
        back_btn->setFont(font1);
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
        patient_name = new QLineEdit(NextPatientInfo);
        patient_name->setObjectName("patient_name");
        patient_name->setGeometry(QRect(740, 290, 311, 31));
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
        patient_name->setReadOnly(true);
        patient_disease = new QLineEdit(NextPatientInfo);
        patient_disease->setObjectName("patient_disease");
        patient_disease->setGeometry(QRect(740, 490, 311, 31));
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
        patient_disease->setReadOnly(true);
        patient_age = new QLineEdit(NextPatientInfo);
        patient_age->setObjectName("patient_age");
        patient_age->setGeometry(QRect(740, 390, 311, 31));
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
        patient_age->setReadOnly(true);
        patient_gender = new QLineEdit(NextPatientInfo);
        patient_gender->setObjectName("patient_gender");
        patient_gender->setGeometry(QRect(740, 440, 311, 31));
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
        patient_gender->setReadOnly(true);
        doctors_name = new QLineEdit(NextPatientInfo);
        doctors_name->setObjectName("doctors_name");
        doctors_name->setGeometry(QRect(740, 340, 311, 31));
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
        doctors_name->setReadOnly(true);
        label = new QLabel(NextPatientInfo);
        label->setObjectName("label");
        label->setGeometry(QRect(510, 290, 221, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_6 = new QLabel(NextPatientInfo);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(510, 490, 221, 31));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_5 = new QLabel(NextPatientInfo);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(510, 440, 221, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_3 = new QLabel(NextPatientInfo);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(510, 340, 221, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_4 = new QLabel(NextPatientInfo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(510, 390, 221, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_7 = new QLabel(NextPatientInfo);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(510, 540, 221, 31));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patient_token_number = new QLineEdit(NextPatientInfo);
        patient_token_number->setObjectName("patient_token_number");
        patient_token_number->setGeometry(QRect(740, 540, 311, 31));
        patient_token_number->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        patient_token_number->setReadOnly(true);
        label_8 = new QLabel(NextPatientInfo);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(770, 190, 211, 51));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-size: 28px"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame = new QFrame(NextPatientInfo);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(530, 270, 611, 331));
        frame->setStyleSheet(QString::fromUtf8("background-color: #1c1c1c;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->raise();
        label_2->raise();
        back_btn->raise();
        patient_name->raise();
        patient_disease->raise();
        patient_age->raise();
        patient_gender->raise();
        doctors_name->raise();
        label->raise();
        label_6->raise();
        label_5->raise();
        label_3->raise();
        label_4->raise();
        label_7->raise();
        patient_token_number->raise();
        label_8->raise();

        retranslateUi(NextPatientInfo);

        QMetaObject::connectSlotsByName(NextPatientInfo);
    } // setupUi

    void retranslateUi(QDialog *NextPatientInfo)
    {
        NextPatientInfo->setWindowTitle(QCoreApplication::translate("NextPatientInfo", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("NextPatientInfo", "Clinic Managemnet System - Next Patient Info", nullptr));
        back_btn->setText(QCoreApplication::translate("NextPatientInfo", "Back", nullptr));
        label->setText(QCoreApplication::translate("NextPatientInfo", "Patient Name", nullptr));
        label_6->setText(QCoreApplication::translate("NextPatientInfo", "Disease", nullptr));
        label_5->setText(QCoreApplication::translate("NextPatientInfo", "Gender", nullptr));
        label_3->setText(QCoreApplication::translate("NextPatientInfo", "Doctor's Name", nullptr));
        label_4->setText(QCoreApplication::translate("NextPatientInfo", "Age", nullptr));
        label_7->setText(QCoreApplication::translate("NextPatientInfo", "Token Number", nullptr));
        label_8->setText(QCoreApplication::translate("NextPatientInfo", "Patient Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NextPatientInfo: public Ui_NextPatientInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXTPATIENTINFO_H
