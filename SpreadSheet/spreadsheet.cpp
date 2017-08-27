#include "spreadsheet.h"
#include "ui_spreadsheet.h"

SpreadSheet::SpreadSheet(QWidget *parent)
	: QWidget(parent)
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

void SpreadSheet::Slot_currentCellChanged(int curRow, int curCol, int preRow, int preCol)
{
	emit currentCellChanged(curRow, curCol, preRow, preCol);
}

void SpreadSheet::Slot_modified()
{
	emit modified();
}

