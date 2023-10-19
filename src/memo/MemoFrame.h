#pragma once

#include <QFrame>
#include "MemoData.h"
#include "ui_MemoFrame.h"

class MemoManager;

// todo(wangwenxi): 应该有一个接口，并不关心底层是用什么实现


class MemoFrame : public QFrame {
    Q_OBJECT

public:
    MemoFrame(QWidget* parent = nullptr);
    ~MemoFrame();

protected:
    void initUi();
    void initConnect();
    void refreshUIData();

    void onAddBtnClicked();
    void onDeleteBtnClicked();

    MemoData getInputDataFromLineEdit() const;
    MemoData deleteSelectedFromList();
    void insertMemoData(const MemoData& data);

private:
    Ui::MemoFrameClass ui;
    MemoManager* m_pMgr = nullptr;
};

