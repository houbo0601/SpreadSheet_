#include <QtGui>
#include "CellLocation.h"



CellLocation::CellLocation(QWidget *parent)
	:QDialog(parent),
	ui(new Ui::CellLocation)
{
	ui->setupUi(this);

	QRegExp regExp("[A-Za_z][1-9][0-9]{0-2}");
	ui->lineEdit->setValidator(new QRegExpValidator(regExp));

	connect(ui->okButton, SIGNAL(clicked()), this, SLOT(accept()));
	connect(ui->cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
	connect(ui->lineEdit, SIGNAL(textChanged(const Qstring &)), this, SLOT(on_lineEdit_textChanged()));

}


CellLocation::~CellLocation()
{
}

void CellLocation::accept()
{

}

void CellLocation::reject()
{
	this->close();
}

void CellLocation::on_lineEdit_textChanged()
{
}
