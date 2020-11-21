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

    void setupUi(QWidget *recentOrders)
    {
        if (recentOrders->objectName().isEmpty())
            recentOrders->setObjectName(QString::fromUtf8("recentOrders"));
        recentOrders->resize(400, 300);
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
        label->setStyleSheet(QString::fromUtf8("font-size:20px bold"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        orderTable = new QTableView(page);
        orderTable->setObjectName(QString::fromUtf8("orderTable"));
        orderTable->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));

        verticalLayout->addWidget(orderTable);

        rsStackWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

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
        pushButton->setText(QCoreApplication::translate("recentOrders", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recentOrders: public Ui_recentOrders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTORDERS_H
