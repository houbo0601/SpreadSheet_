#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <qlabel.h>
#include "ui_MainWindow.h"
#include "finddialog.h"
#include "sortdialog.h"
#include "CellLocation.h"
#include "spreadsheet.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	static MainWindow* GetInstance()
	{
		if (pInstance == NULL)
		{
			pInstance = new MainWindow;
		}
		return pInstance;
	}
	~MainWindow();

protected:
	void closeEvent(QCloseEvent *event);

private:
	static MainWindow *pInstance;
	MainWindow(QWidget *parent = 0);
	Ui::MainWindow *ui;
	FindDialog *m_findDialog;
	SortDialog *m_sortDialog;
	SpreadSheet *m_spreadSheet;
	CellLocation *m_cellLocationDialog;
	SpreadSheet *m_SpreadSheet;

	enum { MaxRecentFile = 5 };
	QAction *recentFileAction[MaxRecentFile];
	QAction *separatorAction;

	QAction *newAction;
	QAction *cutAction;
	QAction *exitAction;
	QAction *selecAllAction;
	QAction *showGridAction;
	QAction *aboutAction;
	QAction *findAction;
	QAction *sortAction;
	QAction *goToCellAction;

	void createAction();
	void createMenu();
	void createContextMenu();
	void createToolBar();
	void createStatusBar();
	void readSettings();
	void writeSettings();
	bool okToContinue();
	bool loadFile(const QString &fileName);
	bool saveFile(const QString &fileName);
	void setCurrentFile(const QString &fileName);
	void updateRecentFileActions();
	QString strippedName(const QString &fileName);

	QMenu *fileMenu;
	QMenu *editMenu;
	QMenu *SelectMenu;
	QMenu *toolsMenu;
	QMenu *optionsMenu;
	QMenu *aboutMenu;

	QToolBar *fileToolBar;
	QToolBar *editToolBar;
	
	QLabel *locationLabel;
	QLabel *formulaLabel;
	

private slots:
	void newFile();
	void open();
	bool save();
	bool saveAs();
	void find();
	void goToCell();
	void sort();
	void about();
	void openRcentFile();
	void updateStateBar();
	void spreadSheelModified();

};

#endif // MAINWINDOW_H
