#ifndef COVE_ACCOUNT_H
#define COVE_ACCOUNT_H

#include <QWidget>

namespace Ui {
//class cove_account;
//class cove_login;
}

class cove_account : public QWidget
{
    Q_OBJECT

public:
    explicit cove_account(QWidget *parent = 0);
    ~cove_account();

private:
    Ui::cove_account *ui;
};

#endif // COVE_ACCOUNT_H
