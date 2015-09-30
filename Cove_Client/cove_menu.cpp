#include "cove_account.h"
#include "ui_cove_account.h"
#include "cove_login.h"
#include "ui_cove_login.h"
#include "cove_menu.h"
#include "ui_cove_menu.h"

cove_menu::cove_menu(QWidget *parent) : QWidget(parent), ui(new Ui::cove_menu)
{
    ui->setupUi(this);
}

cove_menu::~cove_menu()
{
    delete ui;
}
