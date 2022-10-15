#pragma once

#include <QtWidgets/QDialog>
#include <QSystemTrayIcon>
#include <QMenu>
#include "ui_WindowsAssist.h"

class WindowsAssist : public QDialog {
    Q_OBJECT

public:
    static WindowsAssist* self();

    // Todo(wangwenxi): 快捷打开指定文件/夹
    // Todo(wangwenxi): 处理剪切板功能
    // Todo(wangwenxi): 颜色处理

protected:
    WindowsAssist(QWidget* parent = Q_NULLPTR);
    ~WindowsAssist();

    void initUi();
    void initConnect();
    void initTrayMenu();

    virtual void showEvent(QShowEvent* event) override;
    virtual void closeEvent(QCloseEvent* event) override;

    void onTrayActivated();
    void onExitProgram();


private:
    Ui::WindowsAssistClass ui;
    QSystemTrayIcon m_systemTray;
    QMenu m_trayMenu;

};
