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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QTableView *tableView;

    void setupUi(QWidget *saleTrends)
    {
        if (saleTrends->objectName().isEmpty())
            saleTrends->setObjectName(QString::fromUtf8("saleTrends"));
        saleTrends->resize(400, 300);
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
        label->setStyleSheet(QString::fromUtf8("font-size: 20px bold;"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1, Qt::AlignHCenter);

        tableView = new QTableView(page);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);

        stackedWidget->addWidget(page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(saleTrends);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(saleTrends);
    } // setupUi

    void retranslateUi(QWidget *saleTrends)
    {
        saleTrends->setWindowTitle(QCoreApplication::translate("saleTrends", "Form", nullptr));
        label->setText(QCoreApplication::translate("saleTrends", "Sales Trend", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saleTrends: public Ui_saleTrends {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALETRENDS_H
