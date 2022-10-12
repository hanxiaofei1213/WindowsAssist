#include "ShortcutWidget.h"
#include <QStringList>
#include <windows.h>

#include "utils/GlobalDefine.h"
#include "utils/KeyboardEvent.h"
#include "QHotkey/QHotkey/QHotkey"

ShortcutWidget::ShortcutWidget(QWidget* parent /*= nullptr*/) {
    initUI();
    initConnect();
    updateShortcut();

    // Test(wangwenxi): 测试
    QHotkey* hotkey = new QHotkey(QKeySequence("Esc"), true);
    connect(hotkey, &QHotkey::activated, [&]() {
        int key1 = VK_MENU;
        int key2 = VK_F4;
        KeyboardEvent keyboardEvent({ VK_MENU, VK_F4 });
        keyboardEvent.exec();
    });


}

ShortcutWidget::~ShortcutWidget() {

}

void ShortcutWidget::initUI() {
    ui.setupUi(this);
    QStringList horizontalLabelNames;
    horizontalLabelNames << QS("描述") << QS("快捷键");
    ui.tableWidget->setHorizontalHeaderLabels(horizontalLabelNames);
    ui.tableWidget->horizontalHeader()->setSectionsClickable(false);
    ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void ShortcutWidget::initConnect() {

}

void ShortcutWidget::updateShortcut() {
    // Todo(wangwenxi): 获取所有快捷键


    // Todo(wangwenxi): 注册快捷键，如果成功了，显示，不然显示空的

    insertShortcutInfoToLabel(0, QS("关闭窗口"), "Atl+1");
}

void ShortcutWidget::insertShortcutInfoToLabel(int nRow, const QString& strDes, const QString& strShortcut) {
    QTableWidgetItem* pDescriptionItem = new QTableWidgetItem(strDes);
    pDescriptionItem->setTextAlignment(Qt::AlignCenter);
    ui.tableWidget->setItem(nRow, static_cast<int>(TableHead::DESCRIPTION), pDescriptionItem);

    QTableWidgetItem* pShortcutItem = new QTableWidgetItem(strShortcut);
    pShortcutItem->setTextAlignment(Qt::AlignCenter);
    ui.tableWidget->setItem(nRow, static_cast<int>(TableHead::SHORTCUT_KEY), pShortcutItem);
}
