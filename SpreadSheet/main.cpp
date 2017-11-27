#include <QtWidgets/QApplication>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	MainWindow *w = MainWindow::GetInstance();
	w->show();

	return a.exec();
}
