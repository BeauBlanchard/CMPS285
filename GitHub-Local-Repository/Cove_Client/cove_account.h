#ifndef COVE_ACCOUNT_H
#define COVE_ACCOUNT_H

#include <QWidget>
#include "cove_menu.h"
#include "cove_login.h"

//class cove_menu;
//class cove_login;

namespace Ui {
  class cove_account;
}

class cove_account : public QWidget
{
    Q_OBJECT

public:
    explicit cove_account(QWidget *parent = 0);
                                //*cove_login
    ~cove_account();

private slots:

    //void on_pushButton_CreateAccount2_clicked();

    //void on_pushButton_Back_clicked();

private:
    Ui::cove_account *ui;
    //cove_menu *CoveMenu;
    //cove_login *CoveLogin;
};

#endif // COVE_ACCOUNT_H
