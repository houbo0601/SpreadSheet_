/********************************************************************************
** Form generated from reading UI file 'spreadsheet.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPREADSHEET_H
#define UI_SPREADSHEET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpreadSheet
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *SpreadSheet)
    {
        if (SpreadSheet->objectName().isEmpty())
            SpreadSheet->setObjectName(QStringLiteral("SpreadSheet"));
        SpreadSheet->resize(400, 300);
        gridLayout = new QGridLayout(SpreadSheet);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(SpreadSheet);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        retranslateUi(SpreadSheet);

        QMetaObject::connectSlotsByName(SpreadSheet);
    } // setupUi

    void retranslateUi(QWidget *SpreadSheet)
    {
        SpreadSheet->setWindowTitle(QApplication::translate("SpreadSheet", "SpreadSheet", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SpreadSheet", "\346\226\260\345\273\272\345\210\227", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("SpreadSheet", "\346\226\260\345\273\272\350\241\214", 0));
    } // retranslateUi

};

namespace Ui {
    class SpreadSheet: public Ui_SpreadSheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPREADSHEET_H
