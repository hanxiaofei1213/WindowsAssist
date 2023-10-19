#pragma once
#include <QString>


struct MemoData {
    QString m_strContent = "";

    bool isValid() const {
        return !m_strContent.isEmpty();
    }
};
