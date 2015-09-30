#include "cove_account.h"
#include "ui_cove_account.h"

cove_account::cove_account(QWidget *parent) : QWidget(parent), ui(new Ui::cove_account)
{
    ui->setupUi(this);
}

cove_account::~cove_account()
{
    delete ui;
}
