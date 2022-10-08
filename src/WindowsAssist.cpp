#include "WindowsAssist.h"
#include <QShowEvent>

WindowsAssist::WindowsAssist(QWidget* parent)
    : QDialog(parent), m_systemTray(this), m_trayMenu(this) {
    initUi();
}

void WindowsAssist::initUi() {
    ui.setupUi(this);
    initTrayMenu();

    setAttribute(Qt::WA_QuitOnClose, false);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint | Qt::WindowMinimizeButtonHint);
    setWindowIcon(QIcon(":/img/res/mainIcon.png"));
    setWindowTitle(QString::fromStdWString(L"Windows助手"));
    m_systemTray.setToolTip(QString::fromStdWString(L"Windows助手"));
    m_systemTray.setIcon(QIcon(":/img/res/trayIcon.png"));
    m_systemTray.show();
}

void WindowsAssist::initTrayMenu() {
    // Todo(wangwenxi): 菜单要设一下样式表
    m_trayMenu.addAction(QString::fromStdWString(L"退出"), this, &WindowsAssist::slotExitProgram);

    m_systemTray.setContextMenu(&m_trayMenu);
}

void WindowsAssist::showEvent(QShowEvent* event) {

}

void WindowsAssist::closeEvent(QCloseEvent* event) {
    showMinimized();
}

void WindowsAssist::slotExitProgram() {
    exit(0);
}
