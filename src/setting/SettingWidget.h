#pragma once

#include <QWidget>
#include "ui_SettingWidget.h"

class SettingWidget : public QWidget {
    Q_OBJECT

public:
    SettingWidget(QWidget* parent = nullptr);
    ~SettingWidget();


protected:
    void initConnect();


private:
    Ui::SettingWidgetClass ui;
};
