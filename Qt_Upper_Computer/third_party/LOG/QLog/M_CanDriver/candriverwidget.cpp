#include "candriverwidget.h"
#include "ui_candriverwidget.h"

CANDriverWidget::CANDriverWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CANDriverWidget)
{
    ui->setupUi(this);
}

CANDriverWidget::~CANDriverWidget()
{
    delete ui;
}

