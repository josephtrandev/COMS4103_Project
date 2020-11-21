/********************************************************************************
** Form generated from reading UI file 'recentorderdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECENTORDERDETAILS_H
#define UI_RECENTORDERDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recentOrderDetails
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *rtnRecOrd;

    void setupUi(QWidget *recentOrderDetails)
    {
        if (recentOrderDetails->objectName().isEmpty())
            recentOrderDetails->setObjectName(QString::fromUtf8("recentOrderDetails"));
        recentOrderDetails->resize(400, 300);
        gridLayout = new QGridLayout(recentOrderDetails);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(recentOrderDetails);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        rtnRecOrd = new QPushButton(recentOrderDetails);
        rtnRecOrd->setObjectName(QString::fromUtf8("rtnRecOrd"));

        gridLayout->addWidget(rtnRecOrd, 1, 0, 1, 1);


        retranslateUi(recentOrderDetails);

        QMetaObject::connectSlotsByName(recentOrderDetails);
    } // setupUi

    void retranslateUi(QWidget *recentOrderDetails)
    {
        recentOrderDetails->setWindowTitle(QCoreApplication::translate("recentOrderDetails", "Form", nullptr));
        label->setText(QCoreApplication::translate("recentOrderDetails", "RECENT ORDER DETAILS", nullptr));
        rtnRecOrd->setText(QCoreApplication::translate("recentOrderDetails", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recentOrderDetails: public Ui_recentOrderDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTORDERDETAILS_H
