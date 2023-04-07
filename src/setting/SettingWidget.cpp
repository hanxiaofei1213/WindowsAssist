#include "SettingWidget.h"

SettingWidget::SettingWidget(QWidget* parent)
    : QWidget(parent) {
    ui.setupUi(this);
    initConnect();
}

SettingWidget::~SettingWidget() {
}

void SettingWidget::initConnect() {

}
