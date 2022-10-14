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
    setWindowTitle(QString::fromStdWString(L"Windows÷˙ ÷"));
    m_systemTray.setToolTip(QString::fromStdWString(L"Windows÷˙ ÷"));
    m_systemTray.setIcon(QIcon(":/img/res/trayIcon.png"));
    m_systemTray.show();
}

void WindowsAssist::initTrayMenu() {
    m_trayMenu.addAction(QString::fromStdWString(L"ÕÀ≥ˆ"), this, &WindowsAssist::slotExitProgram);

    m_systemTray.setContextMenu(&m_trayMenu);
}

void WindowsAssist::showEvent(QShowEvent* event) {

}

void WindowsAssist::closeEvent(QCloseEvent* event) {
    //showMinimized();
    exit(0);
}

void WindowsAssist::slotExitProgram() {
    exit(0);
}
