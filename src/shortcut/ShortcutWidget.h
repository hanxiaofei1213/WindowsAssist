#pragma once
#include <QFrame>
#include "ui_ShortcutWidget.h"

// Todo(wangwenxi): Ë«»÷±à¼­ÃèÊö£¬Ë«»÷±à¼­¿ì½Ý¼ü

class ShortcutWidget : public QFrame {
    Q_OBJECT
public:
    enum class TableHead {
        DESCRIPTION = 0,
        SHORTCUT_KEY = 1,
    };

    ShortcutWidget(QWidget* parent = nullptr);
    ~ShortcutWidget();

protected:
    void initUI();
    void initConnect();
    void updateShortcut();

    void insertShortcutInfoToLabel(int nRow, const QString& strDes, const QString& strShortcut);

private:
    Ui::ShortcutWidget ui;

};

