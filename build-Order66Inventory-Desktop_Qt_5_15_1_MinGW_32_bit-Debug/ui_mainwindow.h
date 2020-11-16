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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QTableView *tableView;
    QLabel *label;
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
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableView = new QTableView(page);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_3->addWidget(tableView, 1, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font-size: 20px\n"
""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        stackedWidget->addWidget(page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        invenBtn = new QPushButton(centralwidget);
        invenBtn->setObjectName(QString::fromUtf8("invenBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(invenBtn->sizePolicy().hasHeightForWidth());
        invenBtn->setSizePolicy(sizePolicy);
        invenBtn->setMinimumSize(QSize(180, 60));
        invenBtn->setMaximumSize(QSize(180, 60));

        verticalLayout->addWidget(invenBtn);

        itemBtn = new QPushButton(centralwidget);
        itemBtn->setObjectName(QString::fromUtf8("itemBtn"));
        sizePolicy.setHeightForWidth(itemBtn->sizePolicy().hasHeightForWidth());
        itemBtn->setSizePolicy(sizePolicy);
        itemBtn->setMinimumSize(QSize(180, 60));
        itemBtn->setMaximumSize(QSize(180, 60));

        verticalLayout->addWidget(itemBtn);

        recentBtn = new QPushButton(centralwidget);
        recentBtn->setObjectName(QString::fromUtf8("recentBtn"));
        sizePolicy.setHeightForWidth(recentBtn->sizePolicy().hasHeightForWidth());
        recentBtn->setSizePolicy(sizePolicy);
        recentBtn->setMinimumSize(QSize(180, 60));
        recentBtn->setMaximumSize(QSize(180, 60));

        verticalLayout->addWidget(recentBtn);

        trendBtn = new QPushButton(centralwidget);
        trendBtn->setObjectName(QString::fromUtf8("trendBtn"));
        sizePolicy.setHeightForWidth(trendBtn->sizePolicy().hasHeightForWidth());
        trendBtn->setSizePolicy(sizePolicy);
        trendBtn->setMinimumSize(QSize(180, 60));
        trendBtn->setMaximumSize(QSize(180, 60));

        verticalLayout->addWidget(trendBtn);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
