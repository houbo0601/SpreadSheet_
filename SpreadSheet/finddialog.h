#pragma once
#include <QtGui>
#include <qdialog.h>
#include <qstring.h>

class QPushButton;
class QLineEdit;
class QLabel;
class QCheckBox;
class QPushButton;

class FindDialog : public QDialog {
	Q_OBJECT

public:
	FindDialog(QWidget * parent = Q_NULLPTR);
	~FindDialog();

signals:
	void findNext(const QString &str, Qt::CaseSensitivity cs);
	void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
	void findClicked();
	void enablefindButton(const QString &strText);

private:
	QLabel *label;
	QLineEdit *lineEdit;
	QCheckBox *caseCheckBox;
	QCheckBox *backwardCheckBox;
	QPushButton *findButton; 
	QPushButton *closeButton;
};
