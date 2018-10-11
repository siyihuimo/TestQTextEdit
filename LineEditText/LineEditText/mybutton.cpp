#include "mybutton.h"
#include "ui_mybutton.h"

MyButton::MyButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyButton)
{
    ui->setupUi(this);

    myWidget = new Widget;
    connect(ui->pushButton,&QPushButton::clicked,this,&MyButton::slotGetNewText);
    connect(this,&MyButton::SnedNewText,myWidget,&Widget::slotUpdate);
}

MyButton::~MyButton()
{
    delete ui;
}

void MyButton::slotGetNewText()
{
    emit SnedNewText(ui->lineEdit->text());
}
