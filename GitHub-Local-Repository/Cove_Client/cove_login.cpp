#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_account.h"
#include "ui_cove_account.h"
#include "cove_login.h"
#include "ui_cove_login.h"


cove_login::cove_login(QWidget *parent) : QMainWindow(parent), ui(new Ui::cove_login)
{
    ui->setupUi(this);
}

cove_login::~cove_login()
{
    delete ui;
}

//cove_login::cove_login()
//{
//  // ...
//   connect(logInButton, SIGNAL(click()), this, SLOT(on_logInButton_clicked());
//  // ...
//}

void cove_login::on_pushButton_LogIn_clicked()
{
    //modal approach
    //Cove_Menu cove_menu;
    //cove_menu.setModal(true);
    //cove_menu.exec();

    //modeless approach
    CoveMenu = new cove_menu(this);
    CoveMenu->show();
 }



//cove_login::cove_login()
//{
//   // ...
//   connect(createAccountButton, SIGNAL(click()), this, SLOT(on_createAccountButton_clicked());
//   // ...
//}

void cove_login::on_pushButton_CreateAccount_clicked()
{
    CoveAccount = new cove_account(this);
    CoveAccount->show();
}


