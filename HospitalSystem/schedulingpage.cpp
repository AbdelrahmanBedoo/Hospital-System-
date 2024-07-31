#include "schedulingpage.h"
#include "ui_schedulingpage.h"

SchedulingPage::SchedulingPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SchedulingPage)
{
    ui->setupUi(this);
}

SchedulingPage::~SchedulingPage()
{
    delete ui;
}
