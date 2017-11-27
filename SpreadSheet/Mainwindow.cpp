#include "MainWindow.h"
#include <QPushButton>
#include<QMessageBox>
#include<QFileDialog>
#include "finddialog.h"
#include "sortdialog.h"

//#define ResourcePath :/ SpreadSheet / Resources /

MainWindow *MainWindow::pInstance = NULL;
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	QWidget::setWindowIcon(QIcon(":/SpreadSheet/Resources/image/SpreadSheet.PNG"));

	InitDialog();

	createAction();
	createMenu();

	m_spreadSheet = new SpreadSheet();
	setCentralWidget(m_spreadSheet);
}

MainWindow::~MainWindow()
{
}

void MainWindow::InitDialog()
{
	m_sortDialog = NULL;
	m_findDialog = NULL;
	m_SpreadSheet = NULL;

}

void MainWindow::createAction()
{
	//新建操作
	newAction = new QAction(tr("&New"), this);
	newAction->setShortcut(QKeySequence::New);
	//newAction->setIcon(QIcon(":/images/new.png"));
	newAction->setIcon(QIcon(":/SpreadSheet/Resources/image/new.PNG"));
	newAction->setStatusTip(tr("Create a new spreadsheet file"));
	connect(newAction, SIGNAL(triggered()), this, SLOT(newFile()));
	for (int i = 0; i < MaxRecentFile; i++)
	{
		recentFileAction[i] = new QAction(this);
		recentFileAction[i]->setVisible(false);
		connect(recentFileAction[i], SIGNAL(triggered()), this, SLOT(openRcentFile()));
	}
	//退出操作
	exitAction = new QAction(tr("E&xit"), this);
	exitAction->setShortcut(tr("Ctrl+Q"));
	exitAction->setStatusTip("Exit the application");
	connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));

	//全选操作
	selecAllAction = new QAction(tr("&All"), this);
	selecAllAction->setShortcut(QKeySequence::SelectAll);
	selecAllAction->setStatusTip("Select all the cells in the spreadSheet");
	connect(selecAllAction, SIGNAL(triggered()), this, SLOT(selectAll()));

	//显示网格操作
	showGridAction = new QAction(tr("&Show Grid"), this);
	showGridAction->setCheckable(true);

	//查找操作
	findAction = new QAction(tr("&Find"), this);
	findAction->setStatusTip("Find words in box");
	connect(findAction, SIGNAL(triggered()), this, SLOT(find()));

	//定位操作
	goToCellAction = new QAction(tr("&GoToCell"), this);
	connect(goToCellAction, SIGNAL(triggered()), this, SLOT(goToCell()));

	//排序操作
	sortAction = new QAction(tr("&Sort"), this);
	connect(sortAction, SIGNAL(triggered()), this, SLOT(sort()));

	//关于操作
	aboutAction = new QAction(tr("About &Qt"), this);
	aboutAction->setStatusTip("show the Qt library's About box");
	connect(aboutAction, SIGNAL(triggered()), this, SLOT(aboutQt()));
}


void MainWindow::createMenu()
{
	//添加文件菜单栏
	fileMenu = menuBar()->addMenu(tr("&File"));
	fileMenu->addAction(newAction);
	separatorAction = fileMenu->addSeparator();
	for (int i = 0; i < MaxRecentFile; i++)
	{
		fileMenu->addAction(recentFileAction[i]);
	}
	fileMenu->addSeparator();
	fileMenu->addAction(exitAction);

	//添加编辑菜单栏
	editMenu = menuBar()->addMenu(tr("&Edit"));
	SelectMenu = editMenu->addMenu(tr("&Select"));
	editMenu->addSeparator();
	editMenu->addAction(findAction);
	editMenu->addAction(goToCellAction);

	//添加工具栏
	toolsMenu = menuBar()->addMenu(tr("&Tools"));
	toolsMenu->addAction(sortAction);

	//添加选项栏
	optionsMenu = menuBar()->addMenu(tr("&Options"));
	optionsMenu->addAction(sortAction);
	optionsMenu->addAction(showGridAction);

	menuBar()->addSeparator();
	//关于工具栏
	aboutMenu = menuBar()->addMenu(tr("&About"));
	aboutMenu->addAction(aboutAction);
	
}

void MainWindow::closeEvent(QCloseEvent *event)
{
	if (okToContinue())
	{
		writeSettings();
		event->accept();
	}
	else
	{
		event->ignore();
	}

}

void MainWindow::newFile()
{
	if (okToContinue())
	{
		m_spreadSheet->clear();
		setCurrentFile("");
	}

}

void MainWindow::open()
{
	if (okToContinue())
	{
		QString filename = QFileDialog::getOpenFileName(this, tr("Open SpreadSheet"),
			".", tr("SpreadSheet File (*. sp)\n"
				"Comma-separated values files (*.cvs)\n"
				"Lotus 1-2-3 files (*.wk1 *.wks)"));
		if (!filename.isEmpty())
		{
			loadFile(filename);
		}
	}
}

bool MainWindow::save()
{
	if (!curFile.isEmpty())
	{
		return saveAs();
	}
	else
	{
		return saveFile(curFile);
	}
	
}

