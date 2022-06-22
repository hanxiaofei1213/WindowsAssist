#include "WindowsAssist.h"
#include <QShowEvent>

WindowsAssist::WindowsAssist(QWidget *parent)
    : QDialog(parent), m_systemTray(this), m_trayMenu(this)
{
    initUi();
}

void WindowsAssist::initUi()
{
	ui.setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    setWindowIcon(QIcon(":/img/res/mainIcon.png"));
    setWindowTitle(QString::fromStdWString(L"Windows����"));
    m_systemTray.setToolTip(QString::fromStdWString(L"Windows����"));
    m_systemTray.setIcon(QIcon(":/img/res/trayIcon.png"));
    m_trayMenu.addAction(QString::fromStdWString(L"�˳�"), this, &WindowsAssist::slotExitProgram);

    m_systemTray.setContextMenu(&m_trayMenu);
	m_systemTray.show();
}

void WindowsAssist::initStyleSheet()
{
    // Todo(wangwenxi): �����ʼ����ʽ��
}

void WindowsAssist::showEvent(QShowEvent* event)
{

}

void WindowsAssist::slotExitProgram()
{
    exit(0);
}
