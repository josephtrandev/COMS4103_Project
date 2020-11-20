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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recentOrders
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QWidget *recentOrders)
    {
        if (recentOrders->objectName().isEmpty())
            recentOrders->setObjectName(QString::fromUtf8("recentOrders"));
        recentOrders->resize(400, 300);
        gridLayout = new QGridLayout(recentOrders);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(recentOrders);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-size:20px bold"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableView = new QTableView(page);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        stackedWidget->addWidget(page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(recentOrders);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(recentOrders);
    } // setupUi

    void retranslateUi(QWidget *recentOrders)
    {
        recentOrders->setWindowTitle(QCoreApplication::translate("recentOrders", "Form", nullptr));
        label->setText(QCoreApplication::translate("recentOrders", "Recent Orders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recentOrders: public Ui_recentOrders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTORDERS_H
