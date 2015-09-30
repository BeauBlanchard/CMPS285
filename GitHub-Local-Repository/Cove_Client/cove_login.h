#ifndef COVE_LOGIN_H
#define COVE_LOGIN_H

#include <QMainWindow>
//#include "cove_menu.h"
//#include "cove_account.h"

class cove_menu;
class cove_account;

namespace Ui {
  class cove_login;
}

class cove_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit cove_login(QWidget *parent = 0);
    ~cove_login();

private slots:
    void on_pushButton_LogIn_clicked();

    void on_pushButton_CreateAccount_clicked();

private:
    Ui::cove_login *ui;
    cove_menu *CoveMenu;
    cove_account *CoveAccount;
};

#endif // COVE_LOGIN_H
