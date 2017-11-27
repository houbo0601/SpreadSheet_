#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <QWidget>
#include <QTableWidget>
#include<QString>

namespace Ui {class SpreadSheet;};

class SpreadSheet : public QTableWidget
{
	Q_OBJECT

public:
	SpreadSheet(QWidget *parent = 0);
	~SpreadSheet();

	QString currentLocation();
	QString currentFormula();

	bool readFile(const QString &filename);
	bool writeFile(const QString &filename);

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
