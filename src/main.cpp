#include "WindowsAssist.h"
#include <QtWidgets/QApplication>
#include <vld.h>
#include <QFile>
#include <QTest>
#include <windows.h>
#include <memory>
#include "test/TestClass.h"

void setStyleSheet() {
    if (!qApp) {
        return;
    }

    QFile file(QString::fromStdWString(L":/qss/res/styleSheet.qss"));
    if (file.open(QFile::ReadOnly)) {
        QString strStyleSheet = file.readAll();
        file.close();
        qApp->setStyleSheet(strStyleSheet);
    }
}

int wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR cmdline, int nCmdShow)
{
    int argc = 0;
    QApplication a(argc, nullptr);
    setStyleSheet();
    WindowsAssist assist;
    assist.show();
    TestClass tc;
    QTest::qExec(&tc, 0, nullptr);
    return a.exec();
}
