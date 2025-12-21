/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *serve_next_patient_btn;
    QPushButton *next_patient_info_btn;
    QLabel *label_4;
    QPushButton *search_by_token_num_btn;
    QPushButton *search_by_name_btn;
    QPushButton *search_by_doctors_name_btn;
    QPushButton *discharge_patient_btn;
    QLabel *label_5;
    QPushButton *update_patient_info_btn;
    QPushButton *search_by_doctors_name_btn_2;
    QPushButton *exit_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1366, 859);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: \"#111111\";\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 270, 231, 51));
        QFont font;
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(420, 270, 241, 51));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 200, 151, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #00d2ff; \n"
"font-size: 22px;\n"
"font-weight: bold;\n"
"letter-spacing: 1px;\n"
"margin-bottom: 5px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 10, 571, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid #00d2ff;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1000, 200, 181, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: #00d2ff; \n"
"font-size: 22px;\n"
"font-weight: bold;\n"
"letter-spacing: 1px;\n"
"margin-bottom: 5px;"));
        serve_next_patient_btn = new QPushButton(centralwidget);
        serve_next_patient_btn->setObjectName("serve_next_patient_btn");
        serve_next_patient_btn->setGeometry(QRect(1090, 270, 241, 51));
        serve_next_patient_btn->setFont(font);
        serve_next_patient_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        serve_next_patient_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        next_patient_info_btn = new QPushButton(centralwidget);
        next_patient_info_btn->setObjectName("next_patient_info_btn");
        next_patient_info_btn->setGeometry(QRect(840, 270, 231, 51));
        next_patient_info_btn->setFont(font);
        next_patient_info_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        next_patient_info_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 380, 171, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: #00d2ff; \n"
"font-size: 22px;\n"
"font-weight: bold;\n"
"letter-spacing: 1px;\n"
"margin-bottom: 5px;"));
        search_by_token_num_btn = new QPushButton(centralwidget);
        search_by_token_num_btn->setObjectName("search_by_token_num_btn");
        search_by_token_num_btn->setGeometry(QRect(420, 440, 241, 51));
        search_by_token_num_btn->setFont(font);
        search_by_token_num_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        search_by_token_num_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        search_by_name_btn = new QPushButton(centralwidget);
        search_by_name_btn->setObjectName("search_by_name_btn");
        search_by_name_btn->setGeometry(QRect(170, 440, 231, 51));
        search_by_name_btn->setFont(font);
        search_by_name_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        search_by_name_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        search_by_doctors_name_btn = new QPushButton(centralwidget);
        search_by_doctors_name_btn->setObjectName("search_by_doctors_name_btn");
        search_by_doctors_name_btn->setGeometry(QRect(290, 520, 241, 51));
        search_by_doctors_name_btn->setFont(font);
        search_by_doctors_name_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        search_by_doctors_name_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        discharge_patient_btn = new QPushButton(centralwidget);
        discharge_patient_btn->setObjectName("discharge_patient_btn");
        discharge_patient_btn->setGeometry(QRect(1090, 440, 241, 51));
        discharge_patient_btn->setFont(font);
        discharge_patient_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        discharge_patient_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(990, 380, 221, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: #00d2ff; \n"
"font-size: 22px;\n"
"font-weight: bold;\n"
"letter-spacing: 1px;\n"
"margin-bottom: 5px;"));
        update_patient_info_btn = new QPushButton(centralwidget);
        update_patient_info_btn->setObjectName("update_patient_info_btn");
        update_patient_info_btn->setGeometry(QRect(840, 440, 231, 51));
        update_patient_info_btn->setFont(font);
        update_patient_info_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        update_patient_info_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        search_by_doctors_name_btn_2 = new QPushButton(centralwidget);
        search_by_doctors_name_btn_2->setObjectName("search_by_doctors_name_btn_2");
        search_by_doctors_name_btn_2->setGeometry(QRect(960, 520, 241, 51));
        search_by_doctors_name_btn_2->setFont(font);
        search_by_doctors_name_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        search_by_doctors_name_btn_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        exit_btn = new QPushButton(centralwidget);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(1370, 10, 121, 51));
        exit_btn->setFont(font);
        exit_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        exit_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1366, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add Normal Patient", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add Emergency Patient", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Registration", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Clinic Managemnet System - Dashboard", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Queue Control", nullptr));
        serve_next_patient_btn->setText(QCoreApplication::translate("MainWindow", "Serve Next  Patient", nullptr));
        next_patient_info_btn->setText(QCoreApplication::translate("MainWindow", "Next Patient Info", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Search & Find", nullptr));
        search_by_token_num_btn->setText(QCoreApplication::translate("MainWindow", "By Token Number", nullptr));
        search_by_name_btn->setText(QCoreApplication::translate("MainWindow", "By Name", nullptr));
        search_by_doctors_name_btn->setText(QCoreApplication::translate("MainWindow", "By Doctor Name", nullptr));
        discharge_patient_btn->setText(QCoreApplication::translate("MainWindow", "Discharge Patient", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Data Management", nullptr));
        update_patient_info_btn->setText(QCoreApplication::translate("MainWindow", "Update Patient Info", nullptr));
        search_by_doctors_name_btn_2->setText(QCoreApplication::translate("MainWindow", "Show All Patients", nullptr));
        exit_btn->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
