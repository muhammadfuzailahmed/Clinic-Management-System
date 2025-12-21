/********************************************************************************
** Form generated from reading UI file 'servenextpatient.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVENEXTPATIENT_H
#define UI_SERVENEXTPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ServeNextPatient
{
public:
    QLabel *label_2;
    QPushButton *back_btn;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *patient_age;
    QLabel *label_4;
    QFrame *frame;
    QLabel *label_6;
    QLineEdit *patient_token_number;
    QLineEdit *patient_gender;
    QLineEdit *patient_name;
    QLineEdit *patient_disease;
    QLabel *label_3;
    QLineEdit *doctors_name;

    void setupUi(QDialog *ServeNextPatient)
    {
        if (ServeNextPatient->objectName().isEmpty())
            ServeNextPatient->setObjectName("ServeNextPatient");
        ServeNextPatient->resize(1398, 783);
        ServeNextPatient->setStyleSheet(QString::fromUtf8("background-color: #111111;"));
        label_2 = new QLabel(ServeNextPatient);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(540, 10, 571, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid #00d2ff;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back_btn = new QPushButton(ServeNextPatient);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(10, 10, 211, 51));
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
"}\n"
""));
        label_8 = new QLabel(ServeNextPatient);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(730, 180, 211, 51));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-size: 28px"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(ServeNextPatient);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(500, 540, 221, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_5 = new QLabel(ServeNextPatient);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(500, 440, 221, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label = new QLabel(ServeNextPatient);
        label->setObjectName("label");
        label->setGeometry(QRect(500, 290, 221, 31));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patient_age = new QLineEdit(ServeNextPatient);
        patient_age->setObjectName("patient_age");
        patient_age->setGeometry(QRect(730, 390, 311, 31));
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
        label_4 = new QLabel(ServeNextPatient);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(500, 390, 221, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        frame = new QFrame(ServeNextPatient);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(520, 270, 611, 331));
        frame->setStyleSheet(QString::fromUtf8("background-color: #1c1c1c;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_6 = new QLabel(ServeNextPatient);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(500, 490, 221, 31));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patient_token_number = new QLineEdit(ServeNextPatient);
        patient_token_number->setObjectName("patient_token_number");
        patient_token_number->setGeometry(QRect(730, 540, 311, 31));
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
        patient_gender = new QLineEdit(ServeNextPatient);
        patient_gender->setObjectName("patient_gender");
        patient_gender->setGeometry(QRect(730, 440, 311, 31));
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
        patient_name = new QLineEdit(ServeNextPatient);
        patient_name->setObjectName("patient_name");
        patient_name->setGeometry(QRect(730, 290, 311, 31));
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
        patient_disease = new QLineEdit(ServeNextPatient);
        patient_disease->setObjectName("patient_disease");
        patient_disease->setGeometry(QRect(730, 490, 311, 31));
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
        label_3 = new QLabel(ServeNextPatient);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(500, 340, 221, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        doctors_name = new QLineEdit(ServeNextPatient);
        doctors_name->setObjectName("doctors_name");
        doctors_name->setGeometry(QRect(730, 340, 311, 31));
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
        frame->raise();
        label_2->raise();
        back_btn->raise();
        label_8->raise();
        label_7->raise();
        label_5->raise();
        label->raise();
        patient_age->raise();
        label_4->raise();
        label_6->raise();
        patient_token_number->raise();
        patient_gender->raise();
        patient_name->raise();
        patient_disease->raise();
        label_3->raise();
        doctors_name->raise();

        retranslateUi(ServeNextPatient);

        QMetaObject::connectSlotsByName(ServeNextPatient);
    } // setupUi

    void retranslateUi(QDialog *ServeNextPatient)
    {
        ServeNextPatient->setWindowTitle(QCoreApplication::translate("ServeNextPatient", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("ServeNextPatient", "Clinic Managemnet System - Serve Next Patient ", nullptr));
        back_btn->setText(QCoreApplication::translate("ServeNextPatient", "Back", nullptr));
        label_8->setText(QCoreApplication::translate("ServeNextPatient", "Patient Info", nullptr));
        label_7->setText(QCoreApplication::translate("ServeNextPatient", "Token Number", nullptr));
        label_5->setText(QCoreApplication::translate("ServeNextPatient", "Gender", nullptr));
        label->setText(QCoreApplication::translate("ServeNextPatient", "Patient Name", nullptr));
        label_4->setText(QCoreApplication::translate("ServeNextPatient", "Age", nullptr));
        label_6->setText(QCoreApplication::translate("ServeNextPatient", "Disease", nullptr));
        label_3->setText(QCoreApplication::translate("ServeNextPatient", "Doctor's Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeNextPatient: public Ui_ServeNextPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVENEXTPATIENT_H
