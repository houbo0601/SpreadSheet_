#include "MainWindow.h"
#include <QPushButton>
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
	createAction();
	createMenu();

	connect(ui->findButton, SIGNAL(clicked()), this, SLOT(find()));
	connect(ui->sortButton, SIGNAL(clicked()), this, SLOT(sort()));
	
	m_findDialog = new FindDialog();
	m_sortDialog = new SortDialog();
	m_cellLocationDialog = new CellLocation();

}

MainWindow::~MainWindow()
{
}

void MainWindow::createAction()
{
	//�½�����
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
	//�˳�����
	exitAction = new QAction(tr("E&xit"), this);
	exitAction->setShortcut(tr("Ctrl+Q"));
	exitAction->setStatusTip("Exit the application");
	connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));

	//ȫѡ����
	selecAllAction = new QAction(tr("&All"), this);
	selecAllAction->setShortcut(QKeySequence::SelectAll);
	selecAllAction->setStatusTip("Select all the cells in the spreadSheet");
	connect(selecAllAction, SIGNAL(triggered()), this, SLOT(selectAll()));

	//��ʾ�������
	showGridAction = new QAction(tr("&Show Grid"), this);
	showGridAction->setCheckable(true);

	//���Ҳ���
	findAction = new QAction(tr("&Find"), this);
	findAction->setStatusTip("Find words in box");
	connect(findAction, SIGNAL(triggered()), this, SLOT(find()));

	//��λ����
	goToCellAction = new QAction(tr("&GoToCell"), this);
	connect(goToCellAction, SIGNAL(triggered()), this, SLOT(goToCell()));

	//�������
	sortAction = new QAction(tr("&Sort"), this);
	connect(sortAction, SIGNAL(triggered()), this, SLOT(sort()));

	//���ڲ���
	aboutAction = new QAction(tr("About &Qt"), this);
	aboutAction->setStatusTip("show the Qt library's About box");
	connect(aboutAction, SIGNAL(triggered()), this, SLOT(aboutQt()));
}


void MainWindow::createMenu()
{
	//����ļ��˵���
	fileMenu = menuBar()->addMenu(tr("&File"));
	fileMenu->addAction(newAction);
	separatorAction = fileMenu->addSeparator();
	for (int i = 0; i < MaxRecentFile; i++)
	{
		fileMenu->addAction(recentFileAction[i]);
	}
	fileMenu->addSeparator();
	fileMenu->addAction(exitAction);

	//��ӱ༭�˵���
	editMenu = menuBar()->addMenu(tr("&Edit"));
	SelectMenu = editMenu->addMenu(tr("&Select"));
	editMenu->addSeparator();
	editMenu->addAction(findAction);
	editMenu->addAction(goToCellAction);

	//��ӹ�����
	toolsMenu = menuBar()->addMenu(tr("&Tools"));
	toolsMenu->addAction(sortAction);

	//���ѡ����
	optionsMenu = menuBar()->addMenu(tr("&Options"));
	optionsMenu->addAction(sortAction);
	optionsMenu->addAction(showGridAction);

	menuBar()->addSeparator();
	//���ڹ�����
	aboutMenu = menuBar()->addMenu(tr("&About"));
	aboutMenu->addAction(aboutAction);
	
}

void MainWindow::closeEvent(QCloseEvent *event)
{

}

void MainWindow::newFile()
{

}

void MainWindow::open()
{
}

bool MainWindow::save()
{
	return false;
}

bool MainWindow::saveAs()
{
	return false;
}

void MainWindow::find()
{
	m_findDialog->show();
}

void MainWindow::goToCell()
{
	m_cellLocationDialog->show();
}

void MainWindow::sort()
{
	m_sortDialog->setColumnRange('C', 'F');
	m_sortDialog->show();
}

void MainWindow::about()
{
}

void MainWindow::updateStateBar()
{
}

void MainWindow::spreadSheelModified()
{
}

void MainWindow::openRcentFile()
{
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
