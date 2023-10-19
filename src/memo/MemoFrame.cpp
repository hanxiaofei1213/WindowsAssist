#include "MemoFrame.h"
#include "MemoManager.h"

MemoFrame::MemoFrame(QWidget* parent) : QFrame(parent), m_pMgr(new MemoManager(this)) {
    ui.setupUi(this);

    initUi();
    initConnect();
}

MemoFrame::~MemoFrame() {
}

void MemoFrame::initUi() {
    refreshUIData();
}

void MemoFrame::initConnect() {
    connect(ui.addBtn, &QPushButton::clicked, this, &MemoFrame::onAddBtnClicked);
    connect(ui.deleteBtn, &QPushButton::clicked, this, &MemoFrame::onDeleteBtnClicked);
}

void MemoFrame::refreshUIData()
{
    QVector<MemoData>&& vecData = m_pMgr->listAllData();
    for (auto data : vecData) {
        insertMemoData(data);
    }
}

void MemoFrame::onAddBtnClicked() {
    MemoData&& data = getInputDataFromLineEdit();
    if (!data.isValid()) {
        return;
    }

    m_pMgr->saveRecord(data);
    insertMemoData(data);
    ui.lineEdit->clear();
}

void MemoFrame::onDeleteBtnClicked()
{
    MemoData&& data = deleteSelectedFromList();
    if (!data.isValid()) {
    	return;
    }

    m_pMgr->deleteRecord(data);
}

MemoData MemoFrame::getInputDataFromLineEdit() const
{
    MemoData data;
    data.m_strContent = ui.lineEdit->text().trimmed();
    return data;
}

MemoData MemoFrame::deleteSelectedFromList()
{
    MemoData data;
    QListWidgetItem* pItem = ui.listWidget->currentItem();
    if (!pItem) {
        return data;
    }

    data.m_strContent = pItem->text();
    delete pItem;
    return data;
}

void MemoFrame::insertMemoData(const MemoData& data)
{
    ui.listWidget->addItem(data.m_strContent);
}
