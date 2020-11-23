/********************************************************************************
** Form generated from reading UI file 'saletrends.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALETRENDS_H
#define UI_SALETRENDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_saleTrends
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QTableView *saleTrendTb;
    QPushButton *goToAdvSrch;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QTableView *advSalesTrendTB;
    QLabel *label_3;
    QPushButton *rtnToSaleTrend;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QComboBox *secProductId;

    void setupUi(QWidget *saleTrends)
    {
        if (saleTrends->objectName().isEmpty())
            saleTrends->setObjectName(QString::fromUtf8("saleTrends"));
        saleTrends->resize(730, 414);
        saleTrends->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: \"Nirmala UI\";\n"
"	background-color: #F8F8FF;\n"
"}"));
        gridLayout = new QGridLayout(saleTrends);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(saleTrends);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-size: 22pt;\n"
"font-weight: bold;\n"
"border-bottom: 2px solid;\n"
"color: rgb(54, 73, 88);\n"
"padding-bottom: 5px;"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        saleTrendTb = new QTableView(page);
        saleTrendTb->setObjectName(QString::fromUtf8("saleTrendTb"));
        saleTrendTb->setStyleSheet(QString::fromUtf8("QTableView {\n"
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

        gridLayout_2->addWidget(saleTrendTb, 2, 0, 1, 1);

        goToAdvSrch = new QPushButton(page);
        goToAdvSrch->setObjectName(QString::fromUtf8("goToAdvSrch"));
        goToAdvSrch->setMinimumSize(QSize(0, 45));
        goToAdvSrch->setCursor(QCursor(Qt::PointingHandCursor));
        goToAdvSrch->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(goToAdvSrch, 3, 0, 1, 1);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 50));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	Border:none;\n"
"	margin-bottom: 5px;\n"
"}"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Nirmala UI\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Nirmala UI\";"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        advSalesTrendTB = new QTableView(page_2);
        advSalesTrendTB->setObjectName(QString::fromUtf8("advSalesTrendTB"));
        advSalesTrendTB->setStyleSheet(QString::fromUtf8("QTableView {\n"
"	border: 2px solid black;\n"
"	background-color: #F8F8FF;\n"
"}\n"
"\n"
"QHeaderView{\n"
"	font-size: 14px;\n"
"	font-weight: bold;\n"
"	background-color: #C8C8C8;\n"
"}"));

        gridLayout_3->addWidget(advSalesTrendTB, 3, 0, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 50));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 22pt;\n"
"font-weight: bold;\n"
"border-bottom: 2px solid;\n"
"color: rgb(54, 73, 88);\n"
"padding-bottom: 5px;"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        rtnToSaleTrend = new QPushButton(page_2);
        rtnToSaleTrend->setObjectName(QString::fromUtf8("rtnToSaleTrend"));
        rtnToSaleTrend->setMinimumSize(QSize(0, 45));
        rtnToSaleTrend->setCursor(QCursor(Qt::PointingHandCursor));
        rtnToSaleTrend->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_3->addWidget(rtnToSaleTrend, 4, 0, 1, 1);

        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	Border:none;\n"
"	margin-bottom: 5px;\n"
"}"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Nirmala UI\";"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        secProductId = new QComboBox(groupBox_2);
        secProductId->setObjectName(QString::fromUtf8("secProductId"));
        secProductId->setStyleSheet(QString::fromUtf8("font: 12pt \"Nirmala UI\";"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, secProductId);


        gridLayout_3->addWidget(groupBox_2, 2, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(saleTrends);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(saleTrends);
    } // setupUi

    void retranslateUi(QWidget *saleTrends)
    {
        saleTrends->setWindowTitle(QCoreApplication::translate("saleTrends", "Form", nullptr));
        label->setText(QCoreApplication::translate("saleTrends", "Sales Trend", nullptr));
        goToAdvSrch->setText(QCoreApplication::translate("saleTrends", "Advanced Search", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("saleTrends", "Filter By:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("saleTrends", "--No Filter--", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("saleTrends", "All", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("saleTrends", "January", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("saleTrends", "February", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("saleTrends", "March", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("saleTrends", "April", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("saleTrends", "May", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("saleTrends", "June", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("saleTrends", "July", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("saleTrends", "August", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("saleTrends", "September", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("saleTrends", "October", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("saleTrends", "November", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("saleTrends", "December", nullptr));

        label_3->setText(QCoreApplication::translate("saleTrends", "Advance Sales Trend Search", nullptr));
        rtnToSaleTrend->setText(QCoreApplication::translate("saleTrends", "Return To Sales Trend", nullptr));
        groupBox_2->setTitle(QString());
        label_4->setText(QCoreApplication::translate("saleTrends", "Select Product ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saleTrends: public Ui_saleTrends {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALETRENDS_H
