#include "WindowsAssist.h"
#include <QShowEvent>

WindowsAssist* WindowsAssist::m_pSelf = nullptr;
WindowsAssist::WindowsAssist(QWidget* parent)
    : QDialog(parent), m_systemTray(this), m_trayMenu(this) {
    m_pSelf = this;
    initUi();
    initConnect();
}

WindowsAssist::~WindowsAssist() {
    m_pSelf = nullptr;
}

WindowsAssist* WindowsAssist::self() {
    return m_pSelf;
}

void WindowsAssist::initUi() {
    // Todo(wangwenxi): 默认选中第一个tab
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

void WindowsAssist::initConnect() {
    connect(&m_systemTray, &QSystemTrayIcon::activated, this, &WindowsAssist::onTrayActivated);
}

void WindowsAssist::initTrayMenu() {
    m_trayMenu.addAction(QString::fromStdWString(L"退出"), this, &WindowsAssist::onExitProgram);
    m_systemTray.setContextMenu(&m_trayMenu);
}

void WindowsAssist::showEvent(QShowEvent* event) {

}

void WindowsAssist::closeEvent(QCloseEvent* event) {
    hide();
    //exit(0);
}

void WindowsAssist::onTrayActivated(QSystemTrayIcon::ActivationReason reason) {
    if (reason == QSystemTrayIcon::DoubleClick || reason == QSystemTrayIcon::Trigger) {
        show();
    }
}

void WindowsAssist::onExitProgram() {
    exit(0);
}
