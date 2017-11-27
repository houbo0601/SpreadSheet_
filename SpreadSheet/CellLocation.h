#pragma once
#include "qdialog.h"
#include "ui_CellLocation.h"
class CellLocation :
	public QDialog
{
	Q_OBJECT
public:
	CellLocation(QWidget *parent = 0);
	~CellLocation();

private:
	Ui::CellLocation *ui;

private slots:
	void accept();
	void reject();
	void on_lineEdit_textChanged();
};

	