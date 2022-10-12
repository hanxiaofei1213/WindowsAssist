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

    // Test(wangwenxi): ����
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
    horizontalLabelNames << QS("����") << QS("��ݼ�");
    ui.tableWidget->setHorizontalHeaderLabels(horizontalLabelNames);
    ui.tableWidget->horizontalHeader()->setSectionsClickable(false);
    ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void ShortcutWidget::initConnect() {

}

void ShortcutWidget::updateShortcut() {
    // Todo(wangwenxi): ��ȡ���п�ݼ�


    // Todo(wangwenxi): ע���ݼ�������ɹ��ˣ���ʾ����Ȼ��ʾ�յ�

    insertShortcutInfoToLabel(0, QS("�رմ���"), "Atl+1");
}

void ShortcutWidget::insertShortcutInfoToLabel(int nRow, const QString& strDes, const QString& strShortcut) {
    QTableWidgetItem* pDescriptionItem = new QTableWidgetItem(strDes);
    pDescriptionItem->setTextAlignment(Qt::AlignCenter);
    ui.tableWidget->setItem(nRow, static_cast<int>(TableHead::DESCRIPTION), pDescriptionItem);

    QTableWidgetItem* pShortcutItem = new QTableWidgetItem(strShortcut);
    pShortcutItem->setTextAlignment(Qt::AlignCenter);
    ui.tableWidget->setItem(nRow, static_cast<int>(TableHead::SHORTCUT_KEY), pShortcutItem);
}
