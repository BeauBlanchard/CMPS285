#ifndef COVE_CHAT_H
#define COVE_CHAT_H

#include <QDialog>

namespace Ui {
class cove_chat;
}

class cove_chat : public QDialog
{
    Q_OBJECT

public:
    explicit cove_chat(QWidget *parent = 0);
    ~cove_chat();

private:
    Ui::cove_chat *ui;
};

#endif // COVE_CHAT_H
