#pragma once
#include <QFrame>
#include "ui_ShortcutWidget.h"

// Todo(wangwenxi): ˫���༭������˫���༭��ݼ�

class ShortcutWidget : public QFrame {
    Q_OBJECT
public:
    ShortcutWidget(QWidget* parent = nullptr);
    ~ShortcutWidget();

private:
    Ui::ShortcutWidget ui;

};

