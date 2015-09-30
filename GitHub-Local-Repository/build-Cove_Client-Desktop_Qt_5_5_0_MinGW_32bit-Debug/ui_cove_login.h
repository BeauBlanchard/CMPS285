/********************************************************************************
** Form generated from reading UI file 'cove_login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVE_LOGIN_H
#define UI_COVE_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cove_login
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_LogIn;
    QLabel *label_Password;
    QTextEdit *textEdit_Password;
    QTextEdit *textEdit_Account;
    QLabel *label__Account;
    QLabel *label_Cove;
    QPushButton *pushButton_CreateAccount;
    QGraphicsView *graphicsView_Logo;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cove_login)
    {
        if (cove_login->objectName().isEmpty())
            cove_login->setObjectName(QStringLiteral("cove_login"));
        cove_login->resize(570, 750);
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
        cove_login->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        cove_login->setFont(font);
        cove_login->setMouseTracking(false);
        centralWidget = new QWidget(cove_login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_LogIn = new QPushButton(centralWidget);
        pushButton_LogIn->setObjectName(QStringLiteral("pushButton_LogIn"));
        pushButton_LogIn->setGeometry(QRect(210, 380, 161, 41));
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
        QFont font1;
        font1.setPointSize(10);
        pushButton_LogIn->setFont(font1);
        pushButton_LogIn->setAutoFillBackground(false);
        pushButton_LogIn->setStyleSheet(QStringLiteral(""));
        label_Password = new QLabel(centralWidget);
        label_Password->setObjectName(QStringLiteral("label_Password"));
        label_Password->setGeometry(QRect(150, 280, 101, 51));
        QFont font2;
        font2.setPointSize(12);
        label_Password->setFont(font2);
        textEdit_Password = new QTextEdit(centralWidget);
        textEdit_Password->setObjectName(QStringLiteral("textEdit_Password"));
        textEdit_Password->setGeometry(QRect(150, 320, 271, 31));
        textEdit_Password->setFont(font2);
        textEdit_Password->setFrameShape(QFrame::StyledPanel);
        textEdit_Password->setFrameShadow(QFrame::Sunken);
        textEdit_Password->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Password->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Password->setTabChangesFocus(true);
        textEdit_Password->setReadOnly(false);
        textEdit_Password->setOverwriteMode(false);
        textEdit_Account = new QTextEdit(centralWidget);
        textEdit_Account->setObjectName(QStringLiteral("textEdit_Account"));
        textEdit_Account->setGeometry(QRect(150, 250, 271, 31));
        textEdit_Account->setFont(font2);
        textEdit_Account->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Account->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Account->setTabChangesFocus(true);
        textEdit_Account->setUndoRedoEnabled(true);
        textEdit_Account->setLineWrapMode(QTextEdit::WidgetWidth);
        label__Account = new QLabel(centralWidget);
        label__Account->setObjectName(QStringLiteral("label__Account"));
        label__Account->setGeometry(QRect(150, 220, 101, 31));
        label__Account->setFont(font2);
        label_Cove = new QLabel(centralWidget);
        label_Cove->setObjectName(QStringLiteral("label_Cove"));
        label_Cove->setGeometry(QRect(230, 30, 91, 51));
        QFont font3;
        font3.setPointSize(28);
        font3.setBold(true);
        font3.setWeight(75);
        label_Cove->setFont(font3);
        label_Cove->setLayoutDirection(Qt::LeftToRight);
        label_Cove->setFrameShape(QFrame::NoFrame);
        pushButton_CreateAccount = new QPushButton(centralWidget);
        pushButton_CreateAccount->setObjectName(QStringLiteral("pushButton_CreateAccount"));
        pushButton_CreateAccount->setGeometry(QRect(210, 430, 161, 41));
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
        pushButton_CreateAccount->setPalette(palette2);
        pushButton_CreateAccount->setFont(font1);
        pushButton_CreateAccount->setAutoFillBackground(false);
        graphicsView_Logo = new QGraphicsView(centralWidget);
        graphicsView_Logo->setObjectName(QStringLiteral("graphicsView_Logo"));
        graphicsView_Logo->setGeometry(QRect(230, 100, 101, 101));
        graphicsView_Logo->setAcceptDrops(false);
        graphicsView_Logo->setAutoFillBackground(false);
        graphicsView_Logo->setInteractive(false);
        cove_login->setCentralWidget(centralWidget);
        label_Password->raise();
        textEdit_Password->raise();
        textEdit_Account->raise();
        label__Account->raise();
        label_Cove->raise();
        graphicsView_Logo->raise();
        pushButton_CreateAccount->raise();
        pushButton_LogIn->raise();
        statusBar = new QStatusBar(cove_login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        cove_login->setStatusBar(statusBar);
        QWidget::setTabOrder(textEdit_Account, textEdit_Password);
        QWidget::setTabOrder(textEdit_Password, pushButton_LogIn);
        QWidget::setTabOrder(pushButton_LogIn, pushButton_CreateAccount);
        QWidget::setTabOrder(pushButton_CreateAccount, graphicsView_Logo);

        retranslateUi(cove_login);

        QMetaObject::connectSlotsByName(cove_login);
    } // setupUi

    void retranslateUi(QMainWindow *cove_login)
    {
        cove_login->setWindowTitle(QApplication::translate("cove_login", "Cove Client", 0));
        pushButton_LogIn->setText(QApplication::translate("cove_login", "Login", 0));
        label_Password->setText(QApplication::translate("cove_login", "Password:", 0));
        label__Account->setText(QApplication::translate("cove_login", "Account:", 0));
        label_Cove->setText(QApplication::translate("cove_login", "Cove", 0));
        pushButton_CreateAccount->setText(QApplication::translate("cove_login", "Create Account", 0));
    } // retranslateUi

};

namespace Ui {
    class cove_login: public Ui_cove_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVE_LOGIN_H
