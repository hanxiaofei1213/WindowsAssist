#include "WindowsAssist.h"

WindowsAssist::WindowsAssist(QWidget *parent)
    : QDialog(parent)
{
    initUi();
}

void WindowsAssist::initUi()
{
	ui.setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
}

void WindowsAssist::initStyleSheet()
{
    // Todo(wangwenxi): �����ʼ����ʽ��
}
