/********************************************************************************
** Form generated from reading UI file 'sortdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *PrimaryGroupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *PremaryColCombox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *PremaryOrdCombox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *cancleButton;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QPushButton *moreButton;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *SecondarGroupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *SecondColCombox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *SecondOrdCombox;
    QGroupBox *TeritiaryGroupBox;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *TertiaryColCombox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *TertiaryOrdCombox;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QStringLiteral("SortDialog"));
        SortDialog->resize(342, 418);
        gridLayout_4 = new QGridLayout(SortDialog);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        PrimaryGroupBox = new QGroupBox(SortDialog);
        PrimaryGroupBox->setObjectName(QStringLiteral("PrimaryGroupBox"));
        gridLayout = new QGridLayout(PrimaryGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(PrimaryGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        PremaryColCombox = new QComboBox(PrimaryGroupBox);
        PremaryColCombox->setObjectName(QStringLiteral("PremaryColCombox"));

        horizontalLayout->addWidget(PremaryColCombox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(PrimaryGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        PremaryOrdCombox = new QComboBox(PrimaryGroupBox);
        PremaryOrdCombox->setObjectName(QStringLiteral("PremaryOrdCombox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PremaryOrdCombox->sizePolicy().hasHeightForWidth());
        PremaryOrdCombox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(PremaryOrdCombox);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 2);

        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_5->addWidget(PrimaryGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_7->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        okButton = new QPushButton(SortDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        verticalLayout->addWidget(okButton);

        cancleButton = new QPushButton(SortDialog);
        cancleButton->setObjectName(QStringLiteral("cancleButton"));

        verticalLayout->addWidget(cancleButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        line = new QFrame(SortDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        moreButton = new QPushButton(SortDialog);
        moreButton->setObjectName(QStringLiteral("moreButton"));

        verticalLayout->addWidget(moreButton);


        horizontalLayout_7->addLayout(verticalLayout);


        gridLayout_4->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        SecondarGroupBox = new QGroupBox(SortDialog);
        SecondarGroupBox->setObjectName(QStringLiteral("SecondarGroupBox"));
        gridLayout_2 = new QGridLayout(SecondarGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(SecondarGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        SecondColCombox = new QComboBox(SecondarGroupBox);
        SecondColCombox->setObjectName(QStringLiteral("SecondColCombox"));

        horizontalLayout_3->addWidget(SecondColCombox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(SecondarGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_4);

        SecondOrdCombox = new QComboBox(SecondarGroupBox);
        SecondOrdCombox->setObjectName(QStringLiteral("SecondOrdCombox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SecondOrdCombox->sizePolicy().hasHeightForWidth());
        SecondOrdCombox->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(SecondOrdCombox);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        verticalLayout_6->addWidget(SecondarGroupBox);

        TeritiaryGroupBox = new QGroupBox(SortDialog);
        TeritiaryGroupBox->setObjectName(QStringLiteral("TeritiaryGroupBox"));
        gridLayout_3 = new QGridLayout(TeritiaryGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(TeritiaryGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        TertiaryColCombox = new QComboBox(TeritiaryGroupBox);
        TertiaryColCombox->setObjectName(QStringLiteral("TertiaryColCombox"));

        horizontalLayout_5->addWidget(TertiaryColCombox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(TeritiaryGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_6);

        TertiaryOrdCombox = new QComboBox(TeritiaryGroupBox);
        TertiaryOrdCombox->setObjectName(QStringLiteral("TertiaryOrdCombox"));
        sizePolicy2.setHeightForWidth(TertiaryOrdCombox->sizePolicy().hasHeightForWidth());
        TertiaryOrdCombox->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(TertiaryOrdCombox);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_6);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);


        verticalLayout_6->addWidget(TeritiaryGroupBox);


        horizontalLayout_8->addLayout(verticalLayout_6);

        horizontalSpacer_4 = new QSpacerItem(95, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(1, 1);

        gridLayout_4->addLayout(horizontalLayout_8, 1, 0, 1, 1);


        retranslateUi(SortDialog);
        QObject::connect(moreButton, SIGNAL(toggled(bool)), SecondarGroupBox, SLOT(setVisible(bool)));
        QObject::connect(okButton, SIGNAL(clicked()), SortDialog, SLOT(accept()));
        QObject::connect(cancleButton, SIGNAL(clicked()), SortDialog, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), TeritiaryGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QApplication::translate("SortDialog", "Sort", 0));
        PrimaryGroupBox->setTitle(QApplication::translate("SortDialog", "&Primary Keys", 0));
        label->setText(QApplication::translate("SortDialog", "Columnl", 0));
        PremaryColCombox->clear();
        PremaryColCombox->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        label_2->setText(QApplication::translate("SortDialog", "Order", 0));
        PremaryOrdCombox->clear();
        PremaryOrdCombox->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Asceding", 0)
        );
        okButton->setText(QApplication::translate("SortDialog", "OK", 0));
        cancleButton->setText(QApplication::translate("SortDialog", "Cancle", 0));
        moreButton->setText(QApplication::translate("SortDialog", "&More", 0));
        SecondarGroupBox->setTitle(QApplication::translate("SortDialog", "&Secondry Keys", 0));
        label_3->setText(QApplication::translate("SortDialog", "Columnl", 0));
        SecondColCombox->clear();
        SecondColCombox->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        label_4->setText(QApplication::translate("SortDialog", "Order", 0));
        SecondOrdCombox->clear();
        SecondOrdCombox->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Asceding", 0)
        );
        TeritiaryGroupBox->setTitle(QApplication::translate("SortDialog", "&Tertiary Keys", 0));
        label_5->setText(QApplication::translate("SortDialog", "Columnl", 0));
        TertiaryColCombox->clear();
        TertiaryColCombox->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        label_6->setText(QApplication::translate("SortDialog", "Order", 0));
        TertiaryOrdCombox->clear();
        TertiaryOrdCombox->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Asceding", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
