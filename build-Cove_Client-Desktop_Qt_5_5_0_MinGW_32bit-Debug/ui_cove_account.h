/********************************************************************************
** Form generated from reading UI file 'cove_account.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVE_ACCOUNT_H
#define UI_COVE_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cove_account
{
public:
    QLabel *label_Username;
    QLabel *label_Answer;
    QLabel *label_SecurityQuestion;
    QLabel *label_Password;
    QLabel *label_ConfirmPassword;
    QTextEdit *textEdit_Username;
    QTextEdit *textEdit_Password;
    QTextEdit *textEdit_ConfirmPassword;
    QTextEdit *textEdit_SecurityQuestion;
    QTextEdit *textEdit_Answer;
    QTextEdit *textEdit_Email;
    QLabel *label_Email;
    QTextEdit *textEdit_Country;
    QLabel *label_Country;
    QPushButton *pushButton_LogIn;
    QPushButton *pushButton_LogIn_2;

    void setupUi(QWidget *cove_account)
    {
        if (cove_account->objectName().isEmpty())
            cove_account->setObjectName(QStringLiteral("cove_account"));
        cove_account->resize(570, 750);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(58, 60, 83, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(87, 90, 124, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(72, 75, 103, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(29, 30, 41, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(38, 40, 55, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        cove_account->setPalette(palette);
        cove_account->setAutoFillBackground(true);
        label_Username = new QLabel(cove_account);
        label_Username->setObjectName(QStringLiteral("label_Username"));
        label_Username->setGeometry(QRect(100, 120, 91, 21));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_Username->setFont(font);
        label_Answer = new QLabel(cove_account);
        label_Answer->setObjectName(QStringLiteral("label_Answer"));
        label_Answer->setGeometry(QRect(100, 470, 91, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        label_Answer->setFont(font1);
        label_SecurityQuestion = new QLabel(cove_account);
        label_SecurityQuestion->setObjectName(QStringLiteral("label_SecurityQuestion"));
        label_SecurityQuestion->setGeometry(QRect(100, 410, 121, 21));
        label_SecurityQuestion->setFont(font1);
        label_Password = new QLabel(cove_account);
        label_Password->setObjectName(QStringLiteral("label_Password"));
        label_Password->setGeometry(QRect(100, 240, 91, 21));
        label_Password->setFont(font1);
        label_ConfirmPassword = new QLabel(cove_account);
        label_ConfirmPassword->setObjectName(QStringLiteral("label_ConfirmPassword"));
        label_ConfirmPassword->setGeometry(QRect(100, 300, 141, 21));
        label_ConfirmPassword->setFont(font1);
        textEdit_Username = new QTextEdit(cove_account);
        textEdit_Username->setObjectName(QStringLiteral("textEdit_Username"));
        textEdit_Username->setGeometry(QRect(100, 140, 391, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        textEdit_Username->setFont(font2);
        textEdit_Username->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Username->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Username->setUndoRedoEnabled(true);
        textEdit_Password = new QTextEdit(cove_account);
        textEdit_Password->setObjectName(QStringLiteral("textEdit_Password"));
        textEdit_Password->setGeometry(QRect(100, 260, 391, 31));
        textEdit_Password->setFont(font2);
        textEdit_Password->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Password->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Password->setUndoRedoEnabled(true);
        textEdit_ConfirmPassword = new QTextEdit(cove_account);
        textEdit_ConfirmPassword->setObjectName(QStringLiteral("textEdit_ConfirmPassword"));
        textEdit_ConfirmPassword->setGeometry(QRect(100, 320, 391, 31));
        textEdit_ConfirmPassword->setFont(font2);
        textEdit_ConfirmPassword->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_ConfirmPassword->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_ConfirmPassword->setUndoRedoEnabled(true);
        textEdit_SecurityQuestion = new QTextEdit(cove_account);
        textEdit_SecurityQuestion->setObjectName(QStringLiteral("textEdit_SecurityQuestion"));
        textEdit_SecurityQuestion->setGeometry(QRect(100, 430, 391, 31));
        textEdit_SecurityQuestion->setFont(font2);
        textEdit_SecurityQuestion->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_SecurityQuestion->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_SecurityQuestion->setUndoRedoEnabled(true);
        textEdit_Answer = new QTextEdit(cove_account);
        textEdit_Answer->setObjectName(QStringLiteral("textEdit_Answer"));
        textEdit_Answer->setGeometry(QRect(100, 490, 391, 31));
        textEdit_Answer->setFont(font2);
        textEdit_Answer->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Answer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Answer->setUndoRedoEnabled(true);
        textEdit_Email = new QTextEdit(cove_account);
        textEdit_Email->setObjectName(QStringLiteral("textEdit_Email"));
        textEdit_Email->setGeometry(QRect(100, 200, 391, 31));
        textEdit_Email->setFont(font2);
        textEdit_Email->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Email->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Email->setUndoRedoEnabled(true);
        label_Email = new QLabel(cove_account);
        label_Email->setObjectName(QStringLiteral("label_Email"));
        label_Email->setGeometry(QRect(100, 180, 61, 21));
        label_Email->setFont(font);
        textEdit_Country = new QTextEdit(cove_account);
        textEdit_Country->setObjectName(QStringLiteral("textEdit_Country"));
        textEdit_Country->setGeometry(QRect(100, 80, 391, 31));
        textEdit_Country->setFont(font2);
        textEdit_Country->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Country->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Country->setUndoRedoEnabled(true);
        label_Country = new QLabel(cove_account);
        label_Country->setObjectName(QStringLiteral("label_Country"));
        label_Country->setGeometry(QRect(100, 60, 61, 16));
        label_Country->setFont(font);
        pushButton_LogIn = new QPushButton(cove_account);
        pushButton_LogIn->setObjectName(QStringLiteral("pushButton_LogIn"));
        pushButton_LogIn->setGeometry(QRect(200, 550, 161, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush8(QColor(170, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush9(QColor(213, 127, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush9);
        QBrush brush10(QColor(191, 63, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        QBrush brush11(QColor(85, 0, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(113, 0, 170, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush13(QColor(212, 127, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_LogIn->setPalette(palette1);
        pushButton_LogIn->setFont(font1);
        pushButton_LogIn->setAutoFillBackground(false);
        pushButton_LogIn->setStyleSheet(QStringLiteral(""));
        pushButton_LogIn_2 = new QPushButton(cove_account);
        pushButton_LogIn_2->setObjectName(QStringLiteral("pushButton_LogIn_2"));
        pushButton_LogIn_2->setGeometry(QRect(200, 600, 161, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_LogIn_2->setPalette(palette2);
        pushButton_LogIn_2->setFont(font1);
        pushButton_LogIn_2->setAutoFillBackground(false);
        pushButton_LogIn_2->setStyleSheet(QStringLiteral(""));

        retranslateUi(cove_account);

        QMetaObject::connectSlotsByName(cove_account);
    } // setupUi

    void retranslateUi(QWidget *cove_account)
    {
        cove_account->setWindowTitle(QApplication::translate("cove_account", "Form", 0));
        label_Username->setText(QApplication::translate("cove_account", "Username:", 0));
        label_Answer->setText(QApplication::translate("cove_account", "Answer:", 0));
        label_SecurityQuestion->setText(QApplication::translate("cove_account", "Security Question:", 0));
        label_Password->setText(QApplication::translate("cove_account", "Password:", 0));
        label_ConfirmPassword->setText(QApplication::translate("cove_account", "Confirm Password:", 0));
        label_Email->setText(QApplication::translate("cove_account", "Email:", 0));
        label_Country->setText(QApplication::translate("cove_account", "Country:", 0));
        pushButton_LogIn->setText(QApplication::translate("cove_account", "Create Account", 0));
        pushButton_LogIn_2->setText(QApplication::translate("cove_account", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class cove_account: public Ui_cove_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVE_ACCOUNT_H
