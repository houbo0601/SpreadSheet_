#include "spreadsheet.h"
#include "ui_spreadsheet.h"

SpreadSheet::SpreadSheet(QWidget *parent)
	: QTableWidget(parent)
{
	ui = new Ui::SpreadSheet();
	ui->setupUi(this);

	connect(ui->tableWidget, SIGNAL(currentCellChanged(int, int, int, int)),
		this, SLOT(Slot_currentCellChanged(int, int, int, int)));
	connect(ui->tableWidget, SIGNAL(modified()), 
		this, SLOT(Slot_modified()));

}

SpreadSheet::~SpreadSheet()
{
	delete ui;
}

QString SpreadSheet::currentLocation()
{
	int iRow = this->currentRow();
	int iCol = this->currentColumn();

	return QString("%1, %2").arg(iRow).arg(iCol);
}

QString SpreadSheet::currentFormula()
{
	return QString("");

}

bool SpreadSheet::readFile(const QString &filename)
{
	return true;
}

void SpreadSheet::Slot_currentCellChanged(int curRow, int curCol, int preRow, int preCol)
{
	emit currentCellChanged(curRow, curCol, preRow, preCol);
}

void SpreadSheet::Slot_modified()
{
	emit modified();
}

