#pragma once

#include <QFrame>
#include "ui_MemoFrame.h"

class MemoManager;

class MemoFrame : public QFrame {
    Q_OBJECT

public:
    MemoFrame(QWidget* parent = nullptr);
    ~MemoFrame();

protected:
    void initUi();
    void initConnect();

    void onAddBtnClicked();

private:
    Ui::MemoFrameClass ui;
    MemoManager* m_pMgr = nullptr;
};

