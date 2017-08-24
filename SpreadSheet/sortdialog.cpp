#include "sortdialog.h"
#include "ui_sortdialog.h"

SortDialog::SortDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SortDialog)
{
    ui->setupUi(this);
	ui->SecondarGroupBox->hide();
	ui->TeritiaryGroupBox->hide();
	layout()->setSizeConstraint(QLayout::SetFixedSize);
}

SortDialog::~SortDialog()
{
    delete ui;
}

void SortDialog::setColumnRange(QChar first, QChar last)
{
	ui->PremaryColCombox->clear();
	ui->SecondColCombox->clear();
	ui->TertiaryColCombox->clear();

	ui->SecondColCombox->addItem(tr("none"));
	ui->TertiaryColCombox->addItem(tr("none"));
	ui->PremaryColCombox->setMinimumSize(ui->SecondColCombox->sizeHint());

	QChar ch = first;
	while (ch <= last)
	{
		ui->PremaryColCombox->addItem(QString(ch));
		ui->SecondColCombox->addItem(QString(ch));
		ui->TertiaryColCombox->addItem(QString(ch));
		ch = ch.unicode() + 1;
	}

}

