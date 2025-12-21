/********************************************************************************
** Form generated from reading UI file 'searchpatientbytoken.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPATIENTBYTOKEN_H
#define UI_SEARCHPATIENTBYTOKEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SearchPatientByToken
{
public:
    QLineEdit *search_patient_input;
    QPushButton *back_btn;
    QPushButton *search_btn;
    QLabel *label_8;
    QLabel *label_2;
    QLineEdit *patient_name;
    QLineEdit *patient_age;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *doctors_name;
    QLineEdit *patient_gender;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *patient_token_number;
    QLabel *label_7;
    QLineEdit *patient_disease;
    QLabel *label_3;
    QLabel *label_9;
    QFrame *frame;

    void setupUi(QDialog *SearchPatientByToken)
    {
        if (SearchPatientByToken->objectName().isEmpty())
            SearchPatientByToken->setObjectName("SearchPatientByToken");
        SearchPatientByToken->resize(1383, 840);
        SearchPatientByToken->setStyleSheet(QString::fromUtf8("background-color: \"#111111\";\n"
""));
        search_patient_input = new QLineEdit(SearchPatientByToken);
        search_patient_input->setObjectName("search_patient_input");
        search_patient_input->setGeometry(QRect(730, 120, 311, 31));
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
"\n"
""));
        back_btn = new QPushButton(SearchPatientByToken);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(30, 20, 211, 51));
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
        search_btn = new QPushButton(SearchPatientByToken);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(1050, 120, 91, 31));
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
        label_8 = new QLabel(SearchPatientByToken);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(450, 120, 271, 31));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_2 = new QLabel(SearchPatientByToken);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 20, 721, 51));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid #00d2ff"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        patient_name = new QLineEdit(SearchPatientByToken);
        patient_name->setObjectName("patient_name");
        patient_name->setGeometry(QRect(710, 350, 311, 31));
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
        patient_age = new QLineEdit(SearchPatientByToken);
        patient_age->setObjectName("patient_age");
        patient_age->setGeometry(QRect(710, 450, 311, 31));
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
        label_4 = new QLabel(SearchPatientByToken);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(480, 450, 221, 31));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_5 = new QLabel(SearchPatientByToken);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(480, 500, 221, 31));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        doctors_name = new QLineEdit(SearchPatientByToken);
        doctors_name->setObjectName("doctors_name");
        doctors_name->setGeometry(QRect(710, 400, 311, 31));
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
        patient_gender = new QLineEdit(SearchPatientByToken);
        patient_gender->setObjectName("patient_gender");
        patient_gender->setGeometry(QRect(710, 500, 311, 31));
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
        label_6 = new QLabel(SearchPatientByToken);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(480, 550, 221, 31));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label = new QLabel(SearchPatientByToken);
        label->setObjectName("label");
        label->setGeometry(QRect(480, 350, 221, 31));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patient_token_number = new QLineEdit(SearchPatientByToken);
        patient_token_number->setObjectName("patient_token_number");
        patient_token_number->setGeometry(QRect(710, 600, 311, 31));
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
        label_7 = new QLabel(SearchPatientByToken);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(480, 600, 221, 31));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patient_disease = new QLineEdit(SearchPatientByToken);
        patient_disease->setObjectName("patient_disease");
        patient_disease->setGeometry(QRect(710, 550, 311, 31));
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
        label_3 = new QLabel(SearchPatientByToken);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(480, 400, 221, 31));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_9 = new QLabel(SearchPatientByToken);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(740, 250, 211, 51));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-size: 28px"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame = new QFrame(SearchPatientByToken);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(510, 330, 611, 331));
        frame->setStyleSheet(QString::fromUtf8("background-color: #1c1c1c;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->raise();
        search_patient_input->raise();
        back_btn->raise();
        search_btn->raise();
        label_8->raise();
        label_2->raise();
        patient_name->raise();
        patient_age->raise();
        label_4->raise();
        label_5->raise();
        doctors_name->raise();
        patient_gender->raise();
        label_6->raise();
        label->raise();
        patient_token_number->raise();
        label_7->raise();
        patient_disease->raise();
        label_3->raise();
        label_9->raise();

        retranslateUi(SearchPatientByToken);

        QMetaObject::connectSlotsByName(SearchPatientByToken);
    } // setupUi

    void retranslateUi(QDialog *SearchPatientByToken)
    {
        SearchPatientByToken->setWindowTitle(QCoreApplication::translate("SearchPatientByToken", "Dialog", nullptr));
        back_btn->setText(QCoreApplication::translate("SearchPatientByToken", "Back", nullptr));
        search_btn->setText(QCoreApplication::translate("SearchPatientByToken", "\360\237\224\216", nullptr));
        label_8->setText(QCoreApplication::translate("SearchPatientByToken", "Enter Patient's Token Number", nullptr));
        label_2->setText(QCoreApplication::translate("SearchPatientByToken", "Clinic Managemnet System - Search Patient by Token Number", nullptr));
        label_4->setText(QCoreApplication::translate("SearchPatientByToken", "Age", nullptr));
        label_5->setText(QCoreApplication::translate("SearchPatientByToken", "Gender", nullptr));
        label_6->setText(QCoreApplication::translate("SearchPatientByToken", "Disease", nullptr));
        label->setText(QCoreApplication::translate("SearchPatientByToken", "Patient Name", nullptr));
        label_7->setText(QCoreApplication::translate("SearchPatientByToken", "Token Number", nullptr));
        label_3->setText(QCoreApplication::translate("SearchPatientByToken", "Doctor's Name", nullptr));
        label_9->setText(QCoreApplication::translate("SearchPatientByToken", "Patient Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPatientByToken: public Ui_SearchPatientByToken {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPATIENTBYTOKEN_H
