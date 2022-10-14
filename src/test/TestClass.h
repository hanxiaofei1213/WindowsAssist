#pragma once
#include <QObject>
#include <QTest>

class TestClass : public QObject {
    Q_OBJECT
private slots:
    void test0();

    void test_ShortcutService_registerShortcut();

    void test_ShortcutFunction_getProcessor();
};

