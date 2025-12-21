/********************************************************************************
** Form generated from reading UI file 'searchpatientbyname.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPATIENTBYNAME_H
#define UI_SEARCHPATIENTBYNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SerachPatientByName
{
public:
    QLabel *label_2;
    QPushButton *back_btn;
    QLineEdit *search_patient_input;
    QLabel *label_8;
    QPushButton *search_btn;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *patient_age;
    QLabel *label_4;
    QFrame *frame;
    QLabel *label_9;
    QLabel *label_6;
    QLineEdit *patient_token_number;
    QLineEdit *patient_gender;
    QLineEdit *patient_name;
    QLineEdit *patient_disease;
    QLabel *label_3;
    QLineEdit *doctors_name;

    void setupUi(QDialog *SerachPatientByName)
    {
        if (SerachPatientByName->objectName().isEmpty())
            SerachPatientByName->setObjectName("SerachPatientByName");
        SerachPatientByName->resize(1392, 653);
        SerachPatientByName->setStyleSheet(QString::fromUtf8("background-color: \"#111111\";"));
        label_2 = new QLabel(SerachPatientByName);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 20, 641, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid #00d2ff"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back_btn = new QPushButton(SerachPatientByName);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(30, 20, 211, 51));
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
        search_patient_input = new QLineEdit(SerachPatientByName);
        search_patient_input->setObjectName("search_patient_input");
        search_patient_input->setGeometry(QRect(660, 130, 311, 31));
        search_patient_input->setCursor(QCursor(Qt::CursorShape::SizeVerCursor));
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
"}\n"
""));
        label_8 = new QLabel(SerachPatientByName);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(430, 130, 221, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        search_btn = new QPushButton(SerachPatientByName);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(980, 130, 91, 31));
        search_btn->setFont(font1);
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
        label_7 = new QLabel(SerachPatientByName);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(480, 630, 221, 31));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_5 = new QLabel(SerachPatientByName);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(480, 530, 221, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label = new QLabel(SerachPatientByName);
        label->setObjectName("label");
        label->setGeometry(QRect(480, 380, 221, 31));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patient_age = new QLineEdit(SerachPatientByName);
        patient_age->setObjectName("patient_age");
        patient_age->setGeometry(QRect(710, 480, 311, 31));
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
        label_4 = new QLabel(SerachPatientByName);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(480, 480, 221, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        frame = new QFrame(SerachPatientByName);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(500, 360, 611, 331));
        frame->setStyleSheet(QString::fromUtf8("background-color: #1c1c1c;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_9 = new QLabel(SerachPatientByName);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(740, 280, 211, 51));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-size: 28px"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(SerachPatientByName);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(480, 580, 221, 31));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patient_token_number = new QLineEdit(SerachPatientByName);
        patient_token_number->setObjectName("patient_token_number");
        patient_token_number->setGeometry(QRect(710, 630, 311, 31));
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
        patient_gender = new QLineEdit(SerachPatientByName);
        patient_gender->setObjectName("patient_gender");
        patient_gender->setGeometry(QRect(710, 530, 311, 31));
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
        patient_name = new QLineEdit(SerachPatientByName);
        patient_name->setObjectName("patient_name");
        patient_name->setGeometry(QRect(710, 380, 311, 31));
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
        patient_disease = new QLineEdit(SerachPatientByName);
        patient_disease->setObjectName("patient_disease");
        patient_disease->setGeometry(QRect(710, 580, 311, 31));
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
        label_3 = new QLabel(SerachPatientByName);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(480, 430, 221, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding: 5px 0px;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        doctors_name = new QLineEdit(SerachPatientByName);
        doctors_name->setObjectName("doctors_name");
        doctors_name->setGeometry(QRect(710, 430, 311, 31));
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
        frame->raise();
        label_2->raise();
        back_btn->raise();
        search_patient_input->raise();
        label_8->raise();
        search_btn->raise();
        label_7->raise();
        label_5->raise();
        label->raise();
        patient_age->raise();
        label_4->raise();
        label_9->raise();
        label_6->raise();
        patient_token_number->raise();
        patient_gender->raise();
        patient_name->raise();
        patient_disease->raise();
        label_3->raise();
        doctors_name->raise();

        retranslateUi(SerachPatientByName);

        QMetaObject::connectSlotsByName(SerachPatientByName);
    } // setupUi

    void retranslateUi(QDialog *SerachPatientByName)
    {
        SerachPatientByName->setWindowTitle(QCoreApplication::translate("SerachPatientByName", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SerachPatientByName", "Clinic Managemnet System - Search Patient by Name", nullptr));
        back_btn->setText(QCoreApplication::translate("SerachPatientByName", "Back", nullptr));
        label_8->setText(QCoreApplication::translate("SerachPatientByName", "Enter Patient Name", nullptr));
        search_btn->setText(QCoreApplication::translate("SerachPatientByName", "\360\237\224\216", nullptr));
        label_7->setText(QCoreApplication::translate("SerachPatientByName", "Token Number", nullptr));
        label_5->setText(QCoreApplication::translate("SerachPatientByName", "Gender", nullptr));
        label->setText(QCoreApplication::translate("SerachPatientByName", "Patient Name", nullptr));
        label_4->setText(QCoreApplication::translate("SerachPatientByName", "Age", nullptr));
        label_9->setText(QCoreApplication::translate("SerachPatientByName", "Patient Info", nullptr));
        label_6->setText(QCoreApplication::translate("SerachPatientByName", "Disease", nullptr));
        label_3->setText(QCoreApplication::translate("SerachPatientByName", "Doctor's Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerachPatientByName: public Ui_SerachPatientByName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPATIENTBYNAME_H
