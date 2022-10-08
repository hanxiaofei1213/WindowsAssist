#pragma once
#include <QFrame>
#include "ui_ShortcutWidget.h"

// Todo(wangwenxi): Ë«»÷±à¼­ÃèÊö£¬Ë«»÷±à¼­¿ì½Ý¼ü

class ShortcutWidget : public QFrame {
    Q_OBJECT
public:
    ShortcutWidget(QWidget* parent = nullptr);
    ~ShortcutWidget();

private:
    Ui::ShortcutWidget ui;

};

