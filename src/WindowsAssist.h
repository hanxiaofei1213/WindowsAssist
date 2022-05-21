#pragma once

#include <QtWidgets/QDialog>
#include "ui_WindowsAssist.h"

class WindowsAssist : public QDialog
{
    Q_OBJECT

public:
    WindowsAssist(QWidget *parent = Q_NULLPTR);

private:
    Ui::WindowsAssistClass ui;
};
