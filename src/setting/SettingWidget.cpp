#include "SettingWidget.h"

SettingWidget::SettingWidget(QWidget* parent)
    : QWidget(parent) {
    ui.setupUi(this);
    initConnect();
}

SettingWidget::~SettingWidget() {
}

void SettingWidget::initConnect() {
    connect(ui.openMemoBtn, &QPushButton::clicked, this, &SettingWidget::onOpenMemoClick);
}

void SettingWidget::onOpenMemoClick() {
    // Todo(wangwenxi): �����ȡmemo·��������
}
