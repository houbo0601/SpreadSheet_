/********************************************************************************
** Form generated from reading UI file 'CellLocation.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELLLOCATION_H
#define UI_CELLLOCATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CellLocation
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *CellLocation)
    {
        if (CellLocation->objectName().isEmpty())
            CellLocation->setObjectName(QStringLiteral("CellLocation"));
        CellLocation->resize(331, 82);
        CellLocation->setCursor(QCursor(Qt::ArrowCursor));
        verticalLayout = new QVBoxLayout(CellLocation);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(CellLocation);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(CellLocation);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(CellLocation);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(CellLocation);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CellLocation);

        QMetaObject::connectSlotsByName(CellLocation);
    } // setupUi

    void retranslateUi(QWidget *CellLocation)
    {
        CellLocation->setWindowTitle(QApplication::translate("CellLocation", "gotoCell", 0));
        label->setText(QApplication::translate("CellLocation", "Cell Location", 0));
        okButton->setText(QApplication::translate("CellLocation", "OK", 0));
        cancelButton->setText(QApplication::translate("CellLocation", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class CellLocation: public Ui_CellLocation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELLLOCATION_H
