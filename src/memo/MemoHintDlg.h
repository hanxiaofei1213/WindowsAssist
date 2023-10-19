#pragma once

#include <QDialog>
#include "ui_MemoHintDlg.h"

class MemoHintDlg : public QDialog
{
    Q_OBJECT

public:
    MemoHintDlg(QWidget *parent = nullptr);
    ~MemoHintDlg();

private:
    Ui::MemoHintDlgClass ui;
};
