#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QWidget>
#include "widget.h"

namespace Ui {
class MyButton;
}

class MyButton : public QWidget
{
    Q_OBJECT

public:
    explicit MyButton(QWidget *parent = 0);
    ~MyButton();

private slots:
    void slotGetNewText();

signals:
    void SnedNewText(QString);

private:
    Ui::MyButton *ui;
    Widget *myWidget;
};

#endif // MYBUTTON_H
