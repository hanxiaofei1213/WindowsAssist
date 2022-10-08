#pragma once

#include <QtWidgets/QDialog>
#include <QSystemTrayIcon>
#include <QMenu>
#include "ui_WindowsAssist.h"

class WindowsAssist : public QDialog {
    Q_OBJECT

public:
    WindowsAssist(QWidget* parent = Q_NULLPTR);

    // Todo(wangwenxi): ��ݴ�ָ���ļ�/��
    // Todo(wangwenxi): ������а幦��
    // Todo(wangwenxi): ��ɫ����

protected:
    void initUi();
    void initTrayMenu();

    virtual void showEvent(QShowEvent* event) override;
    virtual void closeEvent(QCloseEvent* event) override;

    void slotExitProgram();


private:
    Ui::WindowsAssistClass ui;
    QSystemTrayIcon m_systemTray;
    QMenu m_trayMenu;

};
