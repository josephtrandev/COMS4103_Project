/********************************************************************************
** Form generated from reading UI file 'recentorders.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECENTORDERS_H
#define UI_RECENTORDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recentOrders
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *rsStackWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *orderTable;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *orderIDBox;
    QLineEdit *invoiceBox;
    QLineEdit *saleIDBox;
    QLineEdit *customerIDBox;
    QLineEdit *invoiceDateBox;
    QLineEdit *invoiceStatusBox;
    QLineEdit *sPriceBox;
    QLineEdit *productNameBox;
    QLineEdit *productStyleBox;
    QLineEdit *quantityBox;
    QLineEdit *totalBox;

    void setupUi(QWidget *recentOrders)
    {
        if (recentOrders->objectName().isEmpty())
            recentOrders->setObjectName(QString::fromUtf8("recentOrders"));
        recentOrders->resize(819, 640);
        recentOrders->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: \"Nirmala UI\";\n"
"	background-color: #F8F8FF\n"
"}"));
        gridLayout = new QGridLayout(recentOrders);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rsStackWidget = new QStackedWidget(recentOrders);
        rsStackWidget->setObjectName(QString::fromUtf8("rsStackWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-size: 22pt;\n"
"color: rgb(54, 73, 88);\n"
"font-weight: bold;\n"
"border-bottom: 2px solid;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        orderTable = new QTableView(page);
        orderTable->setObjectName(QString::fromUtf8("orderTable"));
        orderTable->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        orderTable->setStyleSheet(QString::fromUtf8("QTableView {\n"
"	border: 2px solid black;\n"
"	background-color: #F8F8FF;\n"
"}\n"
"\n"
"QHeaderView{\n"
"	font-size: 14px;\n"
"	font-weight: bold;\n"
"	background-color: #C8C8C8;\n"
"	padding: 8px;\n"
"}"));

        verticalLayout->addWidget(orderTable);

        rsStackWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 50));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 22pt;\n"
"color: rgb(54, 73, 88);\n"
"font-weight: bold;\n"
"border-bottom: 2px solid;"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 45));
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
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

        gridLayout_2->addWidget(pushButton, 2, 0, 1, 1);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border: none;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	font-size: 14pt;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QLabel{\n"
"	font-size: 14pt;\n"
"	padding:5px;\n"
"}"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_13);

        orderIDBox = new QLineEdit(groupBox);
        orderIDBox->setObjectName(QString::fromUtf8("orderIDBox"));
        orderIDBox->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, orderIDBox);

        invoiceBox = new QLineEdit(groupBox);
        invoiceBox->setObjectName(QString::fromUtf8("invoiceBox"));
        invoiceBox->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, invoiceBox);

        saleIDBox = new QLineEdit(groupBox);
        saleIDBox->setObjectName(QString::fromUtf8("saleIDBox"));
        saleIDBox->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, saleIDBox);

        customerIDBox = new QLineEdit(groupBox);
        customerIDBox->setObjectName(QString::fromUtf8("customerIDBox"));
        customerIDBox->setReadOnly(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, customerIDBox);

        invoiceDateBox = new QLineEdit(groupBox);
        invoiceDateBox->setObjectName(QString::fromUtf8("invoiceDateBox"));
        invoiceDateBox->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, invoiceDateBox);

        invoiceStatusBox = new QLineEdit(groupBox);
        invoiceStatusBox->setObjectName(QString::fromUtf8("invoiceStatusBox"));
        invoiceStatusBox->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, invoiceStatusBox);

        sPriceBox = new QLineEdit(groupBox);
        sPriceBox->setObjectName(QString::fromUtf8("sPriceBox"));
        sPriceBox->setReadOnly(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, sPriceBox);

        productNameBox = new QLineEdit(groupBox);
        productNameBox->setObjectName(QString::fromUtf8("productNameBox"));
        productNameBox->setReadOnly(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, productNameBox);

        productStyleBox = new QLineEdit(groupBox);
        productStyleBox->setObjectName(QString::fromUtf8("productStyleBox"));
        productStyleBox->setReadOnly(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, productStyleBox);

        quantityBox = new QLineEdit(groupBox);
        quantityBox->setObjectName(QString::fromUtf8("quantityBox"));
        quantityBox->setReadOnly(true);

        formLayout->setWidget(9, QFormLayout::FieldRole, quantityBox);

        totalBox = new QLineEdit(groupBox);
        totalBox->setObjectName(QString::fromUtf8("totalBox"));
        totalBox->setReadOnly(true);

        formLayout->setWidget(10, QFormLayout::FieldRole, totalBox);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        rsStackWidget->addWidget(page_2);

        gridLayout->addWidget(rsStackWidget, 0, 0, 1, 1);


        retranslateUi(recentOrders);

        rsStackWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(recentOrders);
    } // setupUi

    void retranslateUi(QWidget *recentOrders)
    {
        recentOrders->setWindowTitle(QCoreApplication::translate("recentOrders", "Form", nullptr));
        label->setText(QCoreApplication::translate("recentOrders", "Recent Orders", nullptr));
        label_2->setText(QCoreApplication::translate("recentOrders", "Recent Order Details", nullptr));
        pushButton->setText(QCoreApplication::translate("recentOrders", "Return", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("recentOrders", "OrderID", nullptr));
        label_5->setText(QCoreApplication::translate("recentOrders", "InvoiceDate", nullptr));
        label_6->setText(QCoreApplication::translate("recentOrders", "InvoiceStatus", nullptr));
        label_7->setText(QCoreApplication::translate("recentOrders", "Shipping Price", nullptr));
        label_4->setText(QCoreApplication::translate("recentOrders", "Invoice ID", nullptr));
        label_8->setText(QCoreApplication::translate("recentOrders", "Quantity", nullptr));
        label_9->setText(QCoreApplication::translate("recentOrders", "Total", nullptr));
        label_10->setText(QCoreApplication::translate("recentOrders", "Product Style", nullptr));
        label_11->setText(QCoreApplication::translate("recentOrders", "Product Name", nullptr));
        label_12->setText(QCoreApplication::translate("recentOrders", "Sale ID", nullptr));
        label_13->setText(QCoreApplication::translate("recentOrders", "Customer ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recentOrders: public Ui_recentOrders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTORDERS_H
