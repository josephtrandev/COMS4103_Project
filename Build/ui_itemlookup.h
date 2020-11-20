/********************************************************************************
** Form generated from reading UI file 'itemlookup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMLOOKUP_H
#define UI_ITEMLOOKUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_ItemLookUp
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *getItemText;
    QPushButton *lookUpBtn;
    QTableView *itemLookUpTbl;

    void setupUi(QWidget *ItemLookUp)
    {
        if (ItemLookUp->objectName().isEmpty())
            ItemLookUp->setObjectName(QString::fromUtf8("ItemLookUp"));
        ItemLookUp->resize(715, 461);
        ItemLookUp->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(ItemLookUp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(ItemLookUp);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setAutoFillBackground(false);
        page->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: white;\n"
"	color: 2f3e46;\n"
"}"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-size: 20px;\n"
"	border: none;\n"
"	background-color: none;\n"
"	color: rgb(54, 73, 88);\n"
"}"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignTop);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border: none;\n"
"	background-color: none;\n"
"	color: rgb(54, 73, 88);\n"
"}"));

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter);

        getItemText = new QLineEdit(groupBox);
        getItemText->setObjectName(QString::fromUtf8("getItemText"));
        getItemText->setMinimumSize(QSize(120, 30));
        getItemText->setMaximumSize(QSize(120, 30));
        getItemText->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 2 solid black;\n"
"	background-color: white;\n"
"}"));
        getItemText->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(getItemText, 0, Qt::AlignHCenter);

        lookUpBtn = new QPushButton(groupBox);
        lookUpBtn->setObjectName(QString::fromUtf8("lookUpBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lookUpBtn->sizePolicy().hasHeightForWidth());
        lookUpBtn->setSizePolicy(sizePolicy1);
        lookUpBtn->setMinimumSize(QSize(180, 40));
        lookUpBtn->setMaximumSize(QSize(180, 40));
        lookUpBtn->setFont(font);
        lookUpBtn->setCursor(QCursor(Qt::PointingHandCursor));
        lookUpBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout_2->addWidget(lookUpBtn, 0, Qt::AlignHCenter);

        itemLookUpTbl = new QTableView(groupBox);
        itemLookUpTbl->setObjectName(QString::fromUtf8("itemLookUpTbl"));
        itemLookUpTbl->setStyleSheet(QString::fromUtf8("QTableView {\n"
"	border: 2 solid black;\n"
"	background-color: white;\n"
"}"));

        verticalLayout_2->addWidget(itemLookUpTbl);


        verticalLayout->addWidget(groupBox);

        stackedWidget->addWidget(page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(ItemLookUp);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ItemLookUp);
    } // setupUi

    void retranslateUi(QWidget *ItemLookUp)
    {
        ItemLookUp->setWindowTitle(QCoreApplication::translate("ItemLookUp", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ItemLookUp", "Item Look Up", nullptr));
        label->setText(QCoreApplication::translate("ItemLookUp", "Item Look Up", nullptr));
        label_2->setText(QCoreApplication::translate("ItemLookUp", "Enter Item ID:", nullptr));
#if QT_CONFIG(tooltip)
        getItemText->setToolTip(QCoreApplication::translate("ItemLookUp", "Search for an item using its ID number", nullptr));
#endif // QT_CONFIG(tooltip)
        getItemText->setText(QString());
        getItemText->setPlaceholderText(QCoreApplication::translate("ItemLookUp", "ENTER ID HERE", nullptr));
        lookUpBtn->setText(QCoreApplication::translate("ItemLookUp", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemLookUp: public Ui_ItemLookUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMLOOKUP_H
