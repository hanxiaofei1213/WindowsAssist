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

}

void MemoFrame::initConnect() {
    connect(ui.addBtn, &QPushButton::clicked, this, &MemoFrame::onAddBtnClicked);
}

void MemoFrame::onAddBtnClicked() {
    if (!m_pMgr) {
    	return;
    }

    QString strText = ui.lineEdit->text().trimmed();
    if (strText.isEmpty()) {
    	return;
    }

    ui.listWidget->addItem(strText);
    m_pMgr->saveRecord(strText);
    ui.lineEdit->clear();
}
