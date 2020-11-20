/********************************************************************************
** Form generated from reading UI file 'viewinventory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWINVENTORY_H
#define UI_VIEWINVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewInventory
{
public:

    void setupUi(QWidget *viewInventory)
    {
        if (viewInventory->objectName().isEmpty())
            viewInventory->setObjectName(QString::fromUtf8("viewInventory"));
        viewInventory->resize(400, 300);

        retranslateUi(viewInventory);

        QMetaObject::connectSlotsByName(viewInventory);
    } // setupUi

    void retranslateUi(QWidget *viewInventory)
    {
        viewInventory->setWindowTitle(QCoreApplication::translate("viewInventory", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewInventory: public Ui_viewInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWINVENTORY_H
