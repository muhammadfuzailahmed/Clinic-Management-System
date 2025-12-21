/********************************************************************************
** Form generated from reading UI file 'addnormalpatient.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNORMALPATIENT_H
#define UI_ADDNORMALPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNormalPatient
{
public:
    QLabel *label_2;
    QPushButton *back_btn;
    QFrame *frame;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *patient_name;
    QLabel *label_3;
    QLineEdit *doctors_name;
    QLabel *label_5;
    QLineEdit *patient_gender;
    QLabel *label_4;
    QLineEdit *patient_age;
    QLabel *label_6;
    QLineEdit *patient_disease;
    QPushButton *add_patient_btn;

    void setupUi(QDialog *AddNormalPatient)
    {
        if (AddNormalPatient->objectName().isEmpty())
            AddNormalPatient->setObjectName("AddNormalPatient");
        AddNormalPatient->resize(1384, 838);
        AddNormalPatient->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        AddNormalPatient->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        AddNormalPatient->setStyleSheet(QString::fromUtf8("background-color: #111111;\n"
""));
        label_2 = new QLabel(AddNormalPatient);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(530, 20, 571, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid #00d2ff;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back_btn = new QPushButton(AddNormalPatient);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(20, 20, 211, 51));
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
"/* 3. Optional: Pressed state for a 'clicked' feel */\n"
"QPushButton:pressed {\n"
"    background-color: #000000;\n"
"}"));
        frame = new QFrame(AddNormalPatient);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(460, 160, 681, 571));
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
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("border: none;"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        patient_name = new QLineEdit(formLayoutWidget);
        patient_name->setObjectName("patient_name");
        patient_name->setStyleSheet(QString::fromUtf8("/* Normal State */\n"
"QLineEdit {\n"
"    background-color: #1c1c1c;  /* Slightly lighter than #111111 background */\n"
"    border: 1px solid #333333;   /* Subtle border when not focused */\n"
"    border-radius: 4px;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* Focus State - When the user clicks inside to type */\n"
"QLineEdit:focus {\n"
"    border: 1px solid #00d2ff;  /* Medical Cyan glow on focus */\n"
"    background-color: #222222;  /* Slightly lighter background to show activity */\n"
"}"));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, patient_name);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("border: none;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        doctors_name = new QLineEdit(formLayoutWidget);
        doctors_name->setObjectName("doctors_name");
        doctors_name->setStyleSheet(QString::fromUtf8("/* Normal State */\n"
"QLineEdit {\n"
"    background-color: #1c1c1c;  /* Slightly lighter than #111111 background */\n"
"    border: 1px solid #333333;   /* Subtle border when not focused */\n"
"    border-radius: 4px;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* Focus State - When the user clicks inside to type */\n"
"QLineEdit:focus {\n"
"    border: 1px solid #00d2ff;  /* Medical Cyan glow on focus */\n"
"    background-color: #222222;  /* Slightly lighter background to show activity */\n"
"}"));

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, doctors_name);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("border: none;"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_5);

        patient_gender = new QLineEdit(formLayoutWidget);
        patient_gender->setObjectName("patient_gender");
        patient_gender->setStyleSheet(QString::fromUtf8("/* Normal State */\n"
"QLineEdit {\n"
"    background-color: #1c1c1c;  /* Slightly lighter than #111111 background */\n"
"    border: 1px solid #333333;   /* Subtle border when not focused */\n"
"    border-radius: 4px;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* Focus State - When the user clicks inside to type */\n"
"QLineEdit:focus {\n"
"    border: 1px solid #00d2ff;  /* Medical Cyan glow on focus */\n"
"    background-color: #222222;  /* Slightly lighter background to show activity */\n"
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
        patient_age->setStyleSheet(QString::fromUtf8("/* Normal State */\n"
"QLineEdit {\n"
"    background-color: #1c1c1c;  /* Slightly lighter than #111111 background */\n"
"    border: 1px solid #333333;   /* Subtle border when not focused */\n"
"    border-radius: 4px;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* Focus State - When the user clicks inside to type */\n"
"QLineEdit:focus {\n"
"    border: 1px solid #00d2ff;  /* Medical Cyan glow on focus */\n"
"    background-color: #222222;  /* Slightly lighter background to show activity */\n"
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
"/* 3. Optional: Pressed state for a 'clicked' feel */\n"
"QPushButton:pressed {\n"
"    background-color: #000000;\n"
"}"));

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, add_patient_btn);


        retranslateUi(AddNormalPatient);

        QMetaObject::connectSlotsByName(AddNormalPatient);
    } // setupUi

    void retranslateUi(QDialog *AddNormalPatient)
    {
        AddNormalPatient->setWindowTitle(QCoreApplication::translate("AddNormalPatient", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("AddNormalPatient", "Clinic Managemnet System - Add Normal Patient", nullptr));
        back_btn->setText(QCoreApplication::translate("AddNormalPatient", "Back", nullptr));
        label->setText(QCoreApplication::translate("AddNormalPatient", "Patient Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddNormalPatient", "Doctor's Name", nullptr));
        label_5->setText(QCoreApplication::translate("AddNormalPatient", "Gender", nullptr));
        label_4->setText(QCoreApplication::translate("AddNormalPatient", "Age", nullptr));
        label_6->setText(QCoreApplication::translate("AddNormalPatient", "Disease", nullptr));
        add_patient_btn->setText(QCoreApplication::translate("AddNormalPatient", "Add Patient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNormalPatient: public Ui_AddNormalPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNORMALPATIENT_H
