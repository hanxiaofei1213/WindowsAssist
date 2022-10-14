#pragma once
#include <QString>
#include "utils/GlobalDefine.h"

struct ShortcutData {
    int m_nIndex = -1;
    ShortcutFuncId m_nFuncId = ShortcutFuncId::FUNC_UNKNOWN;
    QString m_strShortCut;
    QString m_strShortCutDescription;

    bool isValid() const {
        return m_nIndex != -1;
    }
};
