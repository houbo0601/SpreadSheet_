﻿#include<QtGui>
#include<qlabel.h>
#include<qlineedit.h>
#include<qcheckbox.h>
#include<qpushbutton.h>
#include "finddialog.h"
#include <Qlayout>

FindDialog::FindDialog(QWidget * parent) : 
	QDialog(parent) 
{
	label = new QLabel(tr("Find &what:"));
	lineEdit = new QLineEdit;
	label->setBuddy(lineEdit);

	caseCheckBox = new QCheckBox(tr("Match &case"));
	backwardCheckBox = new QCheckBox(tr("Search &backward"));

	findButton = new QPushButton(tr("&find"));
	findButton->setDefault(true);
	findButton->setEnabled(false);

	closeButton = new QPushButton(tr("Close"));

	//链接信号和槽
	connect(lineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(enablefindButton(const QString&)));
	connect(findButton, SIGNAL(clicked()), this, SLOT(findClicked()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
	
	//建立窗口布局
	QHBoxLayout *topLeftLayout = new QHBoxLayout();
	topLeftLayout->addWidget(label);
	topLeftLayout->addWidget(lineEdit);

	QVBoxLayout *leftLayout = new	QVBoxLayout();
	leftLayout->addLayout(topLeftLayout);
	leftLayout->addWidget(caseCheckBox);
	leftLayout->addWidget(backwardCheckBox);

	QVBoxLayout *rightLayout = new QVBoxLayout();
	rightLayout->addWidget(findButton);
	rightLayout->addWidget(closeButton);
	rightLayout->addStretch();

	QVBoxLayout *mainLayout = new	QVBoxLayout();
	mainLayout->addLayout(leftLayout);
	mainLayout->addLayout(rightLayout);
	setLayout(mainLayout);

	setWindowTitle(tr("Find"));
	setFixedHeight(sizeHint().height());
}

void FindDialog::findClicked()
{
	QString text = lineEdit->text();
	Qt::CaseSensitivity cs = caseCheckBox->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive;
	if (backwardCheckBox->isChecked())
	{
		emit findPrevious(text, cs);
	}
	else
	{
		emit findNext(text, cs);
	}

}
FindDialog::~FindDialog()
{
}
void FindDialog::enablefindButton(const QString & strText)
{
	findButton->setEnabled(! strText.isEmpty());
}
