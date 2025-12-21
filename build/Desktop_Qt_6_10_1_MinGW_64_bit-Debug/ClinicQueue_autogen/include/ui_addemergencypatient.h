/********************************************************************************
** Form generated from reading UI file 'addemergencypatient.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEMERGENCYPATIENT_H
#define UI_ADDEMERGENCYPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddEmergencyPatient
{
public:
    QLabel *label;
    QPushButton *back_btn;
    QFrame *frame;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *patient_name;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *patient_gender;
    QLabel *label_4;
    QLineEdit *patient_age;
    QLabel *label_6;
    QLineEdit *patient_disease;
    QPushButton *add_patient_btn;
    QComboBox *doctors_combo;

    void setupUi(QDialog *AddEmergencyPatient)
    {
        if (AddEmergencyPatient->objectName().isEmpty())
            AddEmergencyPatient->setObjectName("AddEmergencyPatient");
        AddEmergencyPatient->resize(1339, 762);
        AddEmergencyPatient->setStyleSheet(QString::fromUtf8("background-color: #111111;"));
        label = new QLabel(AddEmergencyPatient);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 30, 571, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border: 2px solid #00d2ff;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back_btn = new QPushButton(AddEmergencyPatient);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(20, 30, 211, 51));
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
"\n"
"QPushButton:pressed {\n"
"    background-color: #000000;\n"
"}"));
        frame = new QFrame(AddEmergencyPatient);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(430, 150, 681, 571));
        frame->setStyleSheet(QString::fromUtf8("background-color: \"#1c1c1c\";\n"
"border: none;\n"
"border-radius: 4px;\n"
"z-index: -1;\n"
"text-align: center;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        formLayoutWidget = new QWidget(frame);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 10, 601, 531));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayout->setVerticalSpacing(15);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("border: none;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        patient_name = new QLineEdit(formLayoutWidget);
        patient_name->setObjectName("patient_name");
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

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, patient_name);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("border: none;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("border: none;"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_5);

        patient_gender = new QLineEdit(formLayoutWidget);
        patient_gender->setObjectName("patient_gender");
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

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, patient_gender);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("border: none;"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        patient_age = new QLineEdit(formLayoutWidget);
        patient_age->setObjectName("patient_age");
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

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, patient_age);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("border: none;"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_6);

        patient_disease = new QLineEdit(formLayoutWidget);
        patient_disease->setObjectName("patient_disease");
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

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, patient_disease);

        add_patient_btn = new QPushButton(formLayoutWidget);
        add_patient_btn->setObjectName("add_patient_btn");
        add_patient_btn->setFont(font1);
        add_patient_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
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
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #000000;\n"
"}"));

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, add_patient_btn);

        doctors_combo = new QComboBox(formLayoutWidget);
        doctors_combo->setObjectName("doctors_combo");
        doctors_combo->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #1c1c1c;\n"
"    border: 1px solid #333333;\n"
"    border-radius: 4px;\n"
"    padding: 5px;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #1c1c1c;\n"
"    border: 1px solid #333333;\n"
"    selection-background-color: #00d2ff;\n"
"    selection-color: #000000;\n"
"    color: #ffffff;\n"
"    outline: none;\n"
"}"));

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, doctors_combo);


        retranslateUi(AddEmergencyPatient);

        QMetaObject::connectSlotsByName(AddEmergencyPatient);
    } // setupUi

    void retranslateUi(QDialog *AddEmergencyPatient)
    {
        AddEmergencyPatient->setWindowTitle(QCoreApplication::translate("AddEmergencyPatient", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddEmergencyPatient", "Clinic Managemnet System - Emergency Patient", nullptr));
        back_btn->setText(QCoreApplication::translate("AddEmergencyPatient", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("AddEmergencyPatient", "Patient Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddEmergencyPatient", "Doctor's Name", nullptr));
        label_5->setText(QCoreApplication::translate("AddEmergencyPatient", "Gender", nullptr));
        label_4->setText(QCoreApplication::translate("AddEmergencyPatient", "Age", nullptr));
        label_6->setText(QCoreApplication::translate("AddEmergencyPatient", "Disease", nullptr));
        add_patient_btn->setText(QCoreApplication::translate("AddEmergencyPatient", "Add Patient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEmergencyPatient: public Ui_AddEmergencyPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEMERGENCYPATIENT_H
