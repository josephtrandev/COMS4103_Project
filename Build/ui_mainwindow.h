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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton;
    QLabel *label_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *productIdBox;
    QLabel *label_6;
    QLineEdit *InvenIDBox;
    QLabel *label_3;
    QLineEdit *quantityBox;
    QLabel *label_5;
    QLineEdit *updateDateBox;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *LocBox;
    QLineEdit *StockIdBox;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *supplierBox;
    QLineEdit *qOrderBox;
    QLineEdit *orderDateBox;
    QLineEdit *orderReceiveBox;
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
        MainWindow->resize(1000, 643);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 0));
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family:  \"Nirmala UI\";\n"
"	background-color: #F8F8FF;\n"
"}\n"
""));
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
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: #F8F8FF;"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        inventoryTable = new QTableView(page);
        inventoryTable->setObjectName(QString::fromUtf8("inventoryTable"));
        inventoryTable->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        inventoryTable->setStyleSheet(QString::fromUtf8("QHeaderView{\n"
"	font-size: 12pt;\n"
"	font-weight: bold;\n"
"	background-color: #C8C8C8;\n"
"	padding: 10px;\n"
"	font-family:  \"Nirmala UI\";\n"
"}\n"
"\n"
"QTableView{\n"
"		font-family:  \"Nirmala UI\";\n"
"		font-size: 12pt;\n"
"}"));
        inventoryTable->setIconSize(QSize(5, 5));
        inventoryTable->horizontalHeader()->setMinimumSectionSize(50);
        inventoryTable->verticalHeader()->setCascadingSectionResizes(false);
        inventoryTable->verticalHeader()->setMinimumSectionSize(28);
        inventoryTable->verticalHeader()->setStretchLastSection(false);

        gridLayout_3->addWidget(inventoryTable, 1, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Nirmala UI"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font-size: 22pt;\n"
"border-bottom: 2px solid rgb(54, 73, 88);\n"
"padding-bottom: 5px;\n"
"color: rgb(54, 73, 88);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("background-color: #F8F8FF"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 45));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_4->addWidget(pushButton, 3, 0, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 50));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 22pt;\n"
"font-weight:bold;\n"
"border-bottom: 2px solid rgb(54, 73, 88);\n"
"padding-bottom: 5px;\n"
"color: rgb(54, 73, 88);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border: none;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	font-size: 18px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QLabel{\n"
"	font-size: 18px;\n"
"	padding:5px;\n"
"}"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font-size: 14pt;\n"
"\n"
"padding: 5px;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        productIdBox = new QLineEdit(groupBox);
        productIdBox->setObjectName(QString::fromUtf8("productIdBox"));
        productIdBox->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"padding: 5px;"));
        productIdBox->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, productIdBox);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"padding:5px;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        InvenIDBox = new QLineEdit(groupBox);
        InvenIDBox->setObjectName(QString::fromUtf8("InvenIDBox"));
        InvenIDBox->setStyleSheet(QString::fromUtf8(""));
        InvenIDBox->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, InvenIDBox);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"padding: 5px;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        quantityBox = new QLineEdit(groupBox);
        quantityBox->setObjectName(QString::fromUtf8("quantityBox"));
        quantityBox->setMaximumSize(QSize(125, 16777215));
        quantityBox->setStyleSheet(QString::fromUtf8(""));
        quantityBox->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, quantityBox);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"padding: 5px;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        updateDateBox = new QLineEdit(groupBox);
        updateDateBox->setObjectName(QString::fromUtf8("updateDateBox"));
        updateDateBox->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, updateDateBox);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"padding: 5px;"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"padding: 5px;"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        LocBox = new QLineEdit(groupBox);
        LocBox->setObjectName(QString::fromUtf8("LocBox"));
        LocBox->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, LocBox);

        StockIdBox = new QLineEdit(groupBox);
        StockIdBox->setObjectName(QString::fromUtf8("StockIdBox"));
        StockIdBox->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, StockIdBox);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_12);

        supplierBox = new QLineEdit(groupBox);
        supplierBox->setObjectName(QString::fromUtf8("supplierBox"));
        supplierBox->setReadOnly(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, supplierBox);

        qOrderBox = new QLineEdit(groupBox);
        qOrderBox->setObjectName(QString::fromUtf8("qOrderBox"));
        qOrderBox->setReadOnly(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, qOrderBox);

        orderDateBox = new QLineEdit(groupBox);
        orderDateBox->setObjectName(QString::fromUtf8("orderDateBox"));
        orderDateBox->setReadOnly(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, orderDateBox);

        orderReceiveBox = new QLineEdit(groupBox);
        orderReceiveBox->setObjectName(QString::fromUtf8("orderReceiveBox"));
        orderReceiveBox->setReadOnly(true);

        formLayout->setWidget(9, QFormLayout::FieldRole, orderReceiveBox);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        stackedWidget->addWidget(page_2);

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
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nirmala UI"));
        font1.setBold(true);
        font1.setWeight(75);
        invenBtn->setFont(font1);
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
        itemBtn->setFont(font1);
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
        recentBtn->setFont(font1);
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
        trendBtn->setFont(font1);
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Inventory Details", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "ProductID", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "InventoryID", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Quantity", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "UpdateDate", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "StockID", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "SupplierID", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Quantity Ordered", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Date Ordered", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Date Received", nullptr));
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
