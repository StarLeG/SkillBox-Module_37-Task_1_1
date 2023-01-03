#include "calculator.h"
#include "./ui_calculator.h"

Calculator::Calculator(QWidget *parent)
		: QMainWindow(parent)
		, ui(new Ui::Calculator)
{
	ui->setupUi(this);

}

Calculator::~Calculator()
{
	delete ui;
}

void Calculator::add_plus()
{
	m_op_1 = ui->op_1->text().toInt();
	m_op_2 = ui->op_2->text().toInt();
	m_res = m_op_1 + m_op_2;
	ui->op_1->setText(QString::number(m_op_1) + "+" + QString::number(m_op_2) + "=");
	ui->op_2->setText(QString::number(m_res));
}

void Calculator::add_minus()
{
	m_op_1 = ui->op_1->text().toInt();
	m_op_2 = ui->op_2->text().toInt();
	m_res = m_op_1 - m_op_2;
	ui->op_1->setText(QString::number(m_op_1) + "-" + QString::number(m_op_2) + "=");
	ui->op_2->setText(QString::number(m_res));

}

void Calculator::add_mul()
{
	m_op_1 = ui->op_1->text().toInt();
	m_op_2 = ui->op_2->text().toInt();
	m_res = m_op_1 * m_op_2;
	ui->op_1->setText(QString::number(m_op_1) + "*" + QString::number(m_op_2) + "=");
	ui->op_2->setText(QString::number(m_res));

}

void Calculator::add_div()
{
	m_op_1 = ui->op_1->text().toInt();
	m_op_2 = ui->op_2->text().toInt();

	if(m_op_2 != 0)
	{
		m_res = m_op_1 / m_op_2;
		ui->op_1->setText(QString::number(m_op_1) + "/" + QString::number(m_op_2) + "=");
		ui->op_2->setText(QString::number(m_res));
	}
	else
	{
		ui->op_1->setText("");
		ui->op_2->setText("ERROR");
	}

}

void Calculator::add_ce()
{
	ui->op_1->setText("");
	ui->op_2->setText("");
}