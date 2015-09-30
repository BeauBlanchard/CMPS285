#include "cove_chat.h"
#include "ui_cove_chat.h"

cove_chat::cove_chat(QWidget *parent) : QDialog(parent), ui(new Ui::cove_chat)
{
    ui->setupUi(this);
}

cove_chat::~cove_chat()
{
    delete ui;
}
