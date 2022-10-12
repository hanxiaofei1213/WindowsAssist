#pragma once
#include <QFrame>
#include "ui_ShortcutWidget.h"

// Todo(wangwenxi): ˫���༭������˫���༭��ݼ�

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

