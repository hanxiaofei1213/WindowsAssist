#include "ShortcutWidget.h"
#include <QStringList>
#include <windows.h>

#include "utils/GlobalDefine.h"
#include "ShortcutData.h"

ShortcutWidget::ShortcutWidget(QWidget* parent /*= nullptr*/) : m_shortcutService(&m_shortcutRepository, &m_shortcutFunction) {
    initUI();
    initConnect();
    updateShortcut();
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
