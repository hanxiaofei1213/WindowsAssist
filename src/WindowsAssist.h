#pragma once

#include <QtWidgets/QDialog>
#include <QSystemTrayIcon>
#include <QMenu>
#include "ui_WindowsAssist.h"

class WindowsAssist : public QDialog
{
    Q_OBJECT

public:
    WindowsAssist(QWidget *parent = Q_NULLPTR);


protected:
    void initUi();
    void initStyleSheet();

    virtual void showEvent(QShowEvent* event) override;

    void slotExitProgram();


private:
    Ui::WindowsAssistClass ui;
    QSystemTrayIcon m_systemTray;
    QMenu m_trayMenu;

};
