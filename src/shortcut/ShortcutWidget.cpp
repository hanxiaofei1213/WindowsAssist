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
