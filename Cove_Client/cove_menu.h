#ifndef COVE_MENU_H
#define COVE_MENU_H

#include <QWidget>
#include "cove_account.h"
#include "cove_login.h"

//class account;
//class login;

namespace Ui {
  class cove_menu;
}

class cove_menu : public QWidget
{
    Q_OBJECT

public:
    explicit cove_menu(QWidget *parent = 0);
    ~cove_menu();

private:
    Ui::cove_menu *ui;
};

#endif // COVE_MENU_H