bool MainWindow::saveAs()
{
	QString filename = QFileDialog::getSaveFileName(this, tr("Save Spreadsheet"),  
		".",  tr("Spreadsheet files (*.sp)"));

	if (filename.isEmpty())
	{
		return false;
	}

	return saveFile(filename);
}

void MainWindow::find()
{
	if (!m_findDialog)
	{
		m_findDialog = new FindDialog(this);

		connect(m_findDialog, SIGNAL(findNext(const Qstring &, Qt::CaseSensitive)), 
			m_SpreadSheet, SLOT(findNext(const Qstring &, Qt::CaseSensitive)));
		connect(m_findDialog, SIGNAL(findPrevious(const Qstring &, Qt::CaseSensitive)),
			m_spreadSheet, SLOT(findPrevious(const Qstring &, Qt::CaseSensitive)));
	}

	m_findDialog->show();
	m_findDialog->raise();
	m_findDialog->isActiveWindow();
}

void MainWindow::goToCell()
{
	m_cellLocationDialog->show();
}

void MainWindow::sort()
{
	if (!m_sortDialog)
	{
		m_sortDialog = new SortDialog(this);
	}
	m_sortDialog->setColumnRange('C', 'F');
	m_sortDialog->show();
}

void MainWindow::about()
{
}

void MainWindow::updateStateBar()
{
	locationLabel->setText(m_spreadSheet->currentLocation());
	formulaLabel->setText(m_spreadSheet->currentFormula());
}

void MainWindow::spreadSheelModified()
{
}

void MainWindow::openRcentFile()
{
	if (okToContinue())
	{
		QAction *action = qobject_cast<QAction *>(sender());
		if (action)
		{
			loadFile(action->data().toString());
		}
	}
}

void MainWindow::createToolBar()
{
	fileToolBar = addToolBar(tr("&File"));
	fileToolBar->addAction(newAction);
	
	editToolBar = addToolBar(tr("&Edit"));
	editToolBar->addAction(cutAction);
	editToolBar->addSeparator();
	editToolBar->addAction(findAction);
	editToolBar->addAction(goToCellAction);
}

void MainWindow::createStatusBar()
{
	locationLabel = new QLabel("W999");
	locationLabel->setAlignment(Qt::AlignHCenter);
	locationLabel->setMaximumSize(locationLabel->sizeHint());

	formulaLabel = new QLabel();
	formulaLabel->setIndent(3);

	statusBar()->addWidget(locationLabel);
	statusBar()->addWidget(formulaLabel, 1);

	connect(m_spreadSheet, SIGNAL(currentCellChanged(int, int, int, int)), 
		this, SLOT(updateStateBar()));
	connect(m_spreadSheet, SIGNAL(modified()), 
		this, SLOT(spreadSheelModified()));
	updateStateBar();
}

void MainWindow::writeSettings()
{

}

bool MainWindow::okToContinue()
{
	if (isWindwoModified())
	{
		int r = QMessageBox::warning(this, tr("Sp	readSheet"), tr("The Doc is modified.\n"
			"Do you want to save your changes?"), QMessageBox::Yes | QMessageBox::No 
			| QMessageBox::Cancel);
		if (r == QMessageBox::Yes)
		{
			return save();
		}
		else if (r == QMessageBox::Cancel)
		{
			return false;
		}
	}

	return true;

}

bool MainWindow::isWindwoModified()
{
	return true;
}

bool MainWindow::loadFile(const QString &fileName)
{
	if (!m_spreadSheet->readFile(fileName))
	{
		statusBar()->showMessage(tr("Loading Cancle"), 2000);
		return false;
	}

	setCurrentFile(fileName);
	statusBar()->showMessage(tr("File Loaded"));
	return true;

}

bool MainWindow::saveFile(const QString &fileName)
{
	if (!m_spreadSheet->writeFile(fileName))
	{
		statusBar()->showMessage(tr("Saving canceled"), 2000);
		return false;
	}

	setCurrentFile(fileName);
	statusBar()->showMessage(tr("File Saved"), 2000);
	return true;

}

void MainWindow::setCurrentFile(const QString &fileName)
{
	curFile = fileName;
	setWindowModified(false);

	QString showName = tr("Untitled");
	if (!curFile.isEmpty())
	{
		showName = strippedName(curFile);
		recentFiles.removeAll(curFile);
		recentFiles.prepend(curFile);
	}

	setWindowTitle(tr("%1[*] - %2").arg(showName).arg(tr("Spreadsheet")));

}

void MainWindow::updateRecentFileActions()
{
	QMutableStringListIterator i(recentFiles);
	while (i.hasNext())
	{
		if (!QFile::exists(i.next()))
		{
			i.remove();
		}
	}
	for (int i = 0; i < MaxRecentFile; i++)
	{
		if (i < recentFiles.count())
		{
			QString text = tr("&%1 %2")
				.arg(i + 1).arg(strippedName(recentFiles[i]));
			recentFileAction[i]->setText(text);
			recentFileAction[i]->setData(recentFiles[i]);
			recentFileAction[i]->setVisible(true);
		}
		else
		{
			recentFileAction[i]->setVisible(false);
		}
	}

	separatorAction->setVisible(!recentFiles.isEmpty());

}

QString MainWindow::strippedName(const QString &fileName)
{
	return QFileInfo(fileName).fileName();
}
