#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QDebug>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
Q_OBJECT

public:
	Calculator(QWidget *parent = nullptr);
	~Calculator();


private:
	Ui::Calculator *ui;
	int m_op_1 = 0;
	int m_op_2 = 0;
	int m_res = 0;

public slots:
	void add_plus();
	void add_minus();
	void add_mul();
	void add_div();
	void add_ce();
};
#endif // CALCULATOR_H