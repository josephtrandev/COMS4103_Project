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
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemLookUp
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;

    void setupUi(QWidget *ItemLookUp)
    {
        if (ItemLookUp->objectName().isEmpty())
            ItemLookUp->setObjectName(QString::fromUtf8("ItemLookUp"));
        ItemLookUp->resize(400, 300);
        gridLayout = new QGridLayout(ItemLookUp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(ItemLookUp);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 140, 101, 71));
        stackedWidget->addWidget(page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(ItemLookUp);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ItemLookUp);
    } // setupUi

    void retranslateUi(QWidget *ItemLookUp)
    {
        ItemLookUp->setWindowTitle(QCoreApplication::translate("ItemLookUp", "Form", nullptr));
        label->setText(QCoreApplication::translate("ItemLookUp", "Item Look Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemLookUp: public Ui_ItemLookUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMLOOKUP_H
