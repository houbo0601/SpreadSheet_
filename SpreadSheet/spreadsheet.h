#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <QWidget>
namespace Ui {class SpreadSheet;};

class SpreadSheet : public QWidget
{
	Q_OBJECT

public:
	SpreadSheet(QWidget *parent = 0);
	~SpreadSheet();

signals:
	void currentCellChanged(int currentRow, int currentColumn, 
		int previousRow, int previousColumn);
	void modified();

private slots:
	void Slot_currentCellChanged(int curRow, int curCol, int preRow, int preCol);
	void Slot_modified();

	

private:
	Ui::SpreadSheet *ui;
};

#endif // SPREADSHEET_H
