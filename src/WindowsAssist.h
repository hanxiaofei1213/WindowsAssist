#pragma once

#include <QtWidgets/QDialog>
#include <QSystemTrayIcon>
#include <QMenu>
#include "ui_WindowsAssist.h"

class WindowsAssist : public QDialog {
    Q_OBJECT

public:
    WindowsAssist(QWidget* parent = Q_NULLPTR);
    ~WindowsAssist();

    enum class Tab {
        Shortcut,
        Memo,
        Setting,
    };

    static WindowsAssist* self();

    // Todo(wangwenxi): ¥¶¿ÌºÙ«–∞Â

protected:
    void initUi();
    void initConnect();
    void initTrayMenu();
    void selectTab(Tab tab);

    virtual void showEvent(QShowEvent* event) override;
    virtual void closeEvent(QCloseEvent* event) override;

    void onTrayActivated(QSystemTrayIcon::ActivationReason reason);
    void onExitProgram();


private:
    Ui::WindowsAssistClass ui;
    static WindowsAssist* m_pSelf;
    QSystemTrayIcon m_systemTray;
    QMenu m_trayMenu;

};
