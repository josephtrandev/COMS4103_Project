/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QTableView *inventoryTable;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *invenBtn;
    QPushButton *itemBtn;
    QPushButton *recentBtn;
    QPushButton *trendBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 600);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: white;\n"
"	color: 2f3e46;\n"
"}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        inventoryTable = new QTableView(page);
        inventoryTable->setObjectName(QString::fromUtf8("inventoryTable"));
        inventoryTable->setStyleSheet(QString::fromUtf8("QHeaderView{\n"
"	font-size: 14px;\n"
"	font-weight: bold;\n"
"	background-color: #C8C8C8;\n"
"	padding: 8px;\n"
"}"));
        inventoryTable->horizontalHeader()->setMinimumSectionSize(50);
        inventoryTable->verticalHeader()->setMinimumSectionSize(28);

        gridLayout_3->addWidget(inventoryTable, 1, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-size: 20px;\n"
"	border: none;\n"
"	background-color: none;\n"
"	color: rgb(54, 73, 88);\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        stackedWidget->addWidget(page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        invenBtn = new QPushButton(centralwidget);
        invenBtn->setObjectName(QString::fromUtf8("invenBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(invenBtn->sizePolicy().hasHeightForWidth());
        invenBtn->setSizePolicy(sizePolicy1);
        invenBtn->setMinimumSize(QSize(180, 60));
        invenBtn->setMaximumSize(QSize(180, 60));
        invenBtn->setFont(font);
        invenBtn->setCursor(QCursor(Qt::PointingHandCursor));
        invenBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"	color: rgb(66, 85, 70);\n"
"	font-weight: bold;\n"
"	background: #f8f8ff;\n"
"	border: 2px solid #52796f;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background: #52796f;\n"
"	font-size: 24px;\n"
"	color: #f8f8ff;\n"
"	border: 2px solid white;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(invenBtn);

        itemBtn = new QPushButton(centralwidget);
        itemBtn->setObjectName(QString::fromUtf8("itemBtn"));
        sizePolicy1.setHeightForWidth(itemBtn->sizePolicy().hasHeightForWidth());
        itemBtn->setSizePolicy(sizePolicy1);
        itemBtn->setMinimumSize(QSize(180, 60));
        itemBtn->setMaximumSize(QSize(180, 60));
        itemBtn->setFont(font);
        itemBtn->setCursor(QCursor(Qt::PointingHandCursor));
        itemBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"	color: rgb(66, 85, 70);\n"
"	font-weight: bold;\n"
"	background: #f8f8ff;\n"
"	border: 2px solid #52796f;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background: #52796f;\n"
"	font-size: 24px;\n"
"	color: #f8f8ff;\n"
"	border: 2px solid white;\n"
"}"));

        verticalLayout->addWidget(itemBtn);

        recentBtn = new QPushButton(centralwidget);
        recentBtn->setObjectName(QString::fromUtf8("recentBtn"));
        sizePolicy1.setHeightForWidth(recentBtn->sizePolicy().hasHeightForWidth());
        recentBtn->setSizePolicy(sizePolicy1);
        recentBtn->setMinimumSize(QSize(180, 60));
        recentBtn->setMaximumSize(QSize(180, 60));
        recentBtn->setFont(font);
        recentBtn->setCursor(QCursor(Qt::PointingHandCursor));
        recentBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"	color: rgb(66, 85, 70);\n"
"	font-weight: bold;\n"
"	background: #f8f8ff;\n"
"	border: 2px solid #52796f;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background: #52796f;\n"
"	font-size: 24px;\n"
"	color: #f8f8ff;\n"
"	border: 2px solid white;\n"
"}"));

        verticalLayout->addWidget(recentBtn);

        trendBtn = new QPushButton(centralwidget);
        trendBtn->setObjectName(QString::fromUtf8("trendBtn"));
        sizePolicy1.setHeightForWidth(trendBtn->sizePolicy().hasHeightForWidth());
        trendBtn->setSizePolicy(sizePolicy1);
        trendBtn->setMinimumSize(QSize(180, 60));
        trendBtn->setMaximumSize(QSize(180, 60));
        trendBtn->setFont(font);
        trendBtn->setCursor(QCursor(Qt::PointingHandCursor));
        trendBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"	color: rgb(66, 85, 70);\n"
"	font-weight: bold;\n"
"	background: #f8f8ff;\n"
"	border: 2px solid #52796f;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background: #52796f;\n"
"	font-size: 24px;\n"
"	color: #f8f8ff;\n"
"	border: 2px solid white;\n"
"}"));

        verticalLayout->addWidget(trendBtn);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Inventory Table", nullptr));
        invenBtn->setText(QCoreApplication::translate("MainWindow", "Inventory", nullptr));
        itemBtn->setText(QCoreApplication::translate("MainWindow", "Item Look Up", nullptr));
        recentBtn->setText(QCoreApplication::translate("MainWindow", "Recent Orders", nullptr));
        trendBtn->setText(QCoreApplication::translate("MainWindow", "Sales Trends", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
