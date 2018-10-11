#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

QString SB;

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);

    connect(pushButton,&QPushButton::clicked,this,&Widget::ShowText);
    connect(this,&Widget::SignalUpdateText,this,&Widget::SetText);
}

Widget::~Widget()
{
}

void Widget::SetText(QString str)
{
    qDebug()<<"Button :::";
    lineEdit->setText(SB);
    textEdit->setPlainText(SB);
    qDebug()<<"ui->lineEdit = "<<lineEdit->text();
    qDebug()<<"ui->textEdit = "<<textEdit->toPlainText();
}

void Widget::ShowText()
{
    lineEdit->setText(SB);
    textEdit->setPlainText(SB);
    qDebug()<<"ui->lineEdit = "<<lineEdit->text();
    qDebug()<<"ui->textEdit = "<<textEdit->toPlainText();
    qDebug()<<"SB = "<<SB;
}

void Widget::slotUpdate(QString str)
{
    SB=str;
    //    SetText(str);
    emit SignalUpdateText(str);

    pushButton->click();

    //    ui->lineEdit->setText(m_Str);
    //    ui->textEdit->setPlainText(m_Str);

    qDebug()<<"ui->lineEdit = "<<lineEdit->text();
    qDebug()<<"ui->textEdit = "<<textEdit->toPlainText();
}
