#include "MemoHintDlg.h"

// todo(wangwenxi): 获取当前活动屏幕的坐标好像还有点麻烦哦，或者记录一下上次展示的位置，弄成可移动的
MemoHintDlg::MemoHintDlg(QWidget* parent)
    : QDialog(parent)
{
    ui.setupUi(this);
}

MemoHintDlg::~MemoHintDlg()
{}
