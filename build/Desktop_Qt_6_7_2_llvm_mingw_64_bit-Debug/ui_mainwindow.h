/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_4;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_8;
    QWidget *page_ACC;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_4;
    QStackedWidget *stackedWidget;
    QWidget *page_6;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QFormLayout *formLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QLabel *label_12;
    QLineEdit *lineEdit_8;
    QLabel *label_11;
    QLineEdit *lineEdit_9;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_9;
    QSpacerItem *horizontalSpacer_12;
    QWidget *page_7;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_5;
    QFormLayout *formLayout_5;
    QLabel *label_14;
    QFrame *frame;
    QLabel *label_13;
    QFrame *frame_4;
    QLabel *label_15;
    QFrame *frame_3;
    QLabel *label_16;
    QFrame *frame_2;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_10;
    QSpacerItem *horizontalSpacer_9;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_17;
    QTableView *tableView;
    QWidget *page_8;
    QMenuBar *menubar;
    QMenu *menuFBS;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackedWidget_2 = new QStackedWidget(centralwidget);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setEnabled(true);
        stackedWidget_2->setAutoFillBackground(false);
        stackedWidget_2->setFrameShape(QFrame::Shape::Box);
        stackedWidget_2->setFrameShadow(QFrame::Shadow::Plain);
        stackedWidget_2->setLineWidth(2);
        stackedWidget_2->setMidLineWidth(1);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout = new QVBoxLayout(page_3);
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setTextFormat(Qt::TextFormat::RichText);

        verticalLayout->addWidget(label_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(page_3);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(page_3);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(page_3);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label = new QLabel(page_3);
        label->setObjectName("label");

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        lineEdit_3 = new QLineEdit(page_3);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(page_3);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(12, 25, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 3);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        gridLayout = new QGridLayout(page_4);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(page_4);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_6 = new QLabel(page_4);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        lineEdit_4 = new QLineEdit(page_4);
        lineEdit_4->setObjectName("lineEdit_4");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_4);

        label_7 = new QLabel(page_4);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit_5 = new QLineEdit(page_4);
        lineEdit_5->setObjectName("lineEdit_5");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_5);


        verticalLayout_3->addLayout(formLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_6 = new QPushButton(page_4);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_3->addWidget(pushButton_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_3->addWidget(pushButton_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButton_5 = new QPushButton(page_4);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_3->addWidget(pushButton_5);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        stackedWidget_2->addWidget(page_4);
        page_ACC = new QWidget();
        page_ACC->setObjectName("page_ACC");
        formLayout_3 = new QFormLayout(page_ACC);
        formLayout_3->setObjectName("formLayout_3");
        label_8 = new QLabel(page_ACC);
        label_8->setObjectName("label_8");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(77);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(-1, 9, 0, -1);
        pushButton_2 = new QPushButton(page_ACC);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_4->addWidget(pushButton_2);

        pushButton_7 = new QPushButton(page_ACC);
        pushButton_7->setObjectName("pushButton_7");

        verticalLayout_4->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(page_ACC);
        pushButton_8->setObjectName("pushButton_8");

        verticalLayout_4->addWidget(pushButton_8);


        formLayout_3->setLayout(2, QFormLayout::LabelRole, verticalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_3->setItem(0, QFormLayout::FieldRole, horizontalSpacer_4);

        stackedWidget = new QStackedWidget(page_ACC);
        stackedWidget->setObjectName("stackedWidget");
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        gridLayout_2 = new QGridLayout(page_6);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName("formLayout_4");
        label_9 = new QLabel(page_6);
        label_9->setObjectName("label_9");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_9);

        lineEdit_6 = new QLineEdit(page_6);
        lineEdit_6->setObjectName("lineEdit_6");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_6);

        label_10 = new QLabel(page_6);
        label_10->setObjectName("label_10");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_10);

        lineEdit_7 = new QLineEdit(page_6);
        lineEdit_7->setObjectName("lineEdit_7");

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_7);

        label_12 = new QLabel(page_6);
        label_12->setObjectName("label_12");

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_12);

        lineEdit_8 = new QLineEdit(page_6);
        lineEdit_8->setObjectName("lineEdit_8");

        formLayout_4->setWidget(2, QFormLayout::FieldRole, lineEdit_8);

        label_11 = new QLabel(page_6);
        label_11->setObjectName("label_11");

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_11);

        lineEdit_9 = new QLineEdit(page_6);
        lineEdit_9->setObjectName("lineEdit_9");

        formLayout_4->setWidget(3, QFormLayout::FieldRole, lineEdit_9);


        verticalLayout_5->addLayout(formLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        pushButton_9 = new QPushButton(page_6);
        pushButton_9->setObjectName("pushButton_9");

        horizontalLayout_5->addWidget(pushButton_9);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        verticalLayout_5->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_5, 0, 0, 1, 1);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        gridLayout_3 = new QGridLayout(page_7);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName("formLayout_5");
        label_14 = new QLabel(page_7);
        label_14->setObjectName("label_14");

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_14);

        frame = new QFrame(page_7);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, frame);

        label_13 = new QLabel(page_7);
        label_13->setObjectName("label_13");

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_13);

        frame_4 = new QFrame(page_7);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, frame_4);

        label_15 = new QLabel(page_7);
        label_15->setObjectName("label_15");

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_15);

        frame_3 = new QFrame(page_7);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, frame_3);

        label_16 = new QLabel(page_7);
        label_16->setObjectName("label_16");

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_16);

        frame_2 = new QFrame(page_7);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, frame_2);


        verticalLayout_6->addLayout(formLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        pushButton_10 = new QPushButton(page_7);
        pushButton_10->setObjectName("pushButton_10");

        horizontalLayout_4->addWidget(pushButton_10);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_6->addLayout(horizontalLayout_4);


        gridLayout_3->addLayout(verticalLayout_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page_7);
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_4 = new QGridLayout(page);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_17 = new QLabel(page);
        label_17->setObjectName("label_17");

        verticalLayout_7->addWidget(label_17);

        tableView = new QTableView(page);
        tableView->setObjectName("tableView");

        verticalLayout_7->addWidget(tableView);


        gridLayout_4->addLayout(verticalLayout_7, 0, 0, 1, 1);

        stackedWidget->addWidget(page);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, stackedWidget);

        stackedWidget_2->addWidget(page_ACC);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        stackedWidget_2->addWidget(page_8);

        verticalLayout_2->addWidget(stackedWidget_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 21));
        menuFBS = new QMenu(menubar);
        menuFBS->setObjectName("menuFBS");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFBS->menuAction());

        retranslateUi(MainWindow);

        stackedWidget_2->setCurrentIndex(2);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">REGISTRATION</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "e-mail", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "TO LOGIN", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "REGISTER", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">AUTHORISATION</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "password", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "TO REGISTER", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "RESET PASSWORD", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">MY ACCOUNT</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PERSONAL INFORMATION", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "SEARCH FOR PLANES", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "HISTORY", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Last name", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "e-mail", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "SAVE CHANGES", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Last name", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "e-mail", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "CHANGE INFO", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">PURCHASE HISTORY</span></p></body></html>", nullptr));
        menuFBS->setTitle(QCoreApplication::translate("MainWindow", "FBS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
